#include <Bela.h>
#include "RNBO.h"
#include <string>
#include <MiscUtilities.h>
#include <algorithm>
#include <libraries/Trill/Trill.h>
#include <cmath>
#include "DFRobot_VisualRotaryEncoder.h"


DFRobot_VisualRotaryEncoder_I2C sensor_1(/*i2cAddr = */0x54, /*i2cBus = */1);
DFRobot_VisualRotaryEncoder_I2C sensor_2(/*i2cAddr = */0x55, /*i2cBus = */1);

#define NUM_CAP_CHANNELS 30

Trill touchSensor;

static const unsigned int kNoParam = -1; // use this below if you want to skip a channel

// A list of exposed parameters is printed when the program starts. Enter here
// the indeces of those you want to control from analog ins.
// The first n analog ins will be used to set these parameters. These values
// are set at every block, which means that the default value or the value set
// by a preset will be immediately overridden if the corresponding paramter is
// controlled by analogIn
static std::vector<unsigned int> parametersFromAnalog = {};
// same but for mapping digital ins to parameters. These are only updated upon
// change, so preset-loaded values are not necessarily overridden immediately
static std::vector<unsigned int> parametersFromDigital = {};
//static std::vector<unsigned int> parametersToDigital = {3};

static std::vector<unsigned int> parametersFromTrill = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};

static std::vector<unsigned int> parametersFromEncoder1 = {};
static std::vector<unsigned int> parametersFromEncoder2 = {};

// whether to show hidden parameters when printing the parameters list
bool showHiddenParameters = false;

// Readings for all the different pads on the Trill Craft
float gSensorReading[NUM_CAP_CHANNELS] = { 0.0 };

float encoder1Value;
float encoder2Value;

// Sleep time between reads from the device
unsigned int gTaskSleepTime = 12000; // microseconds

// has to be a pointer to ensure that it gets initialised after
// initialisation for the static PlatformInterfaceStdLib platformInstance has already taken place
static RNBO::CoreObject* rnbo;
static RNBO::PresetList* presetList;
static std::vector<bool> digitalParametersPast(parametersFromDigital.size());



void readEncoder(void*) {
	uint16_t pastValue = -1;
	while(!Bela_stopRequested())
	{
		/**
		 * get the encoder current count
		 * return value range： 0-1023
		 */
		encoder1Value = sensor_1.getEncoderValue();
		encoder2Value = sensor_2.getEncoderValue();
	//	if(encoder1Value != pastValue)
	//		printf("The encoder 1 current counts: %d\n", encoder1Value);
		pastValue = encoder1Value;
		// set the frequency of the oscillator accordingly
		
		
	//	if(encoder2Value != pastValue)
	//		printf("The encoder 2 current counts: %d\n", encoder2Value);
		pastValue = encoder2Value;
		// set the frequency of the oscillator accordingly
		
		/**
		 * Detect if the button is pressed
		 * return true when the button pressed，otherwise, return false
		 */
		if(sensor_1.detectButtonDown()){
			/**
			 * set the encoder count value
			 * value range[0, 1023], the setting is invalid when out of range
			 * In this example, set the encoder value to zero when detecting the button pressed, and you can see all the LEDs that light up before turning off
			 */
			sensor_1.setEncoderValue(0);
		}
		
		if(sensor_2.detectButtonDown()){
		
			sensor_2.setEncoderValue(0);
		}
		usleep(gTaskSleepTime);
	}
}

void Bela_userSettings(BelaInitSettings *settings)
{
	settings->uniformSampleRate = 1;
	settings->interleave = 0;
	settings->analogOutputsPersist = 0;
}

void loop(void*)
{
	while(!Bela_stopRequested())
	{
		// Read raw data from sensor
		touchSensor.readI2C();
		for(unsigned int i = 0; i < NUM_CAP_CHANNELS; i++)
			gSensorReading[i] = touchSensor.rawData[i];
		usleep(gTaskSleepTime);
	}
}

template <typename T>
static ssize_t findIndex(const T value, std::vector<T> const& vals)
{
	ssize_t found = -1;
	for(size_t i = 0; i < vals.size(); ++i)
	{
		if(value == vals[i])
		{
			found = i;
			break;
		}
	}
	return found;
}

bool setup(BelaContext *context, void *userData)
{
	// verify settings have been applied
	if(context->flags & BELA_FLAG_INTERLEAVED)
	{
		fprintf(stderr, "You need a non-interleaved buffer\n");
		return false;
	}
	if(context->analogSampleRate != context->audioSampleRate)
	{
		fprintf(stderr, "You need the analog and audio channels to have the same sampling rate\n");
		return false;
	}
	rnbo = new RNBO::CoreObject;
	parametersFromAnalog.resize(std::min(parametersFromAnalog.size(), context->analogInChannels));
	parametersFromDigital.resize(std::min(parametersFromDigital.size(), context->digitalChannels));
	unsigned int hiddenParameters = 0;
	printf("Available parameters: %u\n", rnbo->getNumParameters());
	for(unsigned int n = 0; n < rnbo->getNumParameters(); ++n)
	{
		RNBO::ParameterInfo info;
		rnbo->getParameterInfo(n, &info);
		if((!info.visible || info.debug) && !showHiddenParameters)
		{
			hiddenParameters++;
			continue;
		}
		printf("[%d] %s", n, rnbo->getParameterName(n));
		ssize_t analog = findIndex(n, parametersFromAnalog);
		ssize_t digital = findIndex(n, parametersFromDigital);

		ssize_t trill = findIndex(n, parametersFromTrill);

		if(analog >= 0)
			printf(" - controlled by analog in %d", analog);
		if(trill >= 0)
			printf(" - controlled by trill in %d", trill);
		if(digital >= 0) {
			printf(" - controlled by digital in %d", digital);
			pinMode(context, 0, digital, INPUT);
		}
		printf("\n");
		if(analog >= 0 && digital >= 0)
			fprintf(stderr, "Parameter %d controlled by both analog and digital in. Digital in ignored\n", digital);
	}
	if(hiddenParameters)
		printf("+ %d hidden parameters\n", hiddenParameters);
	std::string presetFile = "presets.json";
	printf("Loading presets from %s\n", presetFile.c_str());
	std::string s = IoUtils::readTextFile(presetFile);
	if(s.size())
	{
		// load presets, see C++ snippets from https://rnbo.cycling74.com/learn/presets-with-snapshots
		presetList = new RNBO::PresetList(s);
		printf("Found %d presets\n", presetList->size());
		if(presetList->size())
		{
			unsigned int idx = 0;
			RNBO::UniquePresetPtr preset = presetList->presetAtIndex(idx);
			printf("Loading preset %d: %s\n", idx, presetList->presetNameAtIndex(idx).c_str());
			rnbo->setPreset(std::move(preset));
		}
	}
	rnbo->prepareToProcess(context->audioSampleRate, context->audioFrames, true);

	// Setup a Trill Craft sensor on i2c bus 1, using the default mode and address
	if(touchSensor.setup(1, Trill::CRAFT) != 0) {
		fprintf(stderr, "Unable to initialise Trill Craft\n");
		return false;
	}
	touchSensor.printDetails();
	
	if(NO_ERR != sensor_1.begin()) {
		fprintf(stderr, "Error while initialising sensor_1. Are the address and bus correct?\n");
		return false;
	}
	
	if(NO_ERR != sensor_2.begin()) {
		fprintf(stderr, "Error while initialising sensor_2. Are the address and bus correct?\n");
		return false;
	}

	/**
	 * Get the encoder current gain factor, and the numerical accuracy for turning one step
	 * Accuracy range：1~51，the minimum is 1 (light up one LED about every 2.5 turns), the maximum is 51 (light up one LED every one step rotation)
	 * Return value range： 1-51
	 */
	uint8_t gainCoefficient1 = sensor_1.getGainCoefficient();
//	printf("Encoder current gain coefficient: %d\n", gainCoefficient1);
	
	uint8_t gainCoefficient2 = sensor_2.getGainCoefficient();
//	printf("Encoder current gain coefficient: %d\n", gainCoefficient2);

	/**
	 * set the current gain factor of the encoder, and the numerical accuracy of turning one step
	 * accuracy range：1~51，the minimum is 1 (light up one LED about every 2.5 turns), the maximum is 51 (light up one LED every one step rotation)
	 * gainValue range[1, 51], the setting is invalid when out of range, tip: small amplitude adjustment of gain factor has little effect on LED change
	 */
	gainCoefficient1 = 25;
//	printf("Setting encoder1 gain coefficient to: %d\n", gainCoefficient1);
	sensor_2.setGainCoefficient(gainCoefficient1);
	
	gainCoefficient2 = 25;
//	printf("Setting encoder2 gain coefficient to: %d\n", gainCoefficient2);
	sensor_2.setGainCoefficient(gainCoefficient2);
	
	usleep(10000);

	// read it back to verify it was set correctly
	gainCoefficient1 = sensor_1.getGainCoefficient();
//	printf("Encoder 1 current gain coefficient: %d\n", gainCoefficient1);
	
		// read it back to verify it was set correctly
	gainCoefficient2 = sensor_2.getGainCoefficient();
//	printf("Encoder 2 current gain coefficient: %d\n", gainCoefficient2);

	// start a separate thread to read the encoder value.
	Bela_runAuxiliaryTask(readEncoder);

	// Set and schedule auxiliary task for reading sensor data from the I2C bus
	Bela_runAuxiliaryTask(loop);

	return true;
}

void render(BelaContext *context, void *userData)
{
	unsigned int nFrames = context->audioFrames;
	unsigned int nAnalogParameters = parametersFromAnalog.size();

	unsigned int nTrillParameters = parametersFromTrill.size();
	
	

	for(unsigned int c = 0; c < nAnalogParameters; ++c)
		rnbo->setParameterValueNormalized(parametersFromAnalog[c], analogReadNI(context, 0, c));

	for(unsigned int c = 0; c < nTrillParameters; ++c)
		rnbo->setParameterValueNormalized(parametersFromTrill[c], gSensorReading[c]);

	rnbo->setParameterValueNormalized(parametersFromEncoder1[0], encoder1Value);
	rnbo->setParameterValueNormalized(parametersFromEncoder2[0], encoder2Value); 


	for(unsigned int c = 0; c < parametersFromDigital.size(); ++c)
	{
		bool value = digitalRead(context, 0, c);
		// only send on change
		if(value != digitalParametersPast[c])
		{
			rnbo->setParameterValueNormalized(parametersFromDigital[c], value);
			digitalParametersPast[c] = value;
		}
	}

	unsigned int maxInChannels = context->audioInChannels + context->analogInChannels - nAnalogParameters;
	unsigned int nInChannels = rnbo->getNumInputChannels();
	if(nInChannels > maxInChannels)
		nInChannels = maxInChannels;
	float* inputs[nInChannels];
	for(unsigned int c = 0; c < nInChannels; ++c)
	{
		if(c < context->audioInChannels)
			inputs[c] = (float*)(context->audioIn + c * nFrames);
		else
			inputs[c] = (float*)(context->analogIn + (c - nAnalogParameters - context->audioInChannels) * nFrames);
	}

	unsigned int maxOutChannels = context->audioOutChannels + context->analogOutChannels;
	unsigned int nOutChannels = rnbo->getNumOutputChannels();
	if(nOutChannels > maxOutChannels)
		nOutChannels = maxOutChannels;
	float* outputs[nOutChannels];
	for(unsigned int c = 0; c < nOutChannels; ++c)
	{
		if(c < context->audioOutChannels)
			outputs[c] = context->audioOut + c * nFrames;
		else
			outputs[c] = context->analogOut + (c - (context->audioOutChannels)) * nFrames;
	}
	rnbo->process(inputs, nInChannels, outputs, nOutChannels, nFrames);
}

void cleanup(BelaContext *context, void *userData)
{
	delete presetList;
	delete rnbo;
}
