/*******************************************************************************************************************
Copyright (c) 2023 Cycling '74

The code that Max generates automatically and that end users are capable of
exporting and using, and any associated documentation files (the “Software”)
is a work of authorship for which Cycling '74 is the author and owner for
copyright purposes.

This Software is dual-licensed either under the terms of the Cycling '74
License for Max-Generated Code for Export, or alternatively under the terms
of the General Public License (GPL) Version 3. You may use the Software
according to either of these licenses as it is most appropriate for your
project on a case-by-case basis (proprietary or not).

A) Cycling '74 License for Max-Generated Code for Export

A license is hereby granted, free of charge, to any person obtaining a copy
of the Software (“Licensee”) to use, copy, modify, merge, publish, and
distribute copies of the Software, and to permit persons to whom the Software
is furnished to do so, subject to the following conditions:

The Software is licensed to Licensee for all uses that do not include the sale,
sublicensing, or commercial distribution of software that incorporates this
source code. This means that the Licensee is free to use this software for
educational, research, and prototyping purposes, to create musical or other
creative works with software that incorporates this source code, or any other
use that does not constitute selling software that makes use of this source
code. Commercial distribution also includes the packaging of free software with
other paid software, hardware, or software-provided commercial services.

For entities with UNDER $200k in annual revenue or funding, a license is hereby
granted, free of charge, for the sale, sublicensing, or commercial distribution
of software that incorporates this source code, for as long as the entity's
annual revenue remains below $200k annual revenue or funding.

For entities with OVER $200k in annual revenue or funding interested in the
sale, sublicensing, or commercial distribution of software that incorporates
this source code, please send inquiries to licensing@cycling74.com.

The above copyright notice and this license shall be included in all copies or
substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Please see
https://support.cycling74.com/hc/en-us/articles/10730637742483-RNBO-Export-Licensing-FAQ
for additional information

B) General Public License Version 3 (GPLv3)
Details of the GPLv3 license can be found at: https://www.gnu.org/licenses/gpl-3.0.html
*******************************************************************************************************************/

#include "RNBO_Common.h"
#include "RNBO_AudioSignal.h"

namespace RNBO {


#define floor(x) ((long)(x))

#if defined(__GNUC__) || defined(__clang__)
    #define RNBO_RESTRICT __restrict__
#elif defined(_MSC_VER)
    #define RNBO_RESTRICT __restrict
#endif

#define FIXEDSIZEARRAYINIT(...) { }

class rnbomatic : public PatcherInterfaceImpl {
public:

class RNBOSubpatcher_395 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    RNBOSubpatcher_395()
    {
    }
    
    ~RNBOSubpatcher_395()
    {
    }
    
    virtual rnbomatic* getPatcher() const {
        return static_cast<rnbomatic *>(_parentPatcher);
    }
    
    rnbomatic* getTopLevelPatcher() {
        return this->getPatcher()->getTopLevelPatcher();
    }
    
    void cancelClockEvents()
    {
    }
    
    Index getNumMidiInputPorts() const {
        return 0;
    }
    
    void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}
    
    Index getNumMidiOutputPorts() const {
        return 0;
    }
    
    void process(
        const SampleValue * const* inputs,
        Index numInputs,
        SampleValue * const* outputs,
        Index numOutputs,
        Index n
    ) {
        RNBO_UNUSED(numOutputs);
        RNBO_UNUSED(outputs);
        RNBO_UNUSED(numInputs);
        RNBO_UNUSED(inputs);
        this->vs = n;
        this->updateTime(this->getEngine()->getCurrentTime());
        this->stackprotect_perform(n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
            this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
            this->didAllocateSignals = true;
        }
    
        const bool sampleRateChanged = sampleRate != this->sr;
        const bool maxvsChanged = maxBlockSize != this->maxvs;
        const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;
    
        if (sampleRateChanged || maxvsChanged) {
            this->vs = maxBlockSize;
            this->maxvs = maxBlockSize;
            this->sr = sampleRate;
            this->invsr = 1 / sampleRate;
        }
    
        RNBO_UNUSED(forceDSPSetup);
    
        if (sampleRateChanged)
            this->onSampleRateChanged(sampleRate);
    }
    
    void setProbingTarget(MessageTag id) {
        switch (id) {
        default:
            {
            this->setProbingIndex(-1);
            break;
            }
        }
    }
    
    void setProbingIndex(ProbingIndex ) {}
    
    Index getProbingChannels(MessageTag outletId) const {
        RNBO_UNUSED(outletId);
        return 0;
    }
    
    Index getIsMuted()  {
        return this->isMuted;
    }
    
    void setIsMuted(Index v)  {
        this->isMuted = v;
    }
    
    Index getPatcherSerial() const {
        return 0;
    }
    
    void getState(PatcherStateInterface& ) {}
    
    void setState() {}
    
    void getPreset(PatcherStateInterface& preset) {
        this->param_01_getPresetValue(getSubState(preset, "note0"));
        this->param_02_getPresetValue(getSubState(preset, "note1"));
        this->param_03_getPresetValue(getSubState(preset, "note2"));
        this->param_04_getPresetValue(getSubState(preset, "note3"));
        this->param_05_getPresetValue(getSubState(preset, "note4"));
        this->param_06_getPresetValue(getSubState(preset, "note5"));
        this->param_07_getPresetValue(getSubState(preset, "note6"));
        this->param_08_getPresetValue(getSubState(preset, "note7"));
        this->param_09_getPresetValue(getSubState(preset, "note8"));
        this->param_10_getPresetValue(getSubState(preset, "note9"));
        this->param_11_getPresetValue(getSubState(preset, "note10"));
        this->param_12_getPresetValue(getSubState(preset, "note11"));
        this->param_13_getPresetValue(getSubState(preset, "note12"));
        this->param_14_getPresetValue(getSubState(preset, "note13"));
        this->param_15_getPresetValue(getSubState(preset, "note14"));
        this->param_16_getPresetValue(getSubState(preset, "note15"));
        this->param_17_getPresetValue(getSubState(preset, "note16"));
        this->param_18_getPresetValue(getSubState(preset, "note17"));
        this->param_19_getPresetValue(getSubState(preset, "note18"));
        this->param_20_getPresetValue(getSubState(preset, "note19"));
        this->param_21_getPresetValue(getSubState(preset, "note20"));
        this->param_22_getPresetValue(getSubState(preset, "note21"));
        this->param_23_getPresetValue(getSubState(preset, "note22"));
        this->param_24_getPresetValue(getSubState(preset, "note23"));
        this->param_25_getPresetValue(getSubState(preset, "note24"));
        this->param_26_getPresetValue(getSubState(preset, "note25"));
        this->param_27_getPresetValue(getSubState(preset, "note26"));
        this->param_28_getPresetValue(getSubState(preset, "note27"));
        this->param_29_getPresetValue(getSubState(preset, "note28"));
        this->param_30_getPresetValue(getSubState(preset, "note29"));
    }
    
    void processTempoEvent(MillisecondTime , Tempo ) {}
    
    void processTransportEvent(MillisecondTime , TransportState ) {}
    
    void processBeatTimeEvent(MillisecondTime , BeatTime ) {}
    
    void onSampleRateChanged(double ) {}
    
    void processTimeSignatureEvent(MillisecondTime , int , int ) {}
    
    void setParameterValue(ParameterIndex index, ParameterValue v, MillisecondTime time) {
        this->updateTime(time);
    
        switch (index) {
        case 0:
            {
            this->param_01_value_set(v);
            break;
            }
        case 1:
            {
            this->param_02_value_set(v);
            break;
            }
        case 2:
            {
            this->param_03_value_set(v);
            break;
            }
        case 3:
            {
            this->param_04_value_set(v);
            break;
            }
        case 4:
            {
            this->param_05_value_set(v);
            break;
            }
        case 5:
            {
            this->param_06_value_set(v);
            break;
            }
        case 6:
            {
            this->param_07_value_set(v);
            break;
            }
        case 7:
            {
            this->param_08_value_set(v);
            break;
            }
        case 8:
            {
            this->param_09_value_set(v);
            break;
            }
        case 9:
            {
            this->param_10_value_set(v);
            break;
            }
        case 10:
            {
            this->param_11_value_set(v);
            break;
            }
        case 11:
            {
            this->param_12_value_set(v);
            break;
            }
        case 12:
            {
            this->param_13_value_set(v);
            break;
            }
        case 13:
            {
            this->param_14_value_set(v);
            break;
            }
        case 14:
            {
            this->param_15_value_set(v);
            break;
            }
        case 15:
            {
            this->param_16_value_set(v);
            break;
            }
        case 16:
            {
            this->param_17_value_set(v);
            break;
            }
        case 17:
            {
            this->param_18_value_set(v);
            break;
            }
        case 18:
            {
            this->param_19_value_set(v);
            break;
            }
        case 19:
            {
            this->param_20_value_set(v);
            break;
            }
        case 20:
            {
            this->param_21_value_set(v);
            break;
            }
        case 21:
            {
            this->param_22_value_set(v);
            break;
            }
        case 22:
            {
            this->param_23_value_set(v);
            break;
            }
        case 23:
            {
            this->param_24_value_set(v);
            break;
            }
        case 24:
            {
            this->param_25_value_set(v);
            break;
            }
        case 25:
            {
            this->param_26_value_set(v);
            break;
            }
        case 26:
            {
            this->param_27_value_set(v);
            break;
            }
        case 27:
            {
            this->param_28_value_set(v);
            break;
            }
        case 28:
            {
            this->param_29_value_set(v);
            break;
            }
        case 29:
            {
            this->param_30_value_set(v);
            break;
            }
        }
    }
    
    void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValue(index, value, time);
    }
    
    void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValueNormalized(index, value, time);
    }
    
    ParameterValue getParameterValue(ParameterIndex index)  {
        switch (index) {
        case 0:
            {
            return this->param_01_value;
            }
        case 1:
            {
            return this->param_02_value;
            }
        case 2:
            {
            return this->param_03_value;
            }
        case 3:
            {
            return this->param_04_value;
            }
        case 4:
            {
            return this->param_05_value;
            }
        case 5:
            {
            return this->param_06_value;
            }
        case 6:
            {
            return this->param_07_value;
            }
        case 7:
            {
            return this->param_08_value;
            }
        case 8:
            {
            return this->param_09_value;
            }
        case 9:
            {
            return this->param_10_value;
            }
        case 10:
            {
            return this->param_11_value;
            }
        case 11:
            {
            return this->param_12_value;
            }
        case 12:
            {
            return this->param_13_value;
            }
        case 13:
            {
            return this->param_14_value;
            }
        case 14:
            {
            return this->param_15_value;
            }
        case 15:
            {
            return this->param_16_value;
            }
        case 16:
            {
            return this->param_17_value;
            }
        case 17:
            {
            return this->param_18_value;
            }
        case 18:
            {
            return this->param_19_value;
            }
        case 19:
            {
            return this->param_20_value;
            }
        case 20:
            {
            return this->param_21_value;
            }
        case 21:
            {
            return this->param_22_value;
            }
        case 22:
            {
            return this->param_23_value;
            }
        case 23:
            {
            return this->param_24_value;
            }
        case 24:
            {
            return this->param_25_value;
            }
        case 25:
            {
            return this->param_26_value;
            }
        case 26:
            {
            return this->param_27_value;
            }
        case 27:
            {
            return this->param_28_value;
            }
        case 28:
            {
            return this->param_29_value;
            }
        case 29:
            {
            return this->param_30_value;
            }
        default:
            {
            return 0;
            }
        }
    }
    
    ParameterIndex getNumSignalInParameters() const {
        return 0;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 30;
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        case 0:
            {
            return "note0";
            }
        case 1:
            {
            return "note1";
            }
        case 2:
            {
            return "note2";
            }
        case 3:
            {
            return "note3";
            }
        case 4:
            {
            return "note4";
            }
        case 5:
            {
            return "note5";
            }
        case 6:
            {
            return "note6";
            }
        case 7:
            {
            return "note7";
            }
        case 8:
            {
            return "note8";
            }
        case 9:
            {
            return "note9";
            }
        case 10:
            {
            return "note10";
            }
        case 11:
            {
            return "note11";
            }
        case 12:
            {
            return "note12";
            }
        case 13:
            {
            return "note13";
            }
        case 14:
            {
            return "note14";
            }
        case 15:
            {
            return "note15";
            }
        case 16:
            {
            return "note16";
            }
        case 17:
            {
            return "note17";
            }
        case 18:
            {
            return "note18";
            }
        case 19:
            {
            return "note19";
            }
        case 20:
            {
            return "note20";
            }
        case 21:
            {
            return "note21";
            }
        case 22:
            {
            return "note22";
            }
        case 23:
            {
            return "note23";
            }
        case 24:
            {
            return "note24";
            }
        case 25:
            {
            return "note25";
            }
        case 26:
            {
            return "note26";
            }
        case 27:
            {
            return "note27";
            }
        case 28:
            {
            return "note28";
            }
        case 29:
            {
            return "note29";
            }
        default:
            {
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        case 0:
            {
            return "BellaNotesInput/note0[1]";
            }
        case 1:
            {
            return "BellaNotesInput/note1";
            }
        case 2:
            {
            return "BellaNotesInput/note2";
            }
        case 3:
            {
            return "BellaNotesInput/note3";
            }
        case 4:
            {
            return "BellaNotesInput/note4";
            }
        case 5:
            {
            return "BellaNotesInput/note5";
            }
        case 6:
            {
            return "BellaNotesInput/note6";
            }
        case 7:
            {
            return "BellaNotesInput/note7";
            }
        case 8:
            {
            return "BellaNotesInput/note8";
            }
        case 9:
            {
            return "BellaNotesInput/note9";
            }
        case 10:
            {
            return "BellaNotesInput/note10";
            }
        case 11:
            {
            return "BellaNotesInput/note11";
            }
        case 12:
            {
            return "BellaNotesInput/note12";
            }
        case 13:
            {
            return "BellaNotesInput/note13";
            }
        case 14:
            {
            return "BellaNotesInput/note14";
            }
        case 15:
            {
            return "BellaNotesInput/note15";
            }
        case 16:
            {
            return "BellaNotesInput/note16";
            }
        case 17:
            {
            return "BellaNotesInput/note17";
            }
        case 18:
            {
            return "BellaNotesInput/note18";
            }
        case 19:
            {
            return "BellaNotesInput/note19";
            }
        case 20:
            {
            return "BellaNotesInput/note20";
            }
        case 21:
            {
            return "BellaNotesInput/note21";
            }
        case 22:
            {
            return "BellaNotesInput/note22";
            }
        case 23:
            {
            return "BellaNotesInput/note23";
            }
        case 24:
            {
            return "BellaNotesInput/note24";
            }
        case 25:
            {
            return "BellaNotesInput/note25";
            }
        case 26:
            {
            return "BellaNotesInput/note26";
            }
        case 27:
            {
            return "BellaNotesInput/note27";
            }
        case 28:
            {
            return "BellaNotesInput/note28";
            }
        case 29:
            {
            return "BellaNotesInput/note29";
            }
        default:
            {
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex index, ParameterInfo * info) const {
        {
            switch (index) {
            case 0:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 1:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 2:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 3:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 4:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 5:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 6:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 7:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 8:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 9:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 10:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 11:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 12:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 13:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 14:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 15:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 16:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 17:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 18:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 19:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 20:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 21:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 22:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 23:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 24:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 25:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 26:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 27:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 28:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 29:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            }
        }
    }
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void setParameterOffset(ParameterIndex offset) {
        this->parameterOffset = offset;
    }
    
    ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
        if (steps == 1) {
            if (normalizedValue > 0) {
                normalizedValue = 1.;
            }
        } else {
            ParameterValue oneStep = (number)1. / (steps - 1);
            ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
            normalizedValue = numberOfSteps * oneStep;
        }
    
        return normalizedValue;
    }
    
    ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
            {
            {
                value = (value < 0 ? 0 : (value > 1 ? 1 : value));
                ParameterValue normalizedValue = (value - 0) / (1 - 0);
                return normalizedValue;
            }
            }
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
            {
            {
                value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
                {
                    return 0 + value * (1 - 0);
                }
            }
            }
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        case 0:
            {
            return this->param_01_value_constrain(value);
            }
        case 1:
            {
            return this->param_02_value_constrain(value);
            }
        case 2:
            {
            return this->param_03_value_constrain(value);
            }
        case 3:
            {
            return this->param_04_value_constrain(value);
            }
        case 4:
            {
            return this->param_05_value_constrain(value);
            }
        case 5:
            {
            return this->param_06_value_constrain(value);
            }
        case 6:
            {
            return this->param_07_value_constrain(value);
            }
        case 7:
            {
            return this->param_08_value_constrain(value);
            }
        case 8:
            {
            return this->param_09_value_constrain(value);
            }
        case 9:
            {
            return this->param_10_value_constrain(value);
            }
        case 10:
            {
            return this->param_11_value_constrain(value);
            }
        case 11:
            {
            return this->param_12_value_constrain(value);
            }
        case 12:
            {
            return this->param_13_value_constrain(value);
            }
        case 13:
            {
            return this->param_14_value_constrain(value);
            }
        case 14:
            {
            return this->param_15_value_constrain(value);
            }
        case 15:
            {
            return this->param_16_value_constrain(value);
            }
        case 16:
            {
            return this->param_17_value_constrain(value);
            }
        case 17:
            {
            return this->param_18_value_constrain(value);
            }
        case 18:
            {
            return this->param_19_value_constrain(value);
            }
        case 19:
            {
            return this->param_20_value_constrain(value);
            }
        case 20:
            {
            return this->param_21_value_constrain(value);
            }
        case 21:
            {
            return this->param_22_value_constrain(value);
            }
        case 22:
            {
            return this->param_23_value_constrain(value);
            }
        case 23:
            {
            return this->param_24_value_constrain(value);
            }
        case 24:
            {
            return this->param_25_value_constrain(value);
            }
        case 25:
            {
            return this->param_26_value_constrain(value);
            }
        case 26:
            {
            return this->param_27_value_constrain(value);
            }
        case 27:
            {
            return this->param_28_value_constrain(value);
            }
        case 28:
            {
            return this->param_29_value_constrain(value);
            }
        case 29:
            {
            return this->param_30_value_constrain(value);
            }
        default:
            {
            return value;
            }
        }
    }
    
    void scheduleParamInit(ParameterIndex index, Index order) {
        this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
    }
    
    void processClockEvent(MillisecondTime , ClockId , bool , ParameterValue ) {}
    
    void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}
    
    void processOutletEvent(
        EngineLink* sender,
        OutletIndex index,
        ParameterValue value,
        MillisecondTime time
    ) {
        this->updateTime(time);
        this->processOutletAtCurrentTime(sender, index, value);
    }
    
    void processNumMessage(MessageTag , MessageTag , MillisecondTime , number ) {}
    
    void processListMessage(MessageTag , MessageTag , MillisecondTime , const list& ) {}
    
    void processBangMessage(MessageTag , MessageTag , MillisecondTime ) {}
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
    
        }
    
        return nullptr;
    }
    
    DataRef* getDataRef(DataRefIndex index)  {
        switch (index) {
        default:
            {
            return nullptr;
            }
        }
    }
    
    DataRefIndex getNumDataRefs() const {
        return 0;
    }
    
    void fillDataRef(DataRefIndex , DataRef& ) {}
    
    void processDataViewUpdate(DataRefIndex , MillisecondTime ) {}
    
    void initialize() {
        this->assign_defaults();
        this->setState();
    }
    
    protected:
    
    void param_01_value_set(number v) {
        v = this->param_01_value_constrain(v);
        this->param_01_value = v;
        this->sendParameter(0, false);
    
        if (this->param_01_value != this->param_01_lastValue) {
            this->getEngine()->presetTouched();
            this->param_01_lastValue = this->param_01_value;
        }
    
        {
            list converted = {v};
            this->prepend_01_a_set(converted);
        }
    }
    
    void param_02_value_set(number v) {
        v = this->param_02_value_constrain(v);
        this->param_02_value = v;
        this->sendParameter(1, false);
    
        if (this->param_02_value != this->param_02_lastValue) {
            this->getEngine()->presetTouched();
            this->param_02_lastValue = this->param_02_value;
        }
    
        {
            list converted = {v};
            this->prepend_02_a_set(converted);
        }
    }
    
    void param_03_value_set(number v) {
        v = this->param_03_value_constrain(v);
        this->param_03_value = v;
        this->sendParameter(2, false);
    
        if (this->param_03_value != this->param_03_lastValue) {
            this->getEngine()->presetTouched();
            this->param_03_lastValue = this->param_03_value;
        }
    
        {
            list converted = {v};
            this->prepend_03_a_set(converted);
        }
    }
    
    void param_04_value_set(number v) {
        v = this->param_04_value_constrain(v);
        this->param_04_value = v;
        this->sendParameter(3, false);
    
        if (this->param_04_value != this->param_04_lastValue) {
            this->getEngine()->presetTouched();
            this->param_04_lastValue = this->param_04_value;
        }
    
        {
            list converted = {v};
            this->prepend_04_a_set(converted);
        }
    }
    
    void param_05_value_set(number v) {
        v = this->param_05_value_constrain(v);
        this->param_05_value = v;
        this->sendParameter(4, false);
    
        if (this->param_05_value != this->param_05_lastValue) {
            this->getEngine()->presetTouched();
            this->param_05_lastValue = this->param_05_value;
        }
    
        {
            list converted = {v};
            this->prepend_05_a_set(converted);
        }
    }
    
    void param_06_value_set(number v) {
        v = this->param_06_value_constrain(v);
        this->param_06_value = v;
        this->sendParameter(5, false);
    
        if (this->param_06_value != this->param_06_lastValue) {
            this->getEngine()->presetTouched();
            this->param_06_lastValue = this->param_06_value;
        }
    
        {
            list converted = {v};
            this->prepend_06_a_set(converted);
        }
    }
    
    void param_07_value_set(number v) {
        v = this->param_07_value_constrain(v);
        this->param_07_value = v;
        this->sendParameter(6, false);
    
        if (this->param_07_value != this->param_07_lastValue) {
            this->getEngine()->presetTouched();
            this->param_07_lastValue = this->param_07_value;
        }
    
        {
            list converted = {v};
            this->prepend_07_a_set(converted);
        }
    }
    
    void param_08_value_set(number v) {
        v = this->param_08_value_constrain(v);
        this->param_08_value = v;
        this->sendParameter(7, false);
    
        if (this->param_08_value != this->param_08_lastValue) {
            this->getEngine()->presetTouched();
            this->param_08_lastValue = this->param_08_value;
        }
    
        {
            list converted = {v};
            this->prepend_08_a_set(converted);
        }
    }
    
    void param_09_value_set(number v) {
        v = this->param_09_value_constrain(v);
        this->param_09_value = v;
        this->sendParameter(8, false);
    
        if (this->param_09_value != this->param_09_lastValue) {
            this->getEngine()->presetTouched();
            this->param_09_lastValue = this->param_09_value;
        }
    
        {
            list converted = {v};
            this->prepend_09_a_set(converted);
        }
    }
    
    void param_10_value_set(number v) {
        v = this->param_10_value_constrain(v);
        this->param_10_value = v;
        this->sendParameter(9, false);
    
        if (this->param_10_value != this->param_10_lastValue) {
            this->getEngine()->presetTouched();
            this->param_10_lastValue = this->param_10_value;
        }
    
        {
            list converted = {v};
            this->prepend_10_a_set(converted);
        }
    }
    
    void param_11_value_set(number v) {
        v = this->param_11_value_constrain(v);
        this->param_11_value = v;
        this->sendParameter(10, false);
    
        if (this->param_11_value != this->param_11_lastValue) {
            this->getEngine()->presetTouched();
            this->param_11_lastValue = this->param_11_value;
        }
    
        {
            list converted = {v};
            this->prepend_11_a_set(converted);
        }
    }
    
    void param_12_value_set(number v) {
        v = this->param_12_value_constrain(v);
        this->param_12_value = v;
        this->sendParameter(11, false);
    
        if (this->param_12_value != this->param_12_lastValue) {
            this->getEngine()->presetTouched();
            this->param_12_lastValue = this->param_12_value;
        }
    
        {
            list converted = {v};
            this->prepend_12_a_set(converted);
        }
    }
    
    void param_13_value_set(number v) {
        v = this->param_13_value_constrain(v);
        this->param_13_value = v;
        this->sendParameter(12, false);
    
        if (this->param_13_value != this->param_13_lastValue) {
            this->getEngine()->presetTouched();
            this->param_13_lastValue = this->param_13_value;
        }
    
        {
            list converted = {v};
            this->prepend_13_a_set(converted);
        }
    }
    
    void param_14_value_set(number v) {
        v = this->param_14_value_constrain(v);
        this->param_14_value = v;
        this->sendParameter(13, false);
    
        if (this->param_14_value != this->param_14_lastValue) {
            this->getEngine()->presetTouched();
            this->param_14_lastValue = this->param_14_value;
        }
    
        {
            list converted = {v};
            this->prepend_14_a_set(converted);
        }
    }
    
    void param_15_value_set(number v) {
        v = this->param_15_value_constrain(v);
        this->param_15_value = v;
        this->sendParameter(14, false);
    
        if (this->param_15_value != this->param_15_lastValue) {
            this->getEngine()->presetTouched();
            this->param_15_lastValue = this->param_15_value;
        }
    
        {
            list converted = {v};
            this->prepend_15_a_set(converted);
        }
    }
    
    void param_16_value_set(number v) {
        v = this->param_16_value_constrain(v);
        this->param_16_value = v;
        this->sendParameter(15, false);
    
        if (this->param_16_value != this->param_16_lastValue) {
            this->getEngine()->presetTouched();
            this->param_16_lastValue = this->param_16_value;
        }
    
        {
            list converted = {v};
            this->prepend_16_a_set(converted);
        }
    }
    
    void param_17_value_set(number v) {
        v = this->param_17_value_constrain(v);
        this->param_17_value = v;
        this->sendParameter(16, false);
    
        if (this->param_17_value != this->param_17_lastValue) {
            this->getEngine()->presetTouched();
            this->param_17_lastValue = this->param_17_value;
        }
    
        {
            list converted = {v};
            this->prepend_17_a_set(converted);
        }
    }
    
    void param_18_value_set(number v) {
        v = this->param_18_value_constrain(v);
        this->param_18_value = v;
        this->sendParameter(17, false);
    
        if (this->param_18_value != this->param_18_lastValue) {
            this->getEngine()->presetTouched();
            this->param_18_lastValue = this->param_18_value;
        }
    
        {
            list converted = {v};
            this->prepend_18_a_set(converted);
        }
    }
    
    void param_19_value_set(number v) {
        v = this->param_19_value_constrain(v);
        this->param_19_value = v;
        this->sendParameter(18, false);
    
        if (this->param_19_value != this->param_19_lastValue) {
            this->getEngine()->presetTouched();
            this->param_19_lastValue = this->param_19_value;
        }
    
        {
            list converted = {v};
            this->prepend_19_a_set(converted);
        }
    }
    
    void param_20_value_set(number v) {
        v = this->param_20_value_constrain(v);
        this->param_20_value = v;
        this->sendParameter(19, false);
    
        if (this->param_20_value != this->param_20_lastValue) {
            this->getEngine()->presetTouched();
            this->param_20_lastValue = this->param_20_value;
        }
    
        {
            list converted = {v};
            this->prepend_20_a_set(converted);
        }
    }
    
    void param_21_value_set(number v) {
        v = this->param_21_value_constrain(v);
        this->param_21_value = v;
        this->sendParameter(20, false);
    
        if (this->param_21_value != this->param_21_lastValue) {
            this->getEngine()->presetTouched();
            this->param_21_lastValue = this->param_21_value;
        }
    
        {
            list converted = {v};
            this->prepend_21_a_set(converted);
        }
    }
    
    void param_22_value_set(number v) {
        v = this->param_22_value_constrain(v);
        this->param_22_value = v;
        this->sendParameter(21, false);
    
        if (this->param_22_value != this->param_22_lastValue) {
            this->getEngine()->presetTouched();
            this->param_22_lastValue = this->param_22_value;
        }
    
        {
            list converted = {v};
            this->prepend_22_a_set(converted);
        }
    }
    
    void param_23_value_set(number v) {
        v = this->param_23_value_constrain(v);
        this->param_23_value = v;
        this->sendParameter(22, false);
    
        if (this->param_23_value != this->param_23_lastValue) {
            this->getEngine()->presetTouched();
            this->param_23_lastValue = this->param_23_value;
        }
    
        {
            list converted = {v};
            this->prepend_23_a_set(converted);
        }
    }
    
    void param_24_value_set(number v) {
        v = this->param_24_value_constrain(v);
        this->param_24_value = v;
        this->sendParameter(23, false);
    
        if (this->param_24_value != this->param_24_lastValue) {
            this->getEngine()->presetTouched();
            this->param_24_lastValue = this->param_24_value;
        }
    
        {
            list converted = {v};
            this->prepend_24_a_set(converted);
        }
    }
    
    void param_25_value_set(number v) {
        v = this->param_25_value_constrain(v);
        this->param_25_value = v;
        this->sendParameter(24, false);
    
        if (this->param_25_value != this->param_25_lastValue) {
            this->getEngine()->presetTouched();
            this->param_25_lastValue = this->param_25_value;
        }
    
        {
            list converted = {v};
            this->prepend_25_a_set(converted);
        }
    }
    
    void param_26_value_set(number v) {
        v = this->param_26_value_constrain(v);
        this->param_26_value = v;
        this->sendParameter(25, false);
    
        if (this->param_26_value != this->param_26_lastValue) {
            this->getEngine()->presetTouched();
            this->param_26_lastValue = this->param_26_value;
        }
    
        {
            list converted = {v};
            this->prepend_26_a_set(converted);
        }
    }
    
    void param_27_value_set(number v) {
        v = this->param_27_value_constrain(v);
        this->param_27_value = v;
        this->sendParameter(26, false);
    
        if (this->param_27_value != this->param_27_lastValue) {
            this->getEngine()->presetTouched();
            this->param_27_lastValue = this->param_27_value;
        }
    
        {
            list converted = {v};
            this->prepend_27_a_set(converted);
        }
    }
    
    void param_28_value_set(number v) {
        v = this->param_28_value_constrain(v);
        this->param_28_value = v;
        this->sendParameter(27, false);
    
        if (this->param_28_value != this->param_28_lastValue) {
            this->getEngine()->presetTouched();
            this->param_28_lastValue = this->param_28_value;
        }
    
        {
            list converted = {v};
            this->prepend_28_a_set(converted);
        }
    }
    
    void param_29_value_set(number v) {
        v = this->param_29_value_constrain(v);
        this->param_29_value = v;
        this->sendParameter(28, false);
    
        if (this->param_29_value != this->param_29_lastValue) {
            this->getEngine()->presetTouched();
            this->param_29_lastValue = this->param_29_value;
        }
    
        {
            list converted = {v};
            this->prepend_29_a_set(converted);
        }
    }
    
    void param_30_value_set(number v) {
        v = this->param_30_value_constrain(v);
        this->param_30_value = v;
        this->sendParameter(29, false);
    
        if (this->param_30_value != this->param_30_lastValue) {
            this->getEngine()->presetTouched();
            this->param_30_lastValue = this->param_30_value;
        }
    
        {
            list converted = {v};
            this->prepend_30_a_set(converted);
        }
    }
    
    number msToSamps(MillisecondTime ms, number sampleRate) {
        return ms * sampleRate * 0.001;
    }
    
    MillisecondTime sampsToMs(SampleIndex samps) {
        return samps * (this->invsr * 1000);
    }
    
    Index getMaxBlockSize() const {
        return this->maxvs;
    }
    
    number getSampleRate() const {
        return this->sr;
    }
    
    bool hasFixedVectorSize() const {
        return false;
    }
    
    Index getNumInputChannels() const {
        return 0;
    }
    
    Index getNumOutputChannels() const {
        return 0;
    }
    
    void initializeObjects() {}
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {
        this->updateTime(this->getEngine()->getCurrentTime());
    
        {
            this->scheduleParamInit(0, 0);
        }
    
        {
            this->scheduleParamInit(1, 0);
        }
    
        {
            this->scheduleParamInit(2, 0);
        }
    
        {
            this->scheduleParamInit(3, 0);
        }
    
        {
            this->scheduleParamInit(4, 0);
        }
    
        {
            this->scheduleParamInit(5, 0);
        }
    
        {
            this->scheduleParamInit(6, 0);
        }
    
        {
            this->scheduleParamInit(7, 0);
        }
    
        {
            this->scheduleParamInit(8, 0);
        }
    
        {
            this->scheduleParamInit(9, 0);
        }
    
        {
            this->scheduleParamInit(10, 0);
        }
    
        {
            this->scheduleParamInit(11, 0);
        }
    
        {
            this->scheduleParamInit(12, 0);
        }
    
        {
            this->scheduleParamInit(13, 0);
        }
    
        {
            this->scheduleParamInit(14, 0);
        }
    
        {
            this->scheduleParamInit(15, 0);
        }
    
        {
            this->scheduleParamInit(16, 0);
        }
    
        {
            this->scheduleParamInit(17, 0);
        }
    
        {
            this->scheduleParamInit(18, 0);
        }
    
        {
            this->scheduleParamInit(19, 0);
        }
    
        {
            this->scheduleParamInit(20, 0);
        }
    
        {
            this->scheduleParamInit(21, 0);
        }
    
        {
            this->scheduleParamInit(22, 0);
        }
    
        {
            this->scheduleParamInit(23, 0);
        }
    
        {
            this->scheduleParamInit(24, 0);
        }
    
        {
            this->scheduleParamInit(25, 0);
        }
    
        {
            this->scheduleParamInit(26, 0);
        }
    
        {
            this->scheduleParamInit(27, 0);
        }
    
        {
            this->scheduleParamInit(28, 0);
        }
    
        {
            this->scheduleParamInit(29, 0);
        }
    }
    
    void allocateDataRefs() {}
    
    static number param_01_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void eventoutlet_01_in1_list_set(const list& v) {
        this->getPatcher()->updateTime(this->_currentTime);
        this->getPatcher()->p_01_out1_list_set((list)v);
    }
    
    void prepend_01_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_01_a_set(const list& a) {
        this->prepend_01_a = jsCreateListCopy(a);
        auto b = this->prepend_01_b;
    
        {
            this->prepend_01_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_02_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_02_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_02_a_set(const list& a) {
        this->prepend_02_a = jsCreateListCopy(a);
        auto b = this->prepend_02_b;
    
        {
            this->prepend_02_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_03_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_03_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_03_a_set(const list& a) {
        this->prepend_03_a = jsCreateListCopy(a);
        auto b = this->prepend_03_b;
    
        {
            this->prepend_03_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_04_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_04_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_04_a_set(const list& a) {
        this->prepend_04_a = jsCreateListCopy(a);
        auto b = this->prepend_04_b;
    
        {
            this->prepend_04_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_05_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_05_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_05_a_set(const list& a) {
        this->prepend_05_a = jsCreateListCopy(a);
        auto b = this->prepend_05_b;
    
        {
            this->prepend_05_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_06_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_06_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_06_a_set(const list& a) {
        this->prepend_06_a = jsCreateListCopy(a);
        auto b = this->prepend_06_b;
    
        {
            this->prepend_06_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_07_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_07_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_07_a_set(const list& a) {
        this->prepend_07_a = jsCreateListCopy(a);
        auto b = this->prepend_07_b;
    
        {
            this->prepend_07_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_08_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_08_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_08_a_set(const list& a) {
        this->prepend_08_a = jsCreateListCopy(a);
        auto b = this->prepend_08_b;
    
        {
            this->prepend_08_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_09_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_09_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_09_a_set(const list& a) {
        this->prepend_09_a = jsCreateListCopy(a);
        auto b = this->prepend_09_b;
    
        {
            this->prepend_09_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_10_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_10_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_10_a_set(const list& a) {
        this->prepend_10_a = jsCreateListCopy(a);
        auto b = this->prepend_10_b;
    
        {
            this->prepend_10_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_11_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_11_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_11_a_set(const list& a) {
        this->prepend_11_a = jsCreateListCopy(a);
        auto b = this->prepend_11_b;
    
        {
            this->prepend_11_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_12_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_12_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_12_a_set(const list& a) {
        this->prepend_12_a = jsCreateListCopy(a);
        auto b = this->prepend_12_b;
    
        {
            this->prepend_12_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_13_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_13_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_13_a_set(const list& a) {
        this->prepend_13_a = jsCreateListCopy(a);
        auto b = this->prepend_13_b;
    
        {
            this->prepend_13_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_14_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_14_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_14_a_set(const list& a) {
        this->prepend_14_a = jsCreateListCopy(a);
        auto b = this->prepend_14_b;
    
        {
            this->prepend_14_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_15_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_15_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_15_a_set(const list& a) {
        this->prepend_15_a = jsCreateListCopy(a);
        auto b = this->prepend_15_b;
    
        {
            this->prepend_15_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_16_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_16_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_16_a_set(const list& a) {
        this->prepend_16_a = jsCreateListCopy(a);
        auto b = this->prepend_16_b;
    
        {
            this->prepend_16_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_17_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_17_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_17_a_set(const list& a) {
        this->prepend_17_a = jsCreateListCopy(a);
        auto b = this->prepend_17_b;
    
        {
            this->prepend_17_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_18_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_18_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_18_a_set(const list& a) {
        this->prepend_18_a = jsCreateListCopy(a);
        auto b = this->prepend_18_b;
    
        {
            this->prepend_18_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_19_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_19_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_19_a_set(const list& a) {
        this->prepend_19_a = jsCreateListCopy(a);
        auto b = this->prepend_19_b;
    
        {
            this->prepend_19_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_20_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_20_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_20_a_set(const list& a) {
        this->prepend_20_a = jsCreateListCopy(a);
        auto b = this->prepend_20_b;
    
        {
            this->prepend_20_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_21_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_21_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_21_a_set(const list& a) {
        this->prepend_21_a = jsCreateListCopy(a);
        auto b = this->prepend_21_b;
    
        {
            this->prepend_21_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_22_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_22_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_22_a_set(const list& a) {
        this->prepend_22_a = jsCreateListCopy(a);
        auto b = this->prepend_22_b;
    
        {
            this->prepend_22_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_23_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_23_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_23_a_set(const list& a) {
        this->prepend_23_a = jsCreateListCopy(a);
        auto b = this->prepend_23_b;
    
        {
            this->prepend_23_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_24_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_24_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_24_a_set(const list& a) {
        this->prepend_24_a = jsCreateListCopy(a);
        auto b = this->prepend_24_b;
    
        {
            this->prepend_24_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_25_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_25_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_25_a_set(const list& a) {
        this->prepend_25_a = jsCreateListCopy(a);
        auto b = this->prepend_25_b;
    
        {
            this->prepend_25_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_26_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_26_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_26_a_set(const list& a) {
        this->prepend_26_a = jsCreateListCopy(a);
        auto b = this->prepend_26_b;
    
        {
            this->prepend_26_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_27_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_27_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_27_a_set(const list& a) {
        this->prepend_27_a = jsCreateListCopy(a);
        auto b = this->prepend_27_b;
    
        {
            this->prepend_27_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_28_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_28_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_28_a_set(const list& a) {
        this->prepend_28_a = jsCreateListCopy(a);
        auto b = this->prepend_28_b;
    
        {
            this->prepend_28_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_29_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_29_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_29_a_set(const list& a) {
        this->prepend_29_a = jsCreateListCopy(a);
        auto b = this->prepend_29_b;
    
        {
            this->prepend_29_out1_set(b->concat(a));
            return;
        }
    }
    
    static number param_30_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void prepend_30_out1_set(const list& v) {
        this->eventoutlet_01_in1_list_set(v);
    }
    
    void prepend_30_a_set(const list& a) {
        this->prepend_30_a = jsCreateListCopy(a);
        auto b = this->prepend_30_b;
    
        {
            this->prepend_30_out1_set(b->concat(a));
            return;
        }
    }
    
    void stackprotect_perform(Index n) {
        RNBO_UNUSED(n);
        auto __stackprotect_count = this->stackprotect_count;
        __stackprotect_count = 0;
        this->stackprotect_count = __stackprotect_count;
    }
    
    void param_01_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_01_value;
    }
    
    void param_01_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_01_value_set(preset["value"]);
    }
    
    void param_02_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_02_value;
    }
    
    void param_02_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_02_value_set(preset["value"]);
    }
    
    void param_03_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_03_value;
    }
    
    void param_03_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_03_value_set(preset["value"]);
    }
    
    void param_04_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_04_value;
    }
    
    void param_04_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_04_value_set(preset["value"]);
    }
    
    void param_05_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_05_value;
    }
    
    void param_05_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_05_value_set(preset["value"]);
    }
    
    void param_06_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_06_value;
    }
    
    void param_06_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_06_value_set(preset["value"]);
    }
    
    void param_07_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_07_value;
    }
    
    void param_07_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_07_value_set(preset["value"]);
    }
    
    void param_08_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_08_value;
    }
    
    void param_08_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_08_value_set(preset["value"]);
    }
    
    void param_09_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_09_value;
    }
    
    void param_09_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_09_value_set(preset["value"]);
    }
    
    void param_10_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_10_value;
    }
    
    void param_10_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_10_value_set(preset["value"]);
    }
    
    void param_11_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_11_value;
    }
    
    void param_11_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_11_value_set(preset["value"]);
    }
    
    void param_12_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_12_value;
    }
    
    void param_12_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_12_value_set(preset["value"]);
    }
    
    void param_13_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_13_value;
    }
    
    void param_13_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_13_value_set(preset["value"]);
    }
    
    void param_14_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_14_value;
    }
    
    void param_14_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_14_value_set(preset["value"]);
    }
    
    void param_15_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_15_value;
    }
    
    void param_15_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_15_value_set(preset["value"]);
    }
    
    void param_16_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_16_value;
    }
    
    void param_16_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_16_value_set(preset["value"]);
    }
    
    void param_17_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_17_value;
    }
    
    void param_17_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_17_value_set(preset["value"]);
    }
    
    void param_18_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_18_value;
    }
    
    void param_18_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_18_value_set(preset["value"]);
    }
    
    void param_19_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_19_value;
    }
    
    void param_19_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_19_value_set(preset["value"]);
    }
    
    void param_20_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_20_value;
    }
    
    void param_20_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_20_value_set(preset["value"]);
    }
    
    void param_21_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_21_value;
    }
    
    void param_21_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_21_value_set(preset["value"]);
    }
    
    void param_22_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_22_value;
    }
    
    void param_22_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_22_value_set(preset["value"]);
    }
    
    void param_23_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_23_value;
    }
    
    void param_23_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_23_value_set(preset["value"]);
    }
    
    void param_24_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_24_value;
    }
    
    void param_24_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_24_value_set(preset["value"]);
    }
    
    void param_25_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_25_value;
    }
    
    void param_25_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_25_value_set(preset["value"]);
    }
    
    void param_26_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_26_value;
    }
    
    void param_26_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_26_value_set(preset["value"]);
    }
    
    void param_27_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_27_value;
    }
    
    void param_27_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_27_value_set(preset["value"]);
    }
    
    void param_28_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_28_value;
    }
    
    void param_28_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_28_value_set(preset["value"]);
    }
    
    void param_29_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_29_value;
    }
    
    void param_29_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_29_value_set(preset["value"]);
    }
    
    void param_30_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_30_value;
    }
    
    void param_30_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_30_value_set(preset["value"]);
    }
    
    bool stackprotect_check() {
        this->stackprotect_count++;
    
        if (this->stackprotect_count > 128) {
            console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
            return true;
        }
    
        return false;
    }
    
    void updateTime(MillisecondTime time) {
        this->_currentTime = time;
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));
    
        if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
            this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;
    
        if (this->sampleOffsetIntoNextAudioBuffer < 0)
            this->sampleOffsetIntoNextAudioBuffer = 0;
    }
    
    void assign_defaults()
    {
        prepend_01_b = { 0 };
        param_01_value = 0;
        prepend_02_b = { 1 };
        param_02_value = 0;
        prepend_03_b = { 2 };
        param_03_value = 0;
        prepend_04_b = { 3 };
        param_04_value = 0;
        prepend_05_b = { 4 };
        param_05_value = 0;
        prepend_06_b = { 5 };
        param_06_value = 0;
        prepend_07_b = { 6 };
        param_07_value = 0;
        prepend_08_b = { 7 };
        param_08_value = 0;
        prepend_09_b = { 8 };
        param_09_value = 0;
        prepend_10_b = { 9 };
        param_10_value = 0;
        prepend_11_b = { 10 };
        param_11_value = 0;
        prepend_12_b = { 11 };
        param_12_value = 0;
        param_13_value = 0;
        prepend_13_b = { 12 };
        prepend_14_b = { 13 };
        param_14_value = 0;
        prepend_15_b = { 14 };
        param_15_value = 0;
        prepend_16_b = { 15 };
        param_16_value = 0;
        prepend_17_b = { 16 };
        param_17_value = 0;
        prepend_18_b = { 17 };
        param_18_value = 0;
        prepend_19_b = { 18 };
        param_19_value = 0;
        prepend_20_b = { 19 };
        param_20_value = 0;
        prepend_21_b = { 20 };
        param_21_value = 0;
        prepend_22_b = { 21 };
        param_22_value = 0;
        prepend_23_b = { 22 };
        param_23_value = 0;
        prepend_24_b = { 23 };
        param_24_value = 0;
        prepend_25_b = { 24 };
        param_25_value = 0;
        prepend_26_b = { 25 };
        param_26_value = 0;
        prepend_27_b = { 26 };
        param_27_value = 0;
        prepend_28_b = { 27 };
        param_28_value = 0;
        param_29_value = 0;
        prepend_29_b = { 28 };
        prepend_30_b = { 29 };
        param_30_value = 0;
        _currentTime = 0;
        audioProcessSampleCount = 0;
        sampleOffsetIntoNextAudioBuffer = 0;
        zeroBuffer = nullptr;
        dummyBuffer = nullptr;
        didAllocateSignals = 0;
        vs = 0;
        maxvs = 0;
        sr = 44100;
        invsr = 0.00002267573696;
        param_01_lastValue = 0;
        param_02_lastValue = 0;
        param_03_lastValue = 0;
        param_04_lastValue = 0;
        param_05_lastValue = 0;
        param_06_lastValue = 0;
        param_07_lastValue = 0;
        param_08_lastValue = 0;
        param_09_lastValue = 0;
        param_10_lastValue = 0;
        param_11_lastValue = 0;
        param_12_lastValue = 0;
        param_13_lastValue = 0;
        param_14_lastValue = 0;
        param_15_lastValue = 0;
        param_16_lastValue = 0;
        param_17_lastValue = 0;
        param_18_lastValue = 0;
        param_19_lastValue = 0;
        param_20_lastValue = 0;
        param_21_lastValue = 0;
        param_22_lastValue = 0;
        param_23_lastValue = 0;
        param_24_lastValue = 0;
        param_25_lastValue = 0;
        param_26_lastValue = 0;
        param_27_lastValue = 0;
        param_28_lastValue = 0;
        param_29_lastValue = 0;
        param_30_lastValue = 0;
        stackprotect_count = 0;
        _voiceIndex = 0;
        _noteNumber = 0;
        isMuted = 1;
        parameterOffset = 0;
    }
    
    // member variables
    
        list prepend_01_a;
        list prepend_01_b;
        number param_01_value;
        list prepend_02_a;
        list prepend_02_b;
        number param_02_value;
        list prepend_03_a;
        list prepend_03_b;
        number param_03_value;
        list prepend_04_a;
        list prepend_04_b;
        number param_04_value;
        list prepend_05_a;
        list prepend_05_b;
        number param_05_value;
        list prepend_06_a;
        list prepend_06_b;
        number param_06_value;
        list prepend_07_a;
        list prepend_07_b;
        number param_07_value;
        list prepend_08_a;
        list prepend_08_b;
        number param_08_value;
        list prepend_09_a;
        list prepend_09_b;
        number param_09_value;
        list prepend_10_a;
        list prepend_10_b;
        number param_10_value;
        list prepend_11_a;
        list prepend_11_b;
        number param_11_value;
        list prepend_12_a;
        list prepend_12_b;
        number param_12_value;
        number param_13_value;
        list prepend_13_a;
        list prepend_13_b;
        list prepend_14_a;
        list prepend_14_b;
        number param_14_value;
        list prepend_15_a;
        list prepend_15_b;
        number param_15_value;
        list prepend_16_a;
        list prepend_16_b;
        number param_16_value;
        list prepend_17_a;
        list prepend_17_b;
        number param_17_value;
        list prepend_18_a;
        list prepend_18_b;
        number param_18_value;
        list prepend_19_a;
        list prepend_19_b;
        number param_19_value;
        list prepend_20_a;
        list prepend_20_b;
        number param_20_value;
        list prepend_21_a;
        list prepend_21_b;
        number param_21_value;
        list prepend_22_a;
        list prepend_22_b;
        number param_22_value;
        list prepend_23_a;
        list prepend_23_b;
        number param_23_value;
        list prepend_24_a;
        list prepend_24_b;
        number param_24_value;
        list prepend_25_a;
        list prepend_25_b;
        number param_25_value;
        list prepend_26_a;
        list prepend_26_b;
        number param_26_value;
        list prepend_27_a;
        list prepend_27_b;
        number param_27_value;
        list prepend_28_a;
        list prepend_28_b;
        number param_28_value;
        number param_29_value;
        list prepend_29_a;
        list prepend_29_b;
        list prepend_30_a;
        list prepend_30_b;
        number param_30_value;
        MillisecondTime _currentTime;
        SampleIndex audioProcessSampleCount;
        SampleIndex sampleOffsetIntoNextAudioBuffer;
        signal zeroBuffer;
        signal dummyBuffer;
        bool didAllocateSignals;
        Index vs;
        Index maxvs;
        number sr;
        number invsr;
        number param_01_lastValue;
        number param_02_lastValue;
        number param_03_lastValue;
        number param_04_lastValue;
        number param_05_lastValue;
        number param_06_lastValue;
        number param_07_lastValue;
        number param_08_lastValue;
        number param_09_lastValue;
        number param_10_lastValue;
        number param_11_lastValue;
        number param_12_lastValue;
        number param_13_lastValue;
        number param_14_lastValue;
        number param_15_lastValue;
        number param_16_lastValue;
        number param_17_lastValue;
        number param_18_lastValue;
        number param_19_lastValue;
        number param_20_lastValue;
        number param_21_lastValue;
        number param_22_lastValue;
        number param_23_lastValue;
        number param_24_lastValue;
        number param_25_lastValue;
        number param_26_lastValue;
        number param_27_lastValue;
        number param_28_lastValue;
        number param_29_lastValue;
        number param_30_lastValue;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
    
};

class RNBOSubpatcher_396 : public PatcherInterfaceImpl {
    
    friend class rnbomatic;
    
    public:
    
    RNBOSubpatcher_396()
    {
    }
    
    ~RNBOSubpatcher_396()
    {
    }
    
    virtual rnbomatic* getPatcher() const {
        return static_cast<rnbomatic *>(_parentPatcher);
    }
    
    rnbomatic* getTopLevelPatcher() {
        return this->getPatcher()->getTopLevelPatcher();
    }
    
    void cancelClockEvents()
    {
        getEngine()->flushClockEvents(this, -1468824490, false);
    }
    
    inline number linearinterp(number frac, number x, number y) {
        return x + (y - x) * frac;
    }
    
    number samplerate() {
        return this->sr;
    }
    
    inline number safemod(number f, number m) {
        if (m != 0) {
            if (m < 0) {
                m = -m;
            }
    
            if (f >= m) {
                if (f >= m * 2.0) {
                    number d = f / m;
                    int i = (int)(rnbo_trunc(d));
                    d = d - i;
                    f = d * m;
                } else {
                    f -= m;
                }
            } else if (f <= -m) {
                if (f <= -m * 2.0) {
                    number d = f / m;
                    int i = (int)(rnbo_trunc(d));
                    d = d - i;
                    f = d * m;
                } else {
                    f += m;
                }
            }
        } else {
            f = 0.0;
        }
    
        return f;
    }
    
    Index getNumMidiInputPorts() const {
        return 0;
    }
    
    void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}
    
    Index getNumMidiOutputPorts() const {
        return 0;
    }
    
    void process(
        const SampleValue * const* inputs,
        Index numInputs,
        SampleValue * const* outputs,
        Index numOutputs,
        Index n
    ) {
        RNBO_UNUSED(numInputs);
        RNBO_UNUSED(inputs);
        this->vs = n;
        this->updateTime(this->getEngine()->getCurrentTime());
        SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
        this->ip_01_perform(this->signals[0], n);
        this->phasor_01_perform(this->phasor_01_freq, this->signals[1], n);
        this->dspexpr_08_perform(this->signals[2], n);
        this->dspexpr_03_perform(this->signals[1], this->signals[2], this->signals[3], n);
        this->dspexpr_19_perform(this->signals[3], this->signals[2], n);
        this->dspexpr_18_perform(this->signals[2], this->dspexpr_18_in2, this->signals[1], n);
        this->ip_02_perform(this->signals[2], n);
        this->dspexpr_13_perform(this->signals[2], this->signals[4], n);
        this->dspexpr_07_perform(this->signals[3], this->signals[4], this->signals[5], n);
        this->dspexpr_06_perform(this->signals[5], this->signals[6], n);
        this->dspexpr_12_perform(this->signals[4], this->dspexpr_12_in2, this->signals[5], n);
        this->dspexpr_11_perform(this->signals[3], this->signals[5], this->signals[4], n);
        this->dspexpr_10_perform(this->signals[4], this->signals[5], n);
        this->dspexpr_09_perform(this->signals[2], this->dspexpr_09_in2, this->signals[4], n);
    
        this->cycle_tilde_01_perform(
            this->cycle_tilde_01_frequency,
            this->cycle_tilde_01_phase_offset,
            this->signals[3],
            this->dummyBuffer,
            n
        );
    
        this->ip_03_perform(this->signals[7], n);
        this->dspexpr_15_perform(this->signals[3], this->signals[7], this->signals[8], n);
        this->dspexpr_14_perform(this->signals[2], this->signals[8], this->signals[7], n);
        this->signaladder_01_perform(this->signals[4], this->signals[7], this->signals[7], n);
        this->dspexpr_05_perform(this->signals[6], this->signals[5], this->signals[7], this->signals[8], n);
        this->ip_04_perform(this->signals[4], n);
        this->dspexpr_17_perform(this->signals[1], this->signals[4], this->signals[5], n);
        this->dspexpr_16_perform(this->signals[5], this->signals[4], n);
        this->dspexpr_04_perform(this->signals[8], this->signals[4], this->signals[5], n);
        this->dspexpr_02_perform(this->signals[0], this->signals[5], this->signals[4], n);
        this->ip_05_perform(this->signals[5], n);
    
        this->adsr_01_perform(
            this->adsr_01_attack,
            this->adsr_01_decay,
            this->adsr_01_sustain,
            this->adsr_01_release,
            this->signals[5],
            this->signals[0],
            n
        );
    
        this->dspexpr_01_perform(this->signals[4], this->signals[0], out1, n);
        this->stackprotect_perform(n);
        this->audioProcessSampleCount += this->vs;
    }
    
    void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
        if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
            Index i;
    
            for (i = 0; i < 9; i++) {
                this->signals[i] = resizeSignal(this->signals[i], this->maxvs, maxBlockSize);
            }
    
            this->ip_01_sigbuf = resizeSignal(this->ip_01_sigbuf, this->maxvs, maxBlockSize);
            this->phasor_01_sigbuf = resizeSignal(this->phasor_01_sigbuf, this->maxvs, maxBlockSize);
            this->ip_02_sigbuf = resizeSignal(this->ip_02_sigbuf, this->maxvs, maxBlockSize);
            this->ip_03_sigbuf = resizeSignal(this->ip_03_sigbuf, this->maxvs, maxBlockSize);
            this->ip_04_sigbuf = resizeSignal(this->ip_04_sigbuf, this->maxvs, maxBlockSize);
            this->adsr_01_triggerBuf = resizeSignal(this->adsr_01_triggerBuf, this->maxvs, maxBlockSize);
            this->adsr_01_triggerValueBuf = resizeSignal(this->adsr_01_triggerValueBuf, this->maxvs, maxBlockSize);
            this->ip_05_sigbuf = resizeSignal(this->ip_05_sigbuf, this->maxvs, maxBlockSize);
            this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
            this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
            this->didAllocateSignals = true;
        }
    
        const bool sampleRateChanged = sampleRate != this->sr;
        const bool maxvsChanged = maxBlockSize != this->maxvs;
        const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;
    
        if (sampleRateChanged || maxvsChanged) {
            this->vs = maxBlockSize;
            this->maxvs = maxBlockSize;
            this->sr = sampleRate;
            this->invsr = 1 / sampleRate;
        }
    
        this->ip_01_dspsetup(forceDSPSetup);
        this->phasor_01_dspsetup(forceDSPSetup);
        this->ip_02_dspsetup(forceDSPSetup);
        this->cycle_tilde_01_dspsetup(forceDSPSetup);
        this->ip_03_dspsetup(forceDSPSetup);
        this->ip_04_dspsetup(forceDSPSetup);
        this->ip_05_dspsetup(forceDSPSetup);
        this->adsr_01_dspsetup(forceDSPSetup);
    
        if (sampleRateChanged)
            this->onSampleRateChanged(sampleRate);
    }
    
    void setProbingTarget(MessageTag id) {
        switch (id) {
        default:
            {
            this->setProbingIndex(-1);
            break;
            }
        }
    }
    
    void setProbingIndex(ProbingIndex ) {}
    
    Index getProbingChannels(MessageTag outletId) const {
        RNBO_UNUSED(outletId);
        return 0;
    }
    
    Index getIsMuted()  {
        return this->isMuted;
    }
    
    void setIsMuted(Index v)  {
        this->isMuted = v;
    }
    
    Index getPatcherSerial() const {
        return 0;
    }
    
    void getState(PatcherStateInterface& ) {}
    
    void setState() {}
    
    void getPreset(PatcherStateInterface& preset) {
        this->param_31_getPresetValue(getSubState(preset, "amp"));
        this->param_32_getPresetValue(getSubState(preset, "freq"));
        this->param_33_getPresetValue(getSubState(preset, "shift"));
        this->param_34_getPresetValue(getSubState(preset, "mod"));
        this->param_35_getPresetValue(getSubState(preset, "mod_amt"));
        this->param_36_getPresetValue(getSubState(preset, "bw"));
        this->param_37_getPresetValue(getSubState(preset, "attack"));
        this->param_38_getPresetValue(getSubState(preset, "decay"));
        this->param_39_getPresetValue(getSubState(preset, "sustain"));
        this->param_40_getPresetValue(getSubState(preset, "release"));
    }
    
    void processTempoEvent(MillisecondTime , Tempo ) {}
    
    void processTransportEvent(MillisecondTime , TransportState ) {}
    
    void processBeatTimeEvent(MillisecondTime , BeatTime ) {}
    
    void onSampleRateChanged(double ) {}
    
    void processTimeSignatureEvent(MillisecondTime , int , int ) {}
    
    void setParameterValue(ParameterIndex index, ParameterValue v, MillisecondTime time) {
        this->updateTime(time);
    
        switch (index) {
        case 0:
            {
            this->param_31_value_set(v);
            break;
            }
        case 1:
            {
            this->param_32_value_set(v);
            break;
            }
        case 2:
            {
            this->param_33_value_set(v);
            break;
            }
        case 3:
            {
            this->param_34_value_set(v);
            break;
            }
        case 4:
            {
            this->param_35_value_set(v);
            break;
            }
        case 5:
            {
            this->param_36_value_set(v);
            break;
            }
        case 6:
            {
            this->param_37_value_set(v);
            break;
            }
        case 7:
            {
            this->param_38_value_set(v);
            break;
            }
        case 8:
            {
            this->param_39_value_set(v);
            break;
            }
        case 9:
            {
            this->param_40_value_set(v);
            break;
            }
        }
    }
    
    void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValue(index, value, time);
    }
    
    void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
        this->setParameterValueNormalized(index, value, time);
    }
    
    ParameterValue getParameterValue(ParameterIndex index)  {
        switch (index) {
        case 0:
            {
            return this->param_31_value;
            }
        case 1:
            {
            return this->param_32_value;
            }
        case 2:
            {
            return this->param_33_value;
            }
        case 3:
            {
            return this->param_34_value;
            }
        case 4:
            {
            return this->param_35_value;
            }
        case 5:
            {
            return this->param_36_value;
            }
        case 6:
            {
            return this->param_37_value;
            }
        case 7:
            {
            return this->param_38_value;
            }
        case 8:
            {
            return this->param_39_value;
            }
        case 9:
            {
            return this->param_40_value;
            }
        default:
            {
            return 0;
            }
        }
    }
    
    ParameterIndex getNumSignalInParameters() const {
        return 0;
    }
    
    ParameterIndex getNumSignalOutParameters() const {
        return 0;
    }
    
    ParameterIndex getNumParameters() const {
        return 10;
    }
    
    ConstCharPointer getParameterName(ParameterIndex index) const {
        switch (index) {
        case 0:
            {
            return "amp";
            }
        case 1:
            {
            return "freq";
            }
        case 2:
            {
            return "shift";
            }
        case 3:
            {
            return "mod";
            }
        case 4:
            {
            return "mod_amt";
            }
        case 5:
            {
            return "bw";
            }
        case 6:
            {
            return "attack";
            }
        case 7:
            {
            return "decay";
            }
        case 8:
            {
            return "sustain";
            }
        case 9:
            {
            return "release";
            }
        default:
            {
            return "bogus";
            }
        }
    }
    
    ConstCharPointer getParameterId(ParameterIndex index) const {
        switch (index) {
        case 0:
            {
            return "synth/amp";
            }
        case 1:
            {
            return "synth/freq";
            }
        case 2:
            {
            return "synth/shift";
            }
        case 3:
            {
            return "synth/mod";
            }
        case 4:
            {
            return "synth/mod_amt";
            }
        case 5:
            {
            return "synth/bw";
            }
        case 6:
            {
            return "synth/attack";
            }
        case 7:
            {
            return "synth/decay";
            }
        case 8:
            {
            return "synth/sustain";
            }
        case 9:
            {
            return "synth/release";
            }
        default:
            {
            return "bogus";
            }
        }
    }
    
    void getParameterInfo(ParameterIndex index, ParameterInfo * info) const {
        {
            switch (index) {
            case 0:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0.5;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 1:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 345;
                info->min = 0;
                info->max = 22050;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 2:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0;
                info->min = 0;
                info->max = 22050;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 3:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 10;
                info->min = 0;
                info->max = 22050;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 4:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 1;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 5:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 10;
                info->min = 0;
                info->max = 1000;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 6:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 10;
                info->min = 1;
                info->max = 2000;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 7:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 200;
                info->min = 1;
                info->max = 5000;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 8:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 0.2;
                info->min = 0;
                info->max = 1;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            case 9:
                {
                info->type = ParameterTypeNumber;
                info->initialValue = 1000;
                info->min = 1;
                info->max = 400;
                info->exponent = 1;
                info->steps = 0;
                info->debug = false;
                info->saveable = true;
                info->transmittable = true;
                info->initialized = true;
                info->visible = true;
                info->displayName = "";
                info->unit = "";
                info->ioType = IOTypeUndefined;
                info->signalIndex = INVALID_INDEX;
                break;
                }
            }
        }
    }
    
    void sendParameter(ParameterIndex index, bool ignoreValue) {
        this->getPatcher()->sendParameter(index + this->parameterOffset, ignoreValue);
    }
    
    void setParameterOffset(ParameterIndex offset) {
        this->parameterOffset = offset;
    }
    
    ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
        if (steps == 1) {
            if (normalizedValue > 0) {
                normalizedValue = 1.;
            }
        } else {
            ParameterValue oneStep = (number)1. / (steps - 1);
            ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
            normalizedValue = numberOfSteps * oneStep;
        }
    
        return normalizedValue;
    }
    
    ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        case 0:
        case 4:
        case 8:
            {
            {
                value = (value < 0 ? 0 : (value > 1 ? 1 : value));
                ParameterValue normalizedValue = (value - 0) / (1 - 0);
                return normalizedValue;
            }
            }
        case 5:
            {
            {
                value = (value < 0 ? 0 : (value > 1000 ? 1000 : value));
                ParameterValue normalizedValue = (value - 0) / (1000 - 0);
                return normalizedValue;
            }
            }
        case 1:
        case 2:
        case 3:
            {
            {
                value = (value < 0 ? 0 : (value > 22050 ? 22050 : value));
                ParameterValue normalizedValue = (value - 0) / (22050 - 0);
                return normalizedValue;
            }
            }
        case 9:
            {
            {
                value = (value < 1 ? 1 : (value > 400 ? 400 : value));
                ParameterValue normalizedValue = (value - 1) / (400 - 1);
                return normalizedValue;
            }
            }
        case 6:
            {
            {
                value = (value < 1 ? 1 : (value > 2000 ? 2000 : value));
                ParameterValue normalizedValue = (value - 1) / (2000 - 1);
                return normalizedValue;
            }
            }
        case 7:
            {
            {
                value = (value < 1 ? 1 : (value > 5000 ? 5000 : value));
                ParameterValue normalizedValue = (value - 1) / (5000 - 1);
                return normalizedValue;
            }
            }
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
        value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
        switch (index) {
        case 0:
        case 4:
        case 8:
            {
            {
                value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
                {
                    return 0 + value * (1 - 0);
                }
            }
            }
        case 5:
            {
            {
                value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
                {
                    return 0 + value * (1000 - 0);
                }
            }
            }
        case 1:
        case 2:
        case 3:
            {
            {
                value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
                {
                    return 0 + value * (22050 - 0);
                }
            }
            }
        case 9:
            {
            {
                value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
                {
                    return 1 + value * (400 - 1);
                }
            }
            }
        case 6:
            {
            {
                value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
                {
                    return 1 + value * (2000 - 1);
                }
            }
            }
        case 7:
            {
            {
                value = (value < 0 ? 0 : (value > 1 ? 1 : value));
    
                {
                    return 1 + value * (5000 - 1);
                }
            }
            }
        default:
            {
            return value;
            }
        }
    }
    
    ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
        switch (index) {
        case 0:
            {
            return this->param_31_value_constrain(value);
            }
        case 1:
            {
            return this->param_32_value_constrain(value);
            }
        case 2:
            {
            return this->param_33_value_constrain(value);
            }
        case 3:
            {
            return this->param_34_value_constrain(value);
            }
        case 4:
            {
            return this->param_35_value_constrain(value);
            }
        case 5:
            {
            return this->param_36_value_constrain(value);
            }
        case 6:
            {
            return this->param_37_value_constrain(value);
            }
        case 7:
            {
            return this->param_38_value_constrain(value);
            }
        case 8:
            {
            return this->param_39_value_constrain(value);
            }
        case 9:
            {
            return this->param_40_value_constrain(value);
            }
        default:
            {
            return value;
            }
        }
    }
    
    void scheduleParamInit(ParameterIndex index, Index order) {
        this->getPatcher()->scheduleParamInit(index + this->parameterOffset, order);
    }
    
    void processClockEvent(MillisecondTime time, ClockId index, bool hasValue, ParameterValue value) {
        RNBO_UNUSED(value);
        RNBO_UNUSED(hasValue);
        this->updateTime(time);
    
        switch (index) {
        case -1468824490:
            {
            this->adsr_01_mute_bang();
            break;
            }
        }
    }
    
    void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}
    
    void processOutletEvent(
        EngineLink* sender,
        OutletIndex index,
        ParameterValue value,
        MillisecondTime time
    ) {
        this->updateTime(time);
        this->processOutletAtCurrentTime(sender, index, value);
    }
    
    void processNumMessage(MessageTag , MessageTag , MillisecondTime , number ) {}
    
    void processListMessage(MessageTag , MessageTag , MillisecondTime , const list& ) {}
    
    void processBangMessage(MessageTag , MessageTag , MillisecondTime ) {}
    
    MessageTagInfo resolveTag(MessageTag tag) const {
        switch (tag) {
    
        }
    
        return nullptr;
    }
    
    DataRef* getDataRef(DataRefIndex index)  {
        switch (index) {
        default:
            {
            return nullptr;
            }
        }
    }
    
    DataRefIndex getNumDataRefs() const {
        return 0;
    }
    
    void fillDataRef(DataRefIndex , DataRef& ) {}
    
    void processDataViewUpdate(DataRefIndex index, MillisecondTime time) {
        this->updateTime(time);
    
        if (index == 0) {
            this->mtof_01_innerMtoF_buffer = new Float64Buffer(this->getPatcher()->RNBODefaultMtofLookupTable256);
        }
    
        if (index == 1) {
            this->cycle_tilde_01_buffer = new Float64Buffer(this->getPatcher()->RNBODefaultSinus);
            this->cycle_tilde_01_bufferUpdated();
        }
    }
    
    void initialize() {
        this->assign_defaults();
        this->setState();
        this->mtof_01_innerMtoF_buffer = new Float64Buffer(this->getPatcher()->RNBODefaultMtofLookupTable256);
        this->cycle_tilde_01_buffer = new Float64Buffer(this->getPatcher()->RNBODefaultSinus);
    }
    
    protected:
    
    void param_31_value_set(number v) {
        v = this->param_31_value_constrain(v);
        this->param_31_value = v;
        this->sendParameter(0, false);
    
        if (this->param_31_value != this->param_31_lastValue) {
            this->getEngine()->presetTouched();
            this->param_31_lastValue = this->param_31_value;
        }
    
        this->ip_01_value_set(v);
    }
    
    void param_32_value_set(number v) {
        v = this->param_32_value_constrain(v);
        this->param_32_value = v;
        this->sendParameter(1, false);
    
        if (this->param_32_value != this->param_32_lastValue) {
            this->getEngine()->presetTouched();
            this->param_32_lastValue = this->param_32_value;
        }
    
        this->phasor_01_freq_set(v);
    }
    
    void param_33_value_set(number v) {
        v = this->param_33_value_constrain(v);
        this->param_33_value = v;
        this->sendParameter(2, false);
    
        if (this->param_33_value != this->param_33_lastValue) {
            this->getEngine()->presetTouched();
            this->param_33_lastValue = this->param_33_value;
        }
    
        this->ip_02_value_set(v);
    }
    
    void param_34_value_set(number v) {
        v = this->param_34_value_constrain(v);
        this->param_34_value = v;
        this->sendParameter(3, false);
    
        if (this->param_34_value != this->param_34_lastValue) {
            this->getEngine()->presetTouched();
            this->param_34_lastValue = this->param_34_value;
        }
    
        this->cycle_tilde_01_frequency_set(v);
    }
    
    void param_35_value_set(number v) {
        v = this->param_35_value_constrain(v);
        this->param_35_value = v;
        this->sendParameter(4, false);
    
        if (this->param_35_value != this->param_35_lastValue) {
            this->getEngine()->presetTouched();
            this->param_35_lastValue = this->param_35_value;
        }
    
        this->ip_03_value_set(v);
    }
    
    void param_36_value_set(number v) {
        v = this->param_36_value_constrain(v);
        this->param_36_value = v;
        this->sendParameter(5, false);
    
        if (this->param_36_value != this->param_36_lastValue) {
            this->getEngine()->presetTouched();
            this->param_36_lastValue = this->param_36_value;
        }
    
        this->ip_04_value_set(v);
    }
    
    void param_37_value_set(number v) {
        v = this->param_37_value_constrain(v);
        this->param_37_value = v;
        this->sendParameter(6, false);
    
        if (this->param_37_value != this->param_37_lastValue) {
            this->getEngine()->presetTouched();
            this->param_37_lastValue = this->param_37_value;
        }
    
        this->adsr_01_attack_set(v);
    }
    
    void param_38_value_set(number v) {
        v = this->param_38_value_constrain(v);
        this->param_38_value = v;
        this->sendParameter(7, false);
    
        if (this->param_38_value != this->param_38_lastValue) {
            this->getEngine()->presetTouched();
            this->param_38_lastValue = this->param_38_value;
        }
    
        this->adsr_01_decay_set(v);
    }
    
    void param_39_value_set(number v) {
        v = this->param_39_value_constrain(v);
        this->param_39_value = v;
        this->sendParameter(8, false);
    
        if (this->param_39_value != this->param_39_lastValue) {
            this->getEngine()->presetTouched();
            this->param_39_lastValue = this->param_39_value;
        }
    
        this->adsr_01_sustain_set(v);
    }
    
    void param_40_value_set(number v) {
        v = this->param_40_value_constrain(v);
        this->param_40_value = v;
        this->sendParameter(9, false);
    
        if (this->param_40_value != this->param_40_lastValue) {
            this->getEngine()->presetTouched();
            this->param_40_lastValue = this->param_40_value;
        }
    
        this->adsr_01_release_set(v);
    }
    
    void eventinlet_01_out1_bang_bang() {}
    
    void eventinlet_01_out1_list_set(const list& v) {
        {
            if (v->length > 1)
                this->notein_01_channel_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->notein_01_input_set(converted);
        }
    }
    
    void adsr_01_mute_bang() {}
    
    number msToSamps(MillisecondTime ms, number sampleRate) {
        return ms * sampleRate * 0.001;
    }
    
    MillisecondTime sampsToMs(SampleIndex samps) {
        return samps * (this->invsr * 1000);
    }
    
    Index getMaxBlockSize() const {
        return this->maxvs;
    }
    
    number getSampleRate() const {
        return this->sr;
    }
    
    bool hasFixedVectorSize() const {
        return false;
    }
    
    Index getNumInputChannels() const {
        return 0;
    }
    
    Index getNumOutputChannels() const {
        return 1;
    }
    
    void initializeObjects() {
        this->ip_01_init();
        this->mtof_01_innerScala_init();
        this->mtof_01_init();
        this->ip_02_init();
        this->ip_03_init();
        this->ip_04_init();
        this->ip_05_init();
    }
    
    void sendOutlet(OutletIndex index, ParameterValue value) {
        this->getEngine()->sendOutlet(this, index, value);
    }
    
    void startup() {
        this->updateTime(this->getEngine()->getCurrentTime());
    
        {
            this->scheduleParamInit(0, 0);
        }
    
        {
            this->scheduleParamInit(1, 0);
        }
    
        {
            this->scheduleParamInit(2, 0);
        }
    
        {
            this->scheduleParamInit(3, 0);
        }
    
        {
            this->scheduleParamInit(4, 0);
        }
    
        {
            this->scheduleParamInit(5, 0);
        }
    
        {
            this->scheduleParamInit(6, 0);
        }
    
        {
            this->scheduleParamInit(7, 0);
        }
    
        {
            this->scheduleParamInit(8, 0);
        }
    
        {
            this->scheduleParamInit(9, 0);
        }
    }
    
    void allocateDataRefs() {
        this->mtof_01_innerMtoF_buffer->requestSize(65536, 1);
        this->mtof_01_innerMtoF_buffer->setSampleRate(this->sr);
        this->cycle_tilde_01_buffer->requestSize(16384, 1);
        this->cycle_tilde_01_buffer->setSampleRate(this->sr);
        this->mtof_01_innerMtoF_buffer = this->mtof_01_innerMtoF_buffer->allocateIfNeeded();
        this->cycle_tilde_01_buffer = this->cycle_tilde_01_buffer->allocateIfNeeded();
    }
    
    void notein_01_outchannel_set(number ) {}
    
    void notein_01_releasevelocity_set(number ) {}
    
    void ip_05_value_set(number v) {
        this->ip_05_value = v;
        this->ip_05_fillSigBuf();
        this->ip_05_lastValue = v;
    }
    
    void expr_01_out1_set(number v) {
        this->expr_01_out1 = v;
        this->ip_05_value_set(this->expr_01_out1);
    }
    
    void expr_01_in1_set(number in1) {
        this->expr_01_in1 = in1;
    
        this->expr_01_out1_set(
            (this->expr_01_in1 == 0 ? 0 : fixnan(rnbo_pow(10, (-50 + 50 * this->expr_01_in1 / (number)128) / (number)20)))
        );//#map:synth/expr_obj-9:1
    }
    
    void notein_01_velocity_set(number v) {
        this->expr_01_in1_set(v);
    }
    
    void phasor_01_freq_set(number v) {
        this->phasor_01_freq = v;
    }
    
    void phasor_01_phase_set(number v) {
        if (v >= 0 && (bool)(this->phasor_01_sigbuf)) {
            this->phasor_01_sigbuf[(Index)this->sampleOffsetIntoNextAudioBuffer] = v;
        }
    }
    
    void mtof_01_out_set(const list& v) {
        {
            if (v->length > 1)
                this->phasor_01_phase_set(v[1]);
    
            number converted = (v->length > 0 ? v[0] : 0);
            this->phasor_01_freq_set(converted);
        }
    }
    
    void mtof_01_midivalue_set(const list& v) {
        this->mtof_01_midivalue = jsCreateListCopy(v);
        list tmp = list();
    
        for (int i = 0; i < this->mtof_01_midivalue->length; i++) {
            tmp->push(
                this->mtof_01_innerMtoF_next(this->mtof_01_midivalue[(Index)i], this->mtof_01_base)
            );
        }
    
        this->mtof_01_out_set(tmp);
    }
    
    void notein_01_notenumber_set(number v) {
        {
            list converted = {v};
            this->mtof_01_midivalue_set(converted);
        }
    }
    
    void notein_01_input_set(number v) {
        if (v > 127) {
            int i = (int)(v);
            this->notein_01_status = (BinOpInt)((UBinOpInt)i & (UBinOpInt)240);
            this->notein_01_inchan = (BinOpInt)((UBinOpInt)i & (UBinOpInt)15);
            this->notein_01_byte1 = -1;
            return;
        }
    
        if (this->notein_01_inchan + 1 == this->notein_01_channel || this->notein_01_channel == 0) {
            if (this->notein_01_status == 0x90 || this->notein_01_status == 0x80) {
                if (this->notein_01_byte1 == -1)
                    this->notein_01_byte1 = v;
                else {
                    this->notein_01_outchannel_set(this->notein_01_inchan + 1);
    
                    if (this->notein_01_status == 0x90) {
                        this->notein_01_releasevelocity_set(0);
                        this->notein_01_velocity_set(v);
                        this->notein_01_notenumber_set(this->notein_01_byte1);
                    } else {
                        this->notein_01_releasevelocity_set(v);
                        this->notein_01_velocity_set(0);
                        this->notein_01_notenumber_set(this->notein_01_byte1);
                    }
    
                    this->notein_01_byte1 = -1;
                    this->notein_01_status = 0;
                }
            }
        }
    }
    
    void eventinlet_01_out1_number_set(number v) {
        this->notein_01_input_set(v);
    }
    
    static number param_31_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void ip_01_value_set(number v) {
        this->ip_01_value = v;
        this->ip_01_fillSigBuf();
        this->ip_01_lastValue = v;
    }
    
    static number param_32_value_constrain(number v) {
        v = (v > 22050 ? 22050 : (v < 0 ? 0 : v));
        return v;
    }
    
    static number param_33_value_constrain(number v) {
        v = (v > 22050 ? 22050 : (v < 0 ? 0 : v));
        return v;
    }
    
    void ip_02_value_set(number v) {
        this->ip_02_value = v;
        this->ip_02_fillSigBuf();
        this->ip_02_lastValue = v;
    }
    
    static number param_34_value_constrain(number v) {
        v = (v > 22050 ? 22050 : (v < 0 ? 0 : v));
        return v;
    }
    
    void cycle_tilde_01_frequency_set(number v) {
        this->cycle_tilde_01_frequency = v;
    }
    
    static number param_35_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void ip_03_value_set(number v) {
        this->ip_03_value = v;
        this->ip_03_fillSigBuf();
        this->ip_03_lastValue = v;
    }
    
    static number param_36_value_constrain(number v) {
        v = (v > 1000 ? 1000 : (v < 0 ? 0 : v));
        return v;
    }
    
    void ip_04_value_set(number v) {
        this->ip_04_value = v;
        this->ip_04_fillSigBuf();
        this->ip_04_lastValue = v;
    }
    
    static number param_37_value_constrain(number v) {
        v = (v > 2000 ? 2000 : (v < 1 ? 1 : v));
        return v;
    }
    
    void adsr_01_attack_set(number v) {
        this->adsr_01_attack = v;
    }
    
    static number param_38_value_constrain(number v) {
        v = (v > 5000 ? 5000 : (v < 1 ? 1 : v));
        return v;
    }
    
    void adsr_01_decay_set(number v) {
        this->adsr_01_decay = v;
    }
    
    static number param_39_value_constrain(number v) {
        v = (v > 1 ? 1 : (v < 0 ? 0 : v));
        return v;
    }
    
    void adsr_01_sustain_set(number v) {
        this->adsr_01_sustain = v;
    }
    
    static number param_40_value_constrain(number v) {
        v = (v > 400 ? 400 : (v < 1 ? 1 : v));
        return v;
    }
    
    void adsr_01_release_set(number v) {
        this->adsr_01_release = v;
    }
    
    void notein_01_channel_set(number v) {
        this->notein_01_channel = v;
    }
    
    void ip_01_perform(SampleValue * out, Index n) {
        auto __ip_01_sigbuf = this->ip_01_sigbuf;
        auto __ip_01_lastValue = this->ip_01_lastValue;
        auto __ip_01_lastIndex = this->ip_01_lastIndex;
    
        for (Index i = 0; i < n; i++) {
            out[(Index)i] = ((SampleIndex)(i) >= __ip_01_lastIndex ? __ip_01_lastValue : __ip_01_sigbuf[(Index)i]);
        }
    
        __ip_01_lastIndex = 0;
        this->ip_01_lastIndex = __ip_01_lastIndex;
    }
    
    void phasor_01_perform(number freq, SampleValue * out, Index n) {
        auto __phasor_01_sigbuf = this->phasor_01_sigbuf;
    
        for (Index i = 0; i < n; i++) {
            out[(Index)i] = this->phasor_01_ph_next(freq, -1);
            __phasor_01_sigbuf[(Index)i] = -1;
        }
    }
    
    void dspexpr_08_perform(SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = 6.283185307179586;//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_03_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_19_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_cos(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_18_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] - 1;//#map:_###_obj_###_:1
        }
    }
    
    void ip_02_perform(SampleValue * out, Index n) {
        auto __ip_02_sigbuf = this->ip_02_sigbuf;
        auto __ip_02_lastValue = this->ip_02_lastValue;
        auto __ip_02_lastIndex = this->ip_02_lastIndex;
    
        for (Index i = 0; i < n; i++) {
            out[(Index)i] = ((SampleIndex)(i) >= __ip_02_lastIndex ? __ip_02_lastValue : __ip_02_sigbuf[(Index)i]);
        }
    
        __ip_02_lastIndex = 0;
        this->ip_02_lastIndex = __ip_02_lastIndex;
    }
    
    void dspexpr_13_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_floor(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_07_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_06_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_cos(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_12_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] + 1;//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_11_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_10_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_cos(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_09_perform(const Sample * in1, number in2, SampleValue * out1, Index n) {
        RNBO_UNUSED(in2);
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = this->safemod(in1[(Index)i], 1);//#map:_###_obj_###_:1
        }
    }
    
    void cycle_tilde_01_perform(
        number frequency,
        number phase_offset,
        SampleValue * out1,
        SampleValue * out2,
        Index n
    ) {
        RNBO_UNUSED(phase_offset);
        auto __cycle_tilde_01_f2i = this->cycle_tilde_01_f2i;
        auto __cycle_tilde_01_phasei = this->cycle_tilde_01_phasei;
        Index i;
    
        for (i = 0; i < n; i++) {
            {
                uint32_t uint_phase;
    
                {
                    {
                        uint_phase = __cycle_tilde_01_phasei;
                    }
                }
    
                uint32_t idx = (uint32_t)(uint32_rshift(uint_phase, 18));
                number frac = ((BinOpInt)((UBinOpInt)uint_phase & (UBinOpInt)262143)) * 3.81471181759574e-6;
                number y0 = this->cycle_tilde_01_buffer[(Index)idx];
                number y1 = this->cycle_tilde_01_buffer[(Index)((UBinOpInt)(idx + 1) & (UBinOpInt)16383)];
                number y = y0 + frac * (y1 - y0);
    
                {
                    uint32_t pincr = (uint32_t)(uint32_trunc(frequency * __cycle_tilde_01_f2i));
                    __cycle_tilde_01_phasei = uint32_add(__cycle_tilde_01_phasei, pincr);
                }
    
                out1[(Index)i] = y;
                out2[(Index)i] = uint_phase * 0.232830643653869629e-9;
                continue;
            }
        }
    
        this->cycle_tilde_01_phasei = __cycle_tilde_01_phasei;
    }
    
    void ip_03_perform(SampleValue * out, Index n) {
        auto __ip_03_sigbuf = this->ip_03_sigbuf;
        auto __ip_03_lastValue = this->ip_03_lastValue;
        auto __ip_03_lastIndex = this->ip_03_lastIndex;
    
        for (Index i = 0; i < n; i++) {
            out[(Index)i] = ((SampleIndex)(i) >= __ip_03_lastIndex ? __ip_03_lastValue : __ip_03_sigbuf[(Index)i]);
        }
    
        __ip_03_lastIndex = 0;
        this->ip_03_lastIndex = __ip_03_lastIndex;
    }
    
    void dspexpr_15_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_14_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void signaladder_01_perform(
        const SampleValue * in1,
        const SampleValue * in2,
        SampleValue * out,
        Index n
    ) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out[(Index)i] = in1[(Index)i] + in2[(Index)i];
        }
    }
    
    void dspexpr_05_perform(
        const Sample * in1,
        const Sample * in2,
        const Sample * in3,
        SampleValue * out1,
        Index n
    ) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] + in3[(Index)i] * (in2[(Index)i] - in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void ip_04_perform(SampleValue * out, Index n) {
        auto __ip_04_sigbuf = this->ip_04_sigbuf;
        auto __ip_04_lastValue = this->ip_04_lastValue;
        auto __ip_04_lastIndex = this->ip_04_lastIndex;
    
        for (Index i = 0; i < n; i++) {
            out[(Index)i] = ((SampleIndex)(i) >= __ip_04_lastIndex ? __ip_04_lastValue : __ip_04_sigbuf[(Index)i]);
        }
    
        __ip_04_lastIndex = 0;
        this->ip_04_lastIndex = __ip_04_lastIndex;
    }
    
    void dspexpr_17_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_16_perform(const Sample * in1, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = rnbo_exp(in1[(Index)i]);//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_04_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void dspexpr_02_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void ip_05_perform(SampleValue * out, Index n) {
        auto __ip_05_sigbuf = this->ip_05_sigbuf;
        auto __ip_05_lastValue = this->ip_05_lastValue;
        auto __ip_05_lastIndex = this->ip_05_lastIndex;
    
        for (Index i = 0; i < n; i++) {
            out[(Index)i] = ((SampleIndex)(i) >= __ip_05_lastIndex ? __ip_05_lastValue : __ip_05_sigbuf[(Index)i]);
        }
    
        __ip_05_lastIndex = 0;
        this->ip_05_lastIndex = __ip_05_lastIndex;
    }
    
    void adsr_01_perform(
        number attack,
        number decay,
        number sustain,
        number release,
        const SampleValue * trigger_signal,
        SampleValue * out,
        Index n
    ) {
        auto __adsr_01_trigger_number = this->adsr_01_trigger_number;
        auto __adsr_01_triggerValueBuf = this->adsr_01_triggerValueBuf;
        auto __adsr_01_time = this->adsr_01_time;
        auto __adsr_01_amplitude = this->adsr_01_amplitude;
        auto __adsr_01_outval = this->adsr_01_outval;
        auto __adsr_01_startingpoint = this->adsr_01_startingpoint;
        auto __adsr_01_phase = this->adsr_01_phase;
        auto __adsr_01_legato = this->adsr_01_legato;
        auto __adsr_01_triggerBuf = this->adsr_01_triggerBuf;
        auto __adsr_01_lastTriggerVal = this->adsr_01_lastTriggerVal;
        auto __adsr_01_mspersamp = this->adsr_01_mspersamp;
        bool bangMute = false;
    
        for (Index i = 0; i < n; i++) {
            number clampedattack = (attack > __adsr_01_mspersamp ? attack : __adsr_01_mspersamp);
            number clampeddecay = (decay > __adsr_01_mspersamp ? decay : __adsr_01_mspersamp);
            number clampedrelease = (release > __adsr_01_mspersamp ? release : __adsr_01_mspersamp);
            number currentTriggerVal = trigger_signal[(Index)i];
    
            if ((__adsr_01_lastTriggerVal == 0.0 && currentTriggerVal != 0.0) || __adsr_01_triggerBuf[(Index)i] == 1) {
                if ((bool)(__adsr_01_legato)) {
                    if (__adsr_01_phase != 0) {
                        __adsr_01_startingpoint = __adsr_01_outval;
                    } else {
                        __adsr_01_startingpoint = 0;
                    }
                } else {
                    __adsr_01_startingpoint = 0;
                }
    
                __adsr_01_amplitude = currentTriggerVal;
                __adsr_01_phase = 1;
                __adsr_01_time = 0.0;
                bangMute = false;
            } else if (__adsr_01_lastTriggerVal != 0.0 && currentTriggerVal == 0.0) {
                if (__adsr_01_phase != 4 && __adsr_01_phase != 0) {
                    __adsr_01_phase = 4;
                    __adsr_01_amplitude = __adsr_01_outval;
                    __adsr_01_time = 0.0;
                }
            }
    
            __adsr_01_time += __adsr_01_mspersamp;
    
            if (__adsr_01_phase == 0) {
                __adsr_01_outval = 0;
            } else if (__adsr_01_phase == 1) {
                if (__adsr_01_time > clampedattack) {
                    __adsr_01_time -= clampedattack;
                    __adsr_01_phase = 2;
                    __adsr_01_outval = __adsr_01_amplitude;
                } else {
                    __adsr_01_outval = (__adsr_01_amplitude - __adsr_01_startingpoint) * __adsr_01_time / clampedattack + __adsr_01_startingpoint;
                }
            } else if (__adsr_01_phase == 2) {
                if (__adsr_01_time > clampeddecay) {
                    __adsr_01_time -= clampeddecay;
                    __adsr_01_phase = 3;
                    __adsr_01_outval = __adsr_01_amplitude * sustain;
                } else {
                    __adsr_01_outval = __adsr_01_amplitude * sustain + (__adsr_01_amplitude - __adsr_01_amplitude * sustain) * (1. - __adsr_01_time / clampeddecay);
                }
            } else if (__adsr_01_phase == 3) {
                __adsr_01_outval = __adsr_01_amplitude * sustain;
            } else if (__adsr_01_phase == 4) {
                if (__adsr_01_time > clampedrelease) {
                    __adsr_01_time = 0;
                    __adsr_01_phase = 0;
                    __adsr_01_outval = 0;
                    __adsr_01_amplitude = 0;
                    bangMute = true;
                } else {
                    __adsr_01_outval = __adsr_01_amplitude * (1.0 - __adsr_01_time / clampedrelease);
                }
            }
    
            out[(Index)i] = __adsr_01_outval;
            __adsr_01_triggerBuf[(Index)i] = 0;
            __adsr_01_triggerValueBuf[(Index)i] = __adsr_01_trigger_number;
            __adsr_01_lastTriggerVal = currentTriggerVal;
        }
    
        if ((bool)(bangMute)) {
            this->getEngine()->scheduleClockEventWithValue(
                this,
                -1468824490,
                this->sampsToMs((SampleIndex)(this->vs)) + this->_currentTime,
                0
            );;
        }
    
        this->adsr_01_lastTriggerVal = __adsr_01_lastTriggerVal;
        this->adsr_01_phase = __adsr_01_phase;
        this->adsr_01_startingpoint = __adsr_01_startingpoint;
        this->adsr_01_outval = __adsr_01_outval;
        this->adsr_01_amplitude = __adsr_01_amplitude;
        this->adsr_01_time = __adsr_01_time;
    }
    
    void dspexpr_01_perform(const Sample * in1, const Sample * in2, SampleValue * out1, Index n) {
        Index i;
    
        for (i = 0; i < n; i++) {
            out1[(Index)i] = in1[(Index)i] * in2[(Index)i];//#map:_###_obj_###_:1
        }
    }
    
    void stackprotect_perform(Index n) {
        RNBO_UNUSED(n);
        auto __stackprotect_count = this->stackprotect_count;
        __stackprotect_count = 0;
        this->stackprotect_count = __stackprotect_count;
    }
    
    void ip_01_init() {
        this->ip_01_lastValue = this->ip_01_value;
    }
    
    void ip_01_fillSigBuf() {
        if ((bool)(this->ip_01_sigbuf)) {
            SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);
    
            if (k >= (SampleIndex)(this->vs))
                k = (SampleIndex)(this->vs) - 1;
    
            for (SampleIndex i = (SampleIndex)(this->ip_01_lastIndex); i < k; i++) {
                if (this->ip_01_resetCount > 0) {
                    this->ip_01_sigbuf[(Index)i] = 1;
                    this->ip_01_resetCount--;
                } else {
                    this->ip_01_sigbuf[(Index)i] = this->ip_01_lastValue;
                }
            }
    
            this->ip_01_lastIndex = k;
        }
    }
    
    void ip_01_dspsetup(bool force) {
        if ((bool)(this->ip_01_setupDone) && (bool)(!(bool)(force)))
            return;
    
        this->ip_01_lastIndex = 0;
        this->ip_01_setupDone = true;
    }
    
    void param_31_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_31_value;
    }
    
    void param_31_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_31_value_set(preset["value"]);
    }
    
    number mtof_01_innerMtoF_next(number midivalue, number tuning) {
        if (midivalue == this->mtof_01_innerMtoF_lastInValue && tuning == this->mtof_01_innerMtoF_lastTuning)
            return this->mtof_01_innerMtoF_lastOutValue;
    
        this->mtof_01_innerMtoF_lastInValue = midivalue;
        this->mtof_01_innerMtoF_lastTuning = tuning;
        number result = 0;
    
        {
            result = rnbo_exp(.057762265 * (midivalue - 69.0));
        }
    
        this->mtof_01_innerMtoF_lastOutValue = tuning * result;
        return this->mtof_01_innerMtoF_lastOutValue;
    }
    
    void mtof_01_innerMtoF_reset() {
        this->mtof_01_innerMtoF_lastInValue = 0;
        this->mtof_01_innerMtoF_lastOutValue = 0;
        this->mtof_01_innerMtoF_lastTuning = 0;
    }
    
    void mtof_01_innerScala_mid(int v) {
        this->mtof_01_innerScala_kbmMid = v;
        this->mtof_01_innerScala_updateRefFreq();
    }
    
    void mtof_01_innerScala_ref(int v) {
        this->mtof_01_innerScala_kbmRefNum = v;
        this->mtof_01_innerScala_updateRefFreq();
    }
    
    void mtof_01_innerScala_base(number v) {
        this->mtof_01_innerScala_kbmRefFreq = v;
        this->mtof_01_innerScala_updateRefFreq();
    }
    
    void mtof_01_innerScala_init() {
        list sclValid = {
            12,
            100,
            0,
            200,
            0,
            300,
            0,
            400,
            0,
            500,
            0,
            600,
            0,
            700,
            0,
            800,
            0,
            900,
            0,
            1000,
            0,
            1100,
            0,
            2,
            1
        };
    
        this->mtof_01_innerScala_updateScale(sclValid);
    }
    
    void mtof_01_innerScala_update(list scale, list map) {
        if (scale->length > 0) {
            this->mtof_01_innerScala_updateScale(scale);
        }
    
        if (map->length > 0) {
            this->mtof_01_innerScala_updateMap(map);
        }
    }
    
    number mtof_01_innerScala_mtof(number note) {
        if ((bool)(this->mtof_01_innerScala_lastValid) && this->mtof_01_innerScala_lastNote == note) {
            return this->mtof_01_innerScala_lastFreq;
        }
    
        array<int, 2> degoct = this->mtof_01_innerScala_applyKBM(note);
        number out = 0;
    
        if (degoct[1] > 0) {
            out = this->mtof_01_innerScala_applySCL(degoct[0], fract(note), this->mtof_01_innerScala_refFreq);
        }
    
        this->mtof_01_innerScala_updateLast(note, out);
        return out;
    }
    
    number mtof_01_innerScala_ftom(number hz) {
        if (hz <= 0.0) {
            return 0.0;
        }
    
        if ((bool)(this->mtof_01_innerScala_lastValid) && this->mtof_01_innerScala_lastFreq == hz) {
            return this->mtof_01_innerScala_lastNote;
        }
    
        array<number, 2> df = this->mtof_01_innerScala_hztodeg(hz);
        int degree = (int)(df[0]);
        number frac = df[1];
        number out = 0;
    
        if (this->mtof_01_innerScala_kbmSize == 0) {
            out = this->mtof_01_innerScala_kbmMid + degree;
        } else {
            array<int, 2> octdeg = this->mtof_01_innerScala_octdegree(degree, this->mtof_01_innerScala_kbmOctaveDegree);
            number oct = (number)(octdeg[0]);
            int index = (int)(octdeg[1]);
            Index entry = 0;
    
            for (Index i = 0; i < this->mtof_01_innerScala_kbmMapSize; i++) {
                if (index == this->mtof_01_innerScala_kbmValid[(Index)(i + this->mtof_01_innerScala_KBM_MAP_OFFSET)]) {
                    entry = i;
                    break;
                }
            }
    
            out = oct * this->mtof_01_innerScala_kbmSize + entry + this->mtof_01_innerScala_kbmMid;
        }
    
        out = out + frac;
        this->mtof_01_innerScala_updateLast(out, hz);
        return this->mtof_01_innerScala_lastNote;
    }
    
    int mtof_01_innerScala_updateScale(list scl) {
        if (scl->length > 1 && scl[0] * 2 + 1 == scl->length) {
            this->mtof_01_innerScala_lastValid = false;
            this->mtof_01_innerScala_sclExpMul = {};
            number last = 1;
    
            for (Index i = 1; i < scl->length; i += 2) {
                const number c = (const number)(scl[(Index)(i + 0)]);
                const number d = (const number)(scl[(Index)(i + 1)]);
    
                if (d <= 0) {
                    last = c / (number)1200;
                } else {
                    last = rnbo_log2(c / d);
                }
    
                this->mtof_01_innerScala_sclExpMul->push(last);
            }
    
            this->mtof_01_innerScala_sclOctaveMul = last;
            this->mtof_01_innerScala_sclEntryCount = (int)(this->mtof_01_innerScala_sclExpMul->length);
            this->mtof_01_innerScala_updateRefFreq();
            return 1;
        }
    
        return 0;
    }
    
    int mtof_01_innerScala_updateMap(list kbm) {
        if (kbm->length == 1 && kbm[0] == 0.0) {
            kbm = {0.0, 0.0, 0.0, 60.0, 69.0, 440.0};
        }
    
        if (kbm->length >= 6 && kbm[0] >= 0.0) {
            this->mtof_01_innerScala_lastValid = false;
            Index size = (Index)(kbm[0]);
            int octave = 12;
    
            if (kbm->length > 6) {
                octave = (int)(kbm[6]);
            }
    
            if (size > 0 && kbm->length < this->mtof_01_innerScala_KBM_MAP_OFFSET) {
                return 0;
            }
    
            this->mtof_01_innerScala_kbmSize = (int)(size);
            this->mtof_01_innerScala_kbmMin = (int)(kbm[1]);
            this->mtof_01_innerScala_kbmMax = (int)(kbm[2]);
            this->mtof_01_innerScala_kbmMid = (int)(kbm[3]);
            this->mtof_01_innerScala_kbmRefNum = (int)(kbm[4]);
            this->mtof_01_innerScala_kbmRefFreq = kbm[5];
            this->mtof_01_innerScala_kbmOctaveDegree = octave;
            this->mtof_01_innerScala_kbmValid = kbm;
            this->mtof_01_innerScala_kbmMapSize = (kbm->length - this->mtof_01_innerScala_KBM_MAP_OFFSET > kbm->length ? kbm->length : (kbm->length - this->mtof_01_innerScala_KBM_MAP_OFFSET < 0 ? 0 : kbm->length - this->mtof_01_innerScala_KBM_MAP_OFFSET));
            this->mtof_01_innerScala_updateRefFreq();
            return 1;
        }
    
        return 0;
    }
    
    void mtof_01_innerScala_updateLast(number note, number freq) {
        this->mtof_01_innerScala_lastValid = true;
        this->mtof_01_innerScala_lastNote = note;
        this->mtof_01_innerScala_lastFreq = freq;
    }
    
    array<number, 2> mtof_01_innerScala_hztodeg(number hz) {
        number hza = rnbo_abs(hz);
    
        number octave = rnbo_floor(
            rnbo_log2(hza / this->mtof_01_innerScala_refFreq) / this->mtof_01_innerScala_sclOctaveMul
        );
    
        int i = 0;
        number frac = 0;
        number n = 0;
    
        for (; i < this->mtof_01_innerScala_sclEntryCount; i++) {
            number c = this->mtof_01_innerScala_applySCLOctIndex(octave, i + 0, 0.0, this->mtof_01_innerScala_refFreq);
            n = this->mtof_01_innerScala_applySCLOctIndex(octave, i + 1, 0.0, this->mtof_01_innerScala_refFreq);
    
            if (c <= hza && hza < n) {
                if (c != hza) {
                    frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
                }
    
                break;
            }
        }
    
        if (i == this->mtof_01_innerScala_sclEntryCount && n != hza) {
            number c = n;
            n = this->mtof_01_innerScala_applySCLOctIndex(octave + 1, 0, 0.0, this->mtof_01_innerScala_refFreq);
            frac = rnbo_log2(hza / c) / rnbo_log2(n / c);
        }
    
        number deg = i + octave * this->mtof_01_innerScala_sclEntryCount;
    
        {
            deg = rnbo_fround((deg + frac) * 1 / (number)1) * 1;
            frac = 0.0;
        }
    
        return {deg, frac};
    }
    
    array<int, 2> mtof_01_innerScala_octdegree(int degree, int count) {
        int octave = 0;
        int index = 0;
    
        if (degree < 0) {
            octave = -(1 + (-1 - degree) / count);
            index = -degree % count;
    
            if (index > 0) {
                index = count - index;
            }
        } else {
            octave = degree / count;
            index = degree % count;
        }
    
        return {octave, index};
    }
    
    array<int, 2> mtof_01_innerScala_applyKBM(number note) {
        if ((this->mtof_01_innerScala_kbmMin == this->mtof_01_innerScala_kbmMax && this->mtof_01_innerScala_kbmMax == 0) || (note >= this->mtof_01_innerScala_kbmMin && note <= this->mtof_01_innerScala_kbmMax)) {
            int degree = (int)(rnbo_floor(note - this->mtof_01_innerScala_kbmMid));
    
            if (this->mtof_01_innerScala_kbmSize == 0) {
                return {degree, 1};
            }
    
            array<int, 2> octdeg = this->mtof_01_innerScala_octdegree(degree, this->mtof_01_innerScala_kbmSize);
            int octave = (int)(octdeg[0]);
            Index index = (Index)(octdeg[1]);
    
            if (this->mtof_01_innerScala_kbmMapSize > index) {
                degree = (int)(this->mtof_01_innerScala_kbmValid[(Index)(this->mtof_01_innerScala_KBM_MAP_OFFSET + index)]);
    
                if (degree >= 0) {
                    return {degree + octave * this->mtof_01_innerScala_kbmOctaveDegree, 1};
                }
            }
        }
    
        return {-1, 0};
    }
    
    number mtof_01_innerScala_applySCL(int degree, number frac, number refFreq) {
        array<int, 2> octdeg = this->mtof_01_innerScala_octdegree(degree, this->mtof_01_innerScala_sclEntryCount);
        return this->mtof_01_innerScala_applySCLOctIndex(octdeg[0], octdeg[1], frac, refFreq);
    }
    
    number mtof_01_innerScala_applySCLOctIndex(number octave, int index, number frac, number refFreq) {
        number p = 0;
    
        if (index > 0) {
            p = this->mtof_01_innerScala_sclExpMul[(Index)(index - 1)];
        }
    
        if (frac > 0) {
            p = this->linearinterp(frac, p, this->mtof_01_innerScala_sclExpMul[(Index)index]);
        } else if (frac < 0) {
            p = this->linearinterp(-frac, this->mtof_01_innerScala_sclExpMul[(Index)index], p);
        }
    
        return refFreq * rnbo_pow(2, p + octave * this->mtof_01_innerScala_sclOctaveMul);
    }
    
    void mtof_01_innerScala_updateRefFreq() {
        this->mtof_01_innerScala_lastValid = false;
        int refOffset = (int)(this->mtof_01_innerScala_kbmRefNum - this->mtof_01_innerScala_kbmMid);
    
        if (refOffset == 0) {
            this->mtof_01_innerScala_refFreq = this->mtof_01_innerScala_kbmRefFreq;
        } else {
            int base = (int)(this->mtof_01_innerScala_kbmSize);
    
            if (base < 1) {
                base = this->mtof_01_innerScala_sclEntryCount;
            }
    
            array<int, 2> octdeg = this->mtof_01_innerScala_octdegree(refOffset, base);
            number oct = (number)(octdeg[0]);
            int index = (int)(octdeg[1]);
    
            if (base > 0) {
                oct = oct + rnbo_floor(index / base);
                index = index % base;
            }
    
            if (index >= 0 && index < this->mtof_01_innerScala_kbmSize) {
                if (index < this->mtof_01_innerScala_kbmMapSize) {
                    index = (int)(this->mtof_01_innerScala_kbmValid[(Index)((Index)(index) + this->mtof_01_innerScala_KBM_MAP_OFFSET)]);
                } else {
                    index = -1;
                }
            }
    
            if (index < 0 || index > this->mtof_01_innerScala_sclExpMul->length)
                {} else {
                number p = 0;
    
                if (index > 0) {
                    p = this->mtof_01_innerScala_sclExpMul[(Index)(index - 1)];
                }
    
                this->mtof_01_innerScala_refFreq = this->mtof_01_innerScala_kbmRefFreq / rnbo_pow(2, p + oct * this->mtof_01_innerScala_sclOctaveMul);
            }
        }
    }
    
    void mtof_01_innerScala_reset() {
        this->mtof_01_innerScala_internal = true;
        this->mtof_01_innerScala_lastValid = false;
        this->mtof_01_innerScala_lastNote = 0;
        this->mtof_01_innerScala_lastFreq = 0;
        this->mtof_01_innerScala_sclEntryCount = 0;
        this->mtof_01_innerScala_sclOctaveMul = 1;
        this->mtof_01_innerScala_sclExpMul = {};
        this->mtof_01_innerScala_kbmValid = {0, 0, 0, 60, 69, 440};
        this->mtof_01_innerScala_kbmMid = 60;
        this->mtof_01_innerScala_kbmRefNum = 69;
        this->mtof_01_innerScala_kbmRefFreq = 440;
        this->mtof_01_innerScala_kbmSize = 0;
        this->mtof_01_innerScala_kbmMin = 0;
        this->mtof_01_innerScala_kbmMax = 0;
        this->mtof_01_innerScala_kbmOctaveDegree = 12;
        this->mtof_01_innerScala_kbmMapSize = 0;
        this->mtof_01_innerScala_refFreq = 261.63;
    }
    
    void mtof_01_init() {
        this->mtof_01_innerScala_update(this->mtof_01_scale, this->mtof_01_map);
    }
    
    number phasor_01_ph_next(number freq, number reset) {
        RNBO_UNUSED(reset);
        number pincr = freq * this->phasor_01_ph_conv;
    
        if (this->phasor_01_ph_currentPhase < 0.)
            this->phasor_01_ph_currentPhase = 1. + this->phasor_01_ph_currentPhase;
    
        if (this->phasor_01_ph_currentPhase > 1.)
            this->phasor_01_ph_currentPhase = this->phasor_01_ph_currentPhase - 1.;
    
        number tmp = this->phasor_01_ph_currentPhase;
        this->phasor_01_ph_currentPhase += pincr;
        return tmp;
    }
    
    void phasor_01_ph_reset() {
        this->phasor_01_ph_currentPhase = 0;
    }
    
    void phasor_01_ph_dspsetup() {
        this->phasor_01_ph_conv = (number)1 / this->sr;
    }
    
    void phasor_01_dspsetup(bool force) {
        if ((bool)(this->phasor_01_setupDone) && (bool)(!(bool)(force)))
            return;
    
        this->phasor_01_conv = (number)1 / this->samplerate();
        this->phasor_01_setupDone = true;
        this->phasor_01_ph_dspsetup();
    }
    
    void param_32_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_32_value;
    }
    
    void param_32_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_32_value_set(preset["value"]);
    }
    
    void ip_02_init() {
        this->ip_02_lastValue = this->ip_02_value;
    }
    
    void ip_02_fillSigBuf() {
        if ((bool)(this->ip_02_sigbuf)) {
            SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);
    
            if (k >= (SampleIndex)(this->vs))
                k = (SampleIndex)(this->vs) - 1;
    
            for (SampleIndex i = (SampleIndex)(this->ip_02_lastIndex); i < k; i++) {
                if (this->ip_02_resetCount > 0) {
                    this->ip_02_sigbuf[(Index)i] = 1;
                    this->ip_02_resetCount--;
                } else {
                    this->ip_02_sigbuf[(Index)i] = this->ip_02_lastValue;
                }
            }
    
            this->ip_02_lastIndex = k;
        }
    }
    
    void ip_02_dspsetup(bool force) {
        if ((bool)(this->ip_02_setupDone) && (bool)(!(bool)(force)))
            return;
    
        this->ip_02_lastIndex = 0;
        this->ip_02_setupDone = true;
    }
    
    void param_33_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_33_value;
    }
    
    void param_33_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_33_value_set(preset["value"]);
    }
    
    void param_34_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_34_value;
    }
    
    void param_34_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_34_value_set(preset["value"]);
    }
    
    number cycle_tilde_01_ph_next(number freq, number reset) {
        {
            {
                if (reset >= 0.)
                    this->cycle_tilde_01_ph_currentPhase = reset;
            }
        }
    
        number pincr = freq * this->cycle_tilde_01_ph_conv;
    
        if (this->cycle_tilde_01_ph_currentPhase < 0.)
            this->cycle_tilde_01_ph_currentPhase = 1. + this->cycle_tilde_01_ph_currentPhase;
    
        if (this->cycle_tilde_01_ph_currentPhase > 1.)
            this->cycle_tilde_01_ph_currentPhase = this->cycle_tilde_01_ph_currentPhase - 1.;
    
        number tmp = this->cycle_tilde_01_ph_currentPhase;
        this->cycle_tilde_01_ph_currentPhase += pincr;
        return tmp;
    }
    
    void cycle_tilde_01_ph_reset() {
        this->cycle_tilde_01_ph_currentPhase = 0;
    }
    
    void cycle_tilde_01_ph_dspsetup() {
        this->cycle_tilde_01_ph_conv = (number)1 / this->sr;
    }
    
    void cycle_tilde_01_dspsetup(bool force) {
        if ((bool)(this->cycle_tilde_01_setupDone) && (bool)(!(bool)(force)))
            return;
    
        this->cycle_tilde_01_phasei = 0;
        this->cycle_tilde_01_f2i = (number)4294967296 / this->samplerate();
        this->cycle_tilde_01_wrap = (long)(this->cycle_tilde_01_buffer->getSize()) - 1;
        this->cycle_tilde_01_setupDone = true;
        this->cycle_tilde_01_ph_dspsetup();
    }
    
    void cycle_tilde_01_bufferUpdated() {
        this->cycle_tilde_01_wrap = (long)(this->cycle_tilde_01_buffer->getSize()) - 1;
    }
    
    void ip_03_init() {
        this->ip_03_lastValue = this->ip_03_value;
    }
    
    void ip_03_fillSigBuf() {
        if ((bool)(this->ip_03_sigbuf)) {
            SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);
    
            if (k >= (SampleIndex)(this->vs))
                k = (SampleIndex)(this->vs) - 1;
    
            for (SampleIndex i = (SampleIndex)(this->ip_03_lastIndex); i < k; i++) {
                if (this->ip_03_resetCount > 0) {
                    this->ip_03_sigbuf[(Index)i] = 1;
                    this->ip_03_resetCount--;
                } else {
                    this->ip_03_sigbuf[(Index)i] = this->ip_03_lastValue;
                }
            }
    
            this->ip_03_lastIndex = k;
        }
    }
    
    void ip_03_dspsetup(bool force) {
        if ((bool)(this->ip_03_setupDone) && (bool)(!(bool)(force)))
            return;
    
        this->ip_03_lastIndex = 0;
        this->ip_03_setupDone = true;
    }
    
    void param_35_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_35_value;
    }
    
    void param_35_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_35_value_set(preset["value"]);
    }
    
    void ip_04_init() {
        this->ip_04_lastValue = this->ip_04_value;
    }
    
    void ip_04_fillSigBuf() {
        if ((bool)(this->ip_04_sigbuf)) {
            SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);
    
            if (k >= (SampleIndex)(this->vs))
                k = (SampleIndex)(this->vs) - 1;
    
            for (SampleIndex i = (SampleIndex)(this->ip_04_lastIndex); i < k; i++) {
                if (this->ip_04_resetCount > 0) {
                    this->ip_04_sigbuf[(Index)i] = 1;
                    this->ip_04_resetCount--;
                } else {
                    this->ip_04_sigbuf[(Index)i] = this->ip_04_lastValue;
                }
            }
    
            this->ip_04_lastIndex = k;
        }
    }
    
    void ip_04_dspsetup(bool force) {
        if ((bool)(this->ip_04_setupDone) && (bool)(!(bool)(force)))
            return;
    
        this->ip_04_lastIndex = 0;
        this->ip_04_setupDone = true;
    }
    
    void param_36_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_36_value;
    }
    
    void param_36_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_36_value_set(preset["value"]);
    }
    
    void adsr_01_dspsetup(bool force) {
        if ((bool)(this->adsr_01_setupDone) && (bool)(!(bool)(force)))
            return;
    
        this->adsr_01_mspersamp = (number)1000 / this->sr;
        this->adsr_01_setupDone = true;
    }
    
    void ip_05_init() {
        this->ip_05_lastValue = this->ip_05_value;
    }
    
    void ip_05_fillSigBuf() {
        if ((bool)(this->ip_05_sigbuf)) {
            SampleIndex k = (SampleIndex)(this->sampleOffsetIntoNextAudioBuffer);
    
            if (k >= (SampleIndex)(this->vs))
                k = (SampleIndex)(this->vs) - 1;
    
            for (SampleIndex i = (SampleIndex)(this->ip_05_lastIndex); i < k; i++) {
                if (this->ip_05_resetCount > 0) {
                    this->ip_05_sigbuf[(Index)i] = 1;
                    this->ip_05_resetCount--;
                } else {
                    this->ip_05_sigbuf[(Index)i] = this->ip_05_lastValue;
                }
            }
    
            this->ip_05_lastIndex = k;
        }
    }
    
    void ip_05_dspsetup(bool force) {
        if ((bool)(this->ip_05_setupDone) && (bool)(!(bool)(force)))
            return;
    
        this->ip_05_lastIndex = 0;
        this->ip_05_setupDone = true;
    }
    
    void param_37_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_37_value;
    }
    
    void param_37_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_37_value_set(preset["value"]);
    }
    
    void param_38_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_38_value;
    }
    
    void param_38_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_38_value_set(preset["value"]);
    }
    
    void param_39_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_39_value;
    }
    
    void param_39_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_39_value_set(preset["value"]);
    }
    
    void param_40_getPresetValue(PatcherStateInterface& preset) {
        preset["value"] = this->param_40_value;
    }
    
    void param_40_setPresetValue(PatcherStateInterface& preset) {
        if ((bool)(stateIsEmpty(preset)))
            return;
    
        this->param_40_value_set(preset["value"]);
    }
    
    bool stackprotect_check() {
        this->stackprotect_count++;
    
        if (this->stackprotect_count > 128) {
            console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
            return true;
        }
    
        return false;
    }
    
    void updateTime(MillisecondTime time) {
        this->_currentTime = time;
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));
    
        if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
            this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;
    
        if (this->sampleOffsetIntoNextAudioBuffer < 0)
            this->sampleOffsetIntoNextAudioBuffer = 0;
    }
    
    void assign_defaults()
    {
        dspexpr_01_in1 = 0;
        dspexpr_01_in2 = 0;
        ip_01_value = 0;
        ip_01_impulse = 0;
        dspexpr_02_in1 = 0;
        dspexpr_02_in2 = 0;
        param_31_value = 0.5;
        mtof_01_base = 440;
        notein_01_channel = 0;
        phasor_01_freq = 0;
        dspexpr_03_in1 = 0;
        dspexpr_03_in2 = 0;
        dspexpr_04_in1 = 0;
        dspexpr_04_in2 = 0;
        dspexpr_05_in1 = 0;
        dspexpr_05_in2 = 0;
        dspexpr_05_in3 = 0;
        dspexpr_06_in1 = 0;
        dspexpr_07_in1 = 0;
        dspexpr_07_in2 = 0;
        param_32_value = 345;
        dspexpr_09_in1 = 0;
        dspexpr_09_in2 = 1;
        dspexpr_10_in1 = 0;
        dspexpr_11_in1 = 0;
        dspexpr_11_in2 = 0;
        ip_02_value = 0;
        ip_02_impulse = 0;
        dspexpr_12_in1 = 0;
        dspexpr_12_in2 = 1;
        dspexpr_13_in1 = 0;
        param_33_value = 0;
        dspexpr_14_in1 = 0;
        dspexpr_14_in2 = 0;
        dspexpr_15_in1 = 0;
        dspexpr_15_in2 = 0;
        param_34_value = 10;
        cycle_tilde_01_frequency = 0;
        cycle_tilde_01_phase_offset = 0;
        ip_03_value = 0;
        ip_03_impulse = 0;
        param_35_value = 1;
        dspexpr_16_in1 = 0;
        dspexpr_17_in1 = 0;
        dspexpr_17_in2 = 0;
        dspexpr_18_in1 = 0;
        dspexpr_18_in2 = 1;
        dspexpr_19_in1 = 0;
        ip_04_value = 0;
        ip_04_impulse = 0;
        param_36_value = 10;
        adsr_01_trigger_number = 0;
        adsr_01_attack = 0;
        adsr_01_decay = 0;
        adsr_01_sustain = 0;
        adsr_01_release = 0;
        adsr_01_legato = 0;
        ip_05_value = 0;
        ip_05_impulse = 0;
        expr_01_in1 = 0;
        expr_01_out1 = 0;
        param_37_value = 10;
        param_38_value = 200;
        param_39_value = 0.2;
        param_40_value = 1000;
        _currentTime = 0;
        audioProcessSampleCount = 0;
        sampleOffsetIntoNextAudioBuffer = 0;
        zeroBuffer = nullptr;
        dummyBuffer = nullptr;
        signals[0] = nullptr;
        signals[1] = nullptr;
        signals[2] = nullptr;
        signals[3] = nullptr;
        signals[4] = nullptr;
        signals[5] = nullptr;
        signals[6] = nullptr;
        signals[7] = nullptr;
        signals[8] = nullptr;
        didAllocateSignals = 0;
        vs = 0;
        maxvs = 0;
        sr = 44100;
        invsr = 0.00002267573696;
        ip_01_lastIndex = 0;
        ip_01_lastValue = 0;
        ip_01_resetCount = 0;
        ip_01_sigbuf = nullptr;
        ip_01_setupDone = false;
        param_31_lastValue = 0;
        mtof_01_innerMtoF_lastInValue = 0;
        mtof_01_innerMtoF_lastOutValue = 0;
        mtof_01_innerMtoF_lastTuning = 0;
        mtof_01_innerScala_internal = true;
        mtof_01_innerScala_lastValid = false;
        mtof_01_innerScala_lastNote = 0;
        mtof_01_innerScala_lastFreq = 0;
        mtof_01_innerScala_sclEntryCount = 0;
        mtof_01_innerScala_sclOctaveMul = 1;
        mtof_01_innerScala_kbmValid = { 0, 0, 0, 60, 69, 440 };
        mtof_01_innerScala_kbmMid = 60;
        mtof_01_innerScala_kbmRefNum = 69;
        mtof_01_innerScala_kbmRefFreq = 440;
        mtof_01_innerScala_kbmSize = 0;
        mtof_01_innerScala_kbmMin = 0;
        mtof_01_innerScala_kbmMax = 0;
        mtof_01_innerScala_kbmOctaveDegree = 12;
        mtof_01_innerScala_kbmMapSize = 0;
        mtof_01_innerScala_refFreq = 261.63;
        notein_01_status = 0;
        notein_01_byte1 = -1;
        notein_01_inchan = 0;
        phasor_01_sigbuf = nullptr;
        phasor_01_lastLockedPhase = 0;
        phasor_01_conv = 0;
        phasor_01_ph_currentPhase = 0;
        phasor_01_ph_conv = 0;
        phasor_01_setupDone = false;
        param_32_lastValue = 0;
        ip_02_lastIndex = 0;
        ip_02_lastValue = 0;
        ip_02_resetCount = 0;
        ip_02_sigbuf = nullptr;
        ip_02_setupDone = false;
        param_33_lastValue = 0;
        param_34_lastValue = 0;
        cycle_tilde_01_wrap = 0;
        cycle_tilde_01_ph_currentPhase = 0;
        cycle_tilde_01_ph_conv = 0;
        cycle_tilde_01_setupDone = false;
        ip_03_lastIndex = 0;
        ip_03_lastValue = 0;
        ip_03_resetCount = 0;
        ip_03_sigbuf = nullptr;
        ip_03_setupDone = false;
        param_35_lastValue = 0;
        ip_04_lastIndex = 0;
        ip_04_lastValue = 0;
        ip_04_resetCount = 0;
        ip_04_sigbuf = nullptr;
        ip_04_setupDone = false;
        param_36_lastValue = 0;
        adsr_01_phase = 3;
        adsr_01_mspersamp = 0;
        adsr_01_time = 0;
        adsr_01_lastTriggerVal = 0;
        adsr_01_amplitude = 0;
        adsr_01_outval = 0;
        adsr_01_startingpoint = 0;
        adsr_01_triggerBuf = nullptr;
        adsr_01_triggerValueBuf = nullptr;
        adsr_01_setupDone = false;
        ip_05_lastIndex = 0;
        ip_05_lastValue = 0;
        ip_05_resetCount = 0;
        ip_05_sigbuf = nullptr;
        ip_05_setupDone = false;
        param_37_lastValue = 0;
        param_38_lastValue = 0;
        param_39_lastValue = 0;
        param_40_lastValue = 0;
        stackprotect_count = 0;
        _voiceIndex = 0;
        _noteNumber = 0;
        isMuted = 1;
        parameterOffset = 0;
    }
    
    // member variables
    
        number dspexpr_01_in1;
        number dspexpr_01_in2;
        number ip_01_value;
        number ip_01_impulse;
        number dspexpr_02_in1;
        number dspexpr_02_in2;
        number param_31_value;
        list mtof_01_midivalue;
        list mtof_01_scale;
        list mtof_01_map;
        number mtof_01_base;
        number notein_01_channel;
        number phasor_01_freq;
        number dspexpr_03_in1;
        number dspexpr_03_in2;
        number dspexpr_04_in1;
        number dspexpr_04_in2;
        number dspexpr_05_in1;
        number dspexpr_05_in2;
        number dspexpr_05_in3;
        number dspexpr_06_in1;
        number dspexpr_07_in1;
        number dspexpr_07_in2;
        number param_32_value;
        number dspexpr_09_in1;
        number dspexpr_09_in2;
        number dspexpr_10_in1;
        number dspexpr_11_in1;
        number dspexpr_11_in2;
        number ip_02_value;
        number ip_02_impulse;
        number dspexpr_12_in1;
        number dspexpr_12_in2;
        number dspexpr_13_in1;
        number param_33_value;
        number dspexpr_14_in1;
        number dspexpr_14_in2;
        number dspexpr_15_in1;
        number dspexpr_15_in2;
        number param_34_value;
        number cycle_tilde_01_frequency;
        number cycle_tilde_01_phase_offset;
        number ip_03_value;
        number ip_03_impulse;
        number param_35_value;
        number dspexpr_16_in1;
        number dspexpr_17_in1;
        number dspexpr_17_in2;
        number dspexpr_18_in1;
        number dspexpr_18_in2;
        number dspexpr_19_in1;
        number ip_04_value;
        number ip_04_impulse;
        number param_36_value;
        number adsr_01_trigger_number;
        number adsr_01_attack;
        number adsr_01_decay;
        number adsr_01_sustain;
        number adsr_01_release;
        number adsr_01_legato;
        number ip_05_value;
        number ip_05_impulse;
        number expr_01_in1;
        number expr_01_out1;
        number param_37_value;
        number param_38_value;
        number param_39_value;
        number param_40_value;
        MillisecondTime _currentTime;
        SampleIndex audioProcessSampleCount;
        SampleIndex sampleOffsetIntoNextAudioBuffer;
        signal zeroBuffer;
        signal dummyBuffer;
        SampleValue * signals[9];
        bool didAllocateSignals;
        Index vs;
        Index maxvs;
        number sr;
        number invsr;
        SampleIndex ip_01_lastIndex;
        number ip_01_lastValue;
        SampleIndex ip_01_resetCount;
        signal ip_01_sigbuf;
        bool ip_01_setupDone;
        number param_31_lastValue;
        number mtof_01_innerMtoF_lastInValue;
        number mtof_01_innerMtoF_lastOutValue;
        number mtof_01_innerMtoF_lastTuning;
        Float64BufferRef mtof_01_innerMtoF_buffer;
        bool mtof_01_innerScala_internal;
        const Index mtof_01_innerScala_KBM_MAP_OFFSET = 7;
        bool mtof_01_innerScala_lastValid;
        number mtof_01_innerScala_lastNote;
        number mtof_01_innerScala_lastFreq;
        int mtof_01_innerScala_sclEntryCount;
        number mtof_01_innerScala_sclOctaveMul;
        list mtof_01_innerScala_sclExpMul;
        list mtof_01_innerScala_kbmValid;
        int mtof_01_innerScala_kbmMid;
        int mtof_01_innerScala_kbmRefNum;
        number mtof_01_innerScala_kbmRefFreq;
        int mtof_01_innerScala_kbmSize;
        int mtof_01_innerScala_kbmMin;
        int mtof_01_innerScala_kbmMax;
        int mtof_01_innerScala_kbmOctaveDegree;
        Index mtof_01_innerScala_kbmMapSize;
        number mtof_01_innerScala_refFreq;
        int notein_01_status;
        int notein_01_byte1;
        int notein_01_inchan;
        signal phasor_01_sigbuf;
        number phasor_01_lastLockedPhase;
        number phasor_01_conv;
        number phasor_01_ph_currentPhase;
        number phasor_01_ph_conv;
        bool phasor_01_setupDone;
        number param_32_lastValue;
        SampleIndex ip_02_lastIndex;
        number ip_02_lastValue;
        SampleIndex ip_02_resetCount;
        signal ip_02_sigbuf;
        bool ip_02_setupDone;
        number param_33_lastValue;
        number param_34_lastValue;
        Float64BufferRef cycle_tilde_01_buffer;
        long cycle_tilde_01_wrap;
        uint32_t cycle_tilde_01_phasei;
        SampleValue cycle_tilde_01_f2i;
        number cycle_tilde_01_ph_currentPhase;
        number cycle_tilde_01_ph_conv;
        bool cycle_tilde_01_setupDone;
        SampleIndex ip_03_lastIndex;
        number ip_03_lastValue;
        SampleIndex ip_03_resetCount;
        signal ip_03_sigbuf;
        bool ip_03_setupDone;
        number param_35_lastValue;
        SampleIndex ip_04_lastIndex;
        number ip_04_lastValue;
        SampleIndex ip_04_resetCount;
        signal ip_04_sigbuf;
        bool ip_04_setupDone;
        number param_36_lastValue;
        Int adsr_01_phase;
        number adsr_01_mspersamp;
        number adsr_01_time;
        number adsr_01_lastTriggerVal;
        number adsr_01_amplitude;
        number adsr_01_outval;
        number adsr_01_startingpoint;
        signal adsr_01_triggerBuf;
        signal adsr_01_triggerValueBuf;
        bool adsr_01_setupDone;
        SampleIndex ip_05_lastIndex;
        number ip_05_lastValue;
        SampleIndex ip_05_resetCount;
        signal ip_05_sigbuf;
        bool ip_05_setupDone;
        number param_37_lastValue;
        number param_38_lastValue;
        number param_39_lastValue;
        number param_40_lastValue;
        number stackprotect_count;
        Index _voiceIndex;
        Int _noteNumber;
        Index isMuted;
        ParameterIndex parameterOffset;
    
};

rnbomatic()
{
}

~rnbomatic()
{
    delete this->p_01;
    delete this->p_02;
}

rnbomatic* getTopLevelPatcher() {
    return this;
}

void cancelClockEvents()
{
    getEngine()->flushClockEvents(this, 471525977, false);
}

template <typename T> void listquicksort(T& arr, T& sortindices, Int l, Int h, bool ascending) {
    if (l < h) {
        Int p = (Int)(this->listpartition(arr, sortindices, l, h, ascending));
        this->listquicksort(arr, sortindices, l, p - 1, ascending);
        this->listquicksort(arr, sortindices, p + 1, h, ascending);
    }
}

template <typename T> Int listpartition(T& arr, T& sortindices, Int l, Int h, bool ascending) {
    number x = arr[(Index)h];
    Int i = (Int)(l - 1);

    for (Int j = (Int)(l); j <= h - 1; j++) {
        bool asc = (bool)((bool)(ascending) && arr[(Index)j] <= x);
        bool desc = (bool)((bool)(!(bool)(ascending)) && arr[(Index)j] >= x);

        if ((bool)(asc) || (bool)(desc)) {
            i++;
            this->listswapelements(arr, i, j);
            this->listswapelements(sortindices, i, j);
        }
    }

    i++;
    this->listswapelements(arr, i, h);
    this->listswapelements(sortindices, i, h);
    return i;
}

template <typename T> void listswapelements(T& arr, Int a, Int b) {
    auto tmp = arr[(Index)a];
    arr[(Index)a] = arr[(Index)b];
    arr[(Index)b] = tmp;
}

inline number safediv(number num, number denom) {
    return (denom == 0.0 ? 0.0 : num / denom);
}

number safepow(number base, number exponent) {
    return fixnan(rnbo_pow(base, exponent));
}

number scale(
    number x,
    number lowin,
    number hiin,
    number lowout,
    number highout,
    number pow
) {
    auto inscale = this->safediv(1., hiin - lowin);
    number outdiff = highout - lowout;
    number value = (x - lowin) * inscale;

    if (pow != 1) {
        if (value > 0)
            value = this->safepow(value, pow);
        else
            value = -this->safepow(-value, pow);
    }

    value = value * outdiff + lowout;
    return value;
}

number mstosamps(MillisecondTime ms) {
    return ms * this->sr * 0.001;
}

number maximum(number x, number y) {
    return (x < y ? y : x);
}

MillisecondTime currenttime() {
    return this->_currentTime;
}

number tempo() {
    return this->getTopLevelPatcher()->globaltransport_getTempo(this->currenttime());
}

number mstobeats(number ms) {
    return ms * this->tempo() * 0.008 / (number)480;
}

MillisecondTime sampstoms(number samps) {
    return samps * 1000 / this->sr;
}

Index getNumMidiInputPorts() const {
    return 0;
}

void processMidiEvent(MillisecondTime , int , ConstByteArray , Index ) {}

Index getNumMidiOutputPorts() const {
    return 0;
}

void process(
    const SampleValue * const* inputs,
    Index numInputs,
    SampleValue * const* outputs,
    Index numOutputs,
    Index n
) {
    RNBO_UNUSED(numInputs);
    RNBO_UNUSED(inputs);
    this->vs = n;
    this->updateTime(this->getEngine()->getCurrentTime());
    SampleValue * out1 = (numOutputs >= 1 && outputs[0] ? outputs[0] : this->dummyBuffer);
    SampleValue * out2 = (numOutputs >= 2 && outputs[1] ? outputs[1] : this->dummyBuffer);
    this->p_01_perform(n);
    this->p_02_perform(out1, n);
    this->signalforwarder_01_perform(out1, out2, n);
    this->stackprotect_perform(n);
    this->globaltransport_advance();
    this->audioProcessSampleCount += this->vs;
}

void prepareToProcess(number sampleRate, Index maxBlockSize, bool force) {
    if (this->maxvs < maxBlockSize || !this->didAllocateSignals) {
        this->globaltransport_tempo = resizeSignal(this->globaltransport_tempo, this->maxvs, maxBlockSize);
        this->globaltransport_state = resizeSignal(this->globaltransport_state, this->maxvs, maxBlockSize);
        this->zeroBuffer = resizeSignal(this->zeroBuffer, this->maxvs, maxBlockSize);
        this->dummyBuffer = resizeSignal(this->dummyBuffer, this->maxvs, maxBlockSize);
        this->didAllocateSignals = true;
    }

    const bool sampleRateChanged = sampleRate != this->sr;
    const bool maxvsChanged = maxBlockSize != this->maxvs;
    const bool forceDSPSetup = sampleRateChanged || maxvsChanged || force;

    if (sampleRateChanged || maxvsChanged) {
        this->vs = maxBlockSize;
        this->maxvs = maxBlockSize;
        this->sr = sampleRate;
        this->invsr = 1 / sampleRate;
    }

    this->globaltransport_dspsetup(forceDSPSetup);
    this->p_01->prepareToProcess(sampleRate, maxBlockSize, force);
    this->p_02->prepareToProcess(sampleRate, maxBlockSize, force);

    if (sampleRateChanged)
        this->onSampleRateChanged(sampleRate);
}

void setProbingTarget(MessageTag id) {
    switch (id) {
    default:
        {
        this->setProbingIndex(-1);
        break;
        }
    }
}

void setProbingIndex(ProbingIndex ) {}

Index getProbingChannels(MessageTag outletId) const {
    RNBO_UNUSED(outletId);
    return 0;
}

DataRef* getDataRef(DataRefIndex index)  {
    switch (index) {
    case 0:
        {
        return addressOf(this->RNBODefaultMtofLookupTable256);
        break;
        }
    case 1:
        {
        return addressOf(this->RNBODefaultSinus);
        break;
        }
    case 2:
        {
        return addressOf(this->makenote_01_noteStatusobj);
        break;
        }
    default:
        {
        return nullptr;
        }
    }
}

DataRefIndex getNumDataRefs() const {
    return 3;
}

void fillRNBODefaultMtofLookupTable256(DataRef& ref) {
    Float64BufferRef buffer;
    buffer = new Float64Buffer(ref);
    number bufsize = buffer->getSize();

    for (Index i = 0; i < bufsize; i++) {
        number midivalue = -256. + (number)512. / (bufsize - 1) * i;
        buffer[i] = rnbo_exp(.057762265 * (midivalue - 69.0));
    }
}

void fillRNBODefaultSinus(DataRef& ref) {
    Float64BufferRef buffer;
    buffer = new Float64Buffer(ref);
    number bufsize = buffer->getSize();

    for (Index i = 0; i < bufsize; i++) {
        buffer[i] = rnbo_cos(i * 3.14159265358979323846 * 2. / bufsize);
    }
}

void fillDataRef(DataRefIndex index, DataRef& ref) {
    switch (index) {
    case 0:
        {
        this->fillRNBODefaultMtofLookupTable256(ref);
        break;
        }
    case 1:
        {
        this->fillRNBODefaultSinus(ref);
        break;
        }
    }
}

void zeroDataRef(DataRef& ref) {
    ref->setZero();
}

void processDataViewUpdate(DataRefIndex index, MillisecondTime time) {
    this->updateTime(time);

    if (index == 2) {
        this->makenote_01_noteStatus = new IntBuffer(this->makenote_01_noteStatusobj);
    }

    this->p_01->processDataViewUpdate(index, time);
    this->p_02->processDataViewUpdate(index, time);
}

void initialize() {
    this->RNBODefaultMtofLookupTable256 = initDataRef("RNBODefaultMtofLookupTable256", true, nullptr, "buffer~");
    this->RNBODefaultSinus = initDataRef("RNBODefaultSinus", true, nullptr, "buffer~");
    this->makenote_01_noteStatusobj = initDataRef("makenote_01_noteStatusobj", true, nullptr, "buffer~");
    this->assign_defaults();
    this->setState();
    this->RNBODefaultMtofLookupTable256->setIndex(0);
    this->RNBODefaultSinus->setIndex(1);
    this->makenote_01_noteStatusobj->setIndex(2);
    this->makenote_01_noteStatus = new IntBuffer(this->makenote_01_noteStatusobj);
    this->initializeObjects();
    this->allocateDataRefs();
    this->startup();
}

Index getIsMuted()  {
    return this->isMuted;
}

void setIsMuted(Index v)  {
    this->isMuted = v;
}

Index getPatcherSerial() const {
    return 0;
}

void getState(PatcherStateInterface& ) {}

void setState() {
    this->p_01 = new RNBOSubpatcher_395();
    this->p_01->setEngineAndPatcher(this->getEngine(), this);
    this->p_01->initialize();
    this->p_01->setParameterOffset(this->getParameterOffset(this->p_01));
    this->p_02 = new RNBOSubpatcher_396();
    this->p_02->setEngineAndPatcher(this->getEngine(), this);
    this->p_02->initialize();
    this->p_02->setParameterOffset(this->getParameterOffset(this->p_02));
}

void getPreset(PatcherStateInterface& preset) {
    preset["__presetid"] = "rnbo";
    this->p_01->getPreset(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"));
    this->p_02->getPreset(getSubState(getSubState(preset, "__sps"), "synth"));
}

void setPreset(MillisecondTime time, PatcherStateInterface& preset) {
    this->updateTime(time);

    this->p_01->param_01_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note0")
    );

    this->p_01->param_02_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note1")
    );

    this->p_01->param_03_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note2")
    );

    this->p_01->param_04_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note3")
    );

    this->p_01->param_05_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note4")
    );

    this->p_01->param_06_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note5")
    );

    this->p_01->param_07_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note6")
    );

    this->p_01->param_08_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note7")
    );

    this->p_01->param_09_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note8")
    );

    this->p_01->param_10_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note9")
    );

    this->p_01->param_11_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note10")
    );

    this->p_01->param_12_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note11")
    );

    this->p_01->param_13_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note12")
    );

    this->p_01->param_14_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note13")
    );

    this->p_01->param_15_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note14")
    );

    this->p_01->param_16_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note15")
    );

    this->p_01->param_17_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note16")
    );

    this->p_01->param_18_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note17")
    );

    this->p_01->param_19_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note18")
    );

    this->p_01->param_20_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note19")
    );

    this->p_01->param_21_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note20")
    );

    this->p_01->param_22_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note21")
    );

    this->p_01->param_23_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note22")
    );

    this->p_01->param_24_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note23")
    );

    this->p_01->param_25_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note24")
    );

    this->p_01->param_26_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note25")
    );

    this->p_01->param_27_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note26")
    );

    this->p_01->param_28_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note27")
    );

    this->p_01->param_29_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note28")
    );

    this->p_01->param_30_setPresetValue(
        getSubState(getSubState(getSubState(preset, "__sps"), "BellaNotesInput"), "note29")
    );

    this->p_02->param_31_setPresetValue(getSubState(getSubState(getSubState(preset, "__sps"), "synth"), "amp"));
    this->p_02->param_32_setPresetValue(getSubState(getSubState(getSubState(preset, "__sps"), "synth"), "freq"));
    this->p_02->param_33_setPresetValue(getSubState(getSubState(getSubState(preset, "__sps"), "synth"), "shift"));
    this->p_02->param_34_setPresetValue(getSubState(getSubState(getSubState(preset, "__sps"), "synth"), "mod"));
    this->p_02->param_35_setPresetValue(getSubState(getSubState(getSubState(preset, "__sps"), "synth"), "mod_amt"));
    this->p_02->param_36_setPresetValue(getSubState(getSubState(getSubState(preset, "__sps"), "synth"), "bw"));
    this->p_02->param_37_setPresetValue(getSubState(getSubState(getSubState(preset, "__sps"), "synth"), "attack"));
    this->p_02->param_38_setPresetValue(getSubState(getSubState(getSubState(preset, "__sps"), "synth"), "decay"));
    this->p_02->param_39_setPresetValue(getSubState(getSubState(getSubState(preset, "__sps"), "synth"), "sustain"));
    this->p_02->param_40_setPresetValue(getSubState(getSubState(getSubState(preset, "__sps"), "synth"), "release"));
}

void processTempoEvent(MillisecondTime time, Tempo tempo) {
    this->updateTime(time);

    if (this->globaltransport_setTempo(this->_currentTime, tempo, false)) {
        this->p_01->processTempoEvent(time, tempo);
        this->p_02->processTempoEvent(time, tempo);
    }
}

void processTransportEvent(MillisecondTime time, TransportState state) {
    this->updateTime(time);

    if (this->globaltransport_setState(this->_currentTime, state, false)) {
        this->p_01->processTransportEvent(time, state);
        this->p_02->processTransportEvent(time, state);
    }
}

void processBeatTimeEvent(MillisecondTime time, BeatTime beattime) {
    this->updateTime(time);

    if (this->globaltransport_setBeatTime(this->_currentTime, beattime, false)) {
        this->p_01->processBeatTimeEvent(time, beattime);
        this->p_02->processBeatTimeEvent(time, beattime);
    }
}

void onSampleRateChanged(double ) {}

void processTimeSignatureEvent(MillisecondTime time, int numerator, int denominator) {
    this->updateTime(time);

    if (this->globaltransport_setTimeSignature(this->_currentTime, numerator, denominator, false)) {
        this->p_01->processTimeSignatureEvent(time, numerator, denominator);
        this->p_02->processTimeSignatureEvent(time, numerator, denominator);
    }
}

void setParameterValue(ParameterIndex index, ParameterValue v, MillisecondTime time) {
    RNBO_UNUSED(v);
    this->updateTime(time);

    switch (index) {
    default:
        {
        index -= 0;

        if (index < this->p_01->getNumParameters())
            this->p_01->setParameterValue(index, v, time);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            this->p_02->setParameterValue(index, v, time);

        break;
        }
    }
}

void processParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
    this->setParameterValue(index, value, time);
}

void processNormalizedParameterEvent(ParameterIndex index, ParameterValue value, MillisecondTime time) {
    this->setParameterValueNormalized(index, value, time);
}

ParameterValue getParameterValue(ParameterIndex index)  {
    switch (index) {
    default:
        {
        index -= 0;

        if (index < this->p_01->getNumParameters())
            return this->p_01->getParameterValue(index);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->getParameterValue(index);

        return 0;
        }
    }
}

ParameterIndex getNumSignalInParameters() const {
    return 0;
}

ParameterIndex getNumSignalOutParameters() const {
    return 0;
}

ParameterIndex getNumParameters() const {
    return 0 + this->p_01->getNumParameters() + this->p_02->getNumParameters();
}

ConstCharPointer getParameterName(ParameterIndex index) const {
    switch (index) {
    default:
        {
        index -= 0;

        if (index < this->p_01->getNumParameters())
            return this->p_01->getParameterName(index);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->getParameterName(index);

        return "bogus";
        }
    }
}

ConstCharPointer getParameterId(ParameterIndex index) const {
    switch (index) {
    default:
        {
        index -= 0;

        if (index < this->p_01->getNumParameters())
            return this->p_01->getParameterId(index);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->getParameterId(index);

        return "bogus";
        }
    }
}

void getParameterInfo(ParameterIndex index, ParameterInfo * info) const {
    {
        switch (index) {
        default:
            {
            index -= 0;

            if (index < this->p_01->getNumParameters())
                this->p_01->getParameterInfo(index, info);

            index -= this->p_01->getNumParameters();

            if (index < this->p_02->getNumParameters())
                this->p_02->getParameterInfo(index, info);

            break;
            }
        }
    }
}

void sendParameter(ParameterIndex index, bool ignoreValue) {
    this->getEngine()->notifyParameterValueChanged(index, (ignoreValue ? 0 : this->getParameterValue(index)), ignoreValue);
}

ParameterIndex getParameterOffset(BaseInterface* subpatcher) const {
    if (subpatcher == this->p_01)
        return 0;

    if (subpatcher == this->p_02)
        return 0 + this->p_01->getNumParameters();

    return 0;
}

ParameterValue applyStepsToNormalizedParameterValue(ParameterValue normalizedValue, int steps) const {
    if (steps == 1) {
        if (normalizedValue > 0) {
            normalizedValue = 1.;
        }
    } else {
        ParameterValue oneStep = (number)1. / (steps - 1);
        ParameterValue numberOfSteps = rnbo_fround(normalizedValue / oneStep * 1 / (number)1) * (number)1;
        normalizedValue = numberOfSteps * oneStep;
    }

    return normalizedValue;
}

ParameterValue convertToNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
    switch (index) {
    default:
        {
        index -= 0;

        if (index < this->p_01->getNumParameters())
            return this->p_01->convertToNormalizedParameterValue(index, value);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->convertToNormalizedParameterValue(index, value);

        return value;
        }
    }
}

ParameterValue convertFromNormalizedParameterValue(ParameterIndex index, ParameterValue value) const {
    value = (value < 0 ? 0 : (value > 1 ? 1 : value));

    switch (index) {
    default:
        {
        index -= 0;

        if (index < this->p_01->getNumParameters())
            return this->p_01->convertFromNormalizedParameterValue(index, value);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->convertFromNormalizedParameterValue(index, value);

        return value;
        }
    }
}

ParameterValue constrainParameterValue(ParameterIndex index, ParameterValue value) const {
    switch (index) {
    default:
        {
        index -= 0;

        if (index < this->p_01->getNumParameters())
            return this->p_01->constrainParameterValue(index, value);

        index -= this->p_01->getNumParameters();

        if (index < this->p_02->getNumParameters())
            return this->p_02->constrainParameterValue(index, value);

        return value;
        }
    }
}

void scheduleParamInit(ParameterIndex index, Index order) {
    this->paramInitIndices->push(index);
    this->paramInitOrder->push(order);
}

void processParamInitEvents() {
    this->listquicksort(
        this->paramInitOrder,
        this->paramInitIndices,
        0,
        (int)(this->paramInitOrder->length - 1),
        true
    );

    for (Index i = 0; i < this->paramInitOrder->length; i++) {
        this->getEngine()->scheduleParameterChange(
            this->paramInitIndices[i],
            this->getParameterValue(this->paramInitIndices[i]),
            0
        );
    }
}

void processClockEvent(MillisecondTime time, ClockId index, bool hasValue, ParameterValue value) {
    RNBO_UNUSED(hasValue);
    this->updateTime(time);

    switch (index) {
    case 471525977:
        {
        this->makenote_01_noteOffClock_set(value);
        break;
        }
    }
}

void processOutletAtCurrentTime(EngineLink* , OutletIndex , ParameterValue ) {}

void processOutletEvent(
    EngineLink* sender,
    OutletIndex index,
    ParameterValue value,
    MillisecondTime time
) {
    this->updateTime(time);
    this->processOutletAtCurrentTime(sender, index, value);
}

void processNumMessage(MessageTag tag, MessageTag objectId, MillisecondTime time, number payload) {
    this->updateTime(time);

    switch (tag) {
    case TAG("valin"):
        {
        if (TAG("toggle_obj-100") == objectId)
            this->toggle_01_valin_set(payload);

        break;
        }
    case TAG("listin"):
        {
        if (TAG("message_obj-135") == objectId)
            this->message_01_listin_number_set(payload);

        if (TAG("message_obj-133") == objectId)
            this->message_02_listin_number_set(payload);

        break;
        }
    }

    this->p_01->processNumMessage(tag, objectId, time, payload);
    this->p_02->processNumMessage(tag, objectId, time, payload);
}

void processListMessage(
    MessageTag tag,
    MessageTag objectId,
    MillisecondTime time,
    const list& payload
) {
    this->updateTime(time);

    switch (tag) {
    case TAG("listin"):
        {
        if (TAG("message_obj-135") == objectId)
            this->message_01_listin_list_set(payload);

        if (TAG("message_obj-133") == objectId)
            this->message_02_listin_list_set(payload);

        break;
        }
    }

    this->p_01->processListMessage(tag, objectId, time, payload);
    this->p_02->processListMessage(tag, objectId, time, payload);
}

void processBangMessage(MessageTag tag, MessageTag objectId, MillisecondTime time) {
    this->updateTime(time);

    switch (tag) {
    case TAG("listin"):
        {
        if (TAG("message_obj-135") == objectId)
            this->message_01_listin_bang_bang();

        if (TAG("message_obj-133") == objectId)
            this->message_02_listin_bang_bang();

        break;
        }
    case TAG("bangin"):
        {
        if (TAG("button_obj-109") == objectId)
            this->button_01_bangin_bang();

        if (TAG("button_obj-111") == objectId)
            this->button_02_bangin_bang();

        break;
        }
    }

    this->p_01->processBangMessage(tag, objectId, time);
    this->p_02->processBangMessage(tag, objectId, time);
}

MessageTagInfo resolveTag(MessageTag tag) const {
    switch (tag) {
    case TAG("valout"):
        {
        return "valout";
        }
    case TAG("toggle_obj-100"):
        {
        return "toggle_obj-100";
        }
    case TAG("listout"):
        {
        return "listout";
        }
    case TAG("message_obj-135"):
        {
        return "message_obj-135";
        }
    case TAG("message_obj-133"):
        {
        return "message_obj-133";
        }
    case TAG("bangout"):
        {
        return "bangout";
        }
    case TAG("button_obj-109"):
        {
        return "button_obj-109";
        }
    case TAG("button_obj-111"):
        {
        return "button_obj-111";
        }
    case TAG("valin"):
        {
        return "valin";
        }
    case TAG("listin"):
        {
        return "listin";
        }
    case TAG("bangin"):
        {
        return "bangin";
        }
    }

    auto subpatchResult_0 = this->p_01->resolveTag(tag);

    if (subpatchResult_0)
        return subpatchResult_0;

    auto subpatchResult_1 = this->p_02->resolveTag(tag);

    if (subpatchResult_1)
        return subpatchResult_1;

    return "";
}

MessageIndex getNumMessages() const {
    return 0;
}

const MessageInfo& getMessageInfo(MessageIndex index) const {
    switch (index) {

    }

    return NullMessageInfo;
}

protected:

void toggle_01_valin_set(number v) {
    this->toggle_01_value_number_set(v);
}

void makenote_01_noteOffClock_set(number v) {
    this->makenote_01_sendNoteOff((int)(v));
}

void message_01_listin_list_set(const list& v) {
    {
        list __value = jsCreateListCopy(v);
        this->message_01_input = jsCreateListCopy(__value);
    };
}

void message_01_listin_number_set(number v) {
    {
        list __value = v;
        this->message_01_input = jsCreateListCopy(__value);
    };
}

void message_01_listin_bang_bang() {
    this->message_01_input_bang();
}

void message_02_listin_list_set(const list& v) {
    {
        list __value = jsCreateListCopy(v);
        this->message_02_input = jsCreateListCopy(__value);
    };
}

void message_02_listin_number_set(number v) {
    {
        list __value = v;
        this->message_02_input = jsCreateListCopy(__value);
    };
}

void message_02_listin_bang_bang() {
    this->message_02_input_bang();
}

void button_01_bangin_bang() {
    this->button_01_bangval_bang();
}

void button_02_bangin_bang() {
    this->button_02_bangval_bang();
}

number msToSamps(MillisecondTime ms, number sampleRate) {
    return ms * sampleRate * 0.001;
}

MillisecondTime sampsToMs(SampleIndex samps) {
    return samps * (this->invsr * 1000);
}

Index getMaxBlockSize() const {
    return this->maxvs;
}

number getSampleRate() const {
    return this->sr;
}

bool hasFixedVectorSize() const {
    return false;
}

Index getNumInputChannels() const {
    return 0;
}

Index getNumOutputChannels() const {
    return 2;
}

void allocateDataRefs() {
    this->p_01->allocateDataRefs();
    this->p_02->allocateDataRefs();
    this->makenote_01_noteStatus->requestSize(128);

    if (this->RNBODefaultMtofLookupTable256->hasRequestedSize()) {
        if (this->RNBODefaultMtofLookupTable256->wantsFill())
            this->fillRNBODefaultMtofLookupTable256(this->RNBODefaultMtofLookupTable256);

        this->getEngine()->sendDataRefUpdated(0);
    }

    if (this->RNBODefaultSinus->hasRequestedSize()) {
        if (this->RNBODefaultSinus->wantsFill())
            this->fillRNBODefaultSinus(this->RNBODefaultSinus);

        this->getEngine()->sendDataRefUpdated(1);
    }

    this->makenote_01_noteStatus = this->makenote_01_noteStatus->allocateIfNeeded();

    if (this->makenote_01_noteStatusobj->hasRequestedSize()) {
        if (this->makenote_01_noteStatusobj->wantsFill())
            this->zeroDataRef(this->makenote_01_noteStatusobj);

        this->getEngine()->sendDataRefUpdated(2);
    }
}

void initializeObjects() {
    this->message_01_init();
    this->message_02_init();
    this->p_01->initializeObjects();
    this->p_02->initializeObjects();
}

void sendOutlet(OutletIndex index, ParameterValue value) {
    this->getEngine()->sendOutlet(this, index, value);
}

void startup() {
    this->updateTime(this->getEngine()->getCurrentTime());
    this->p_01->startup();
    this->p_02->startup();
    this->processParamInitEvents();
}

void prepend_32_b_set(const list& v) {
    this->prepend_32_b = jsCreateListCopy(v);
}

void latch_02_control_set(number v) {
    this->latch_02_control = v;
}

void prepend_31_b_set(const list& v) {
    this->prepend_31_b = jsCreateListCopy(v);
}

void latch_01_control_set(number v) {
    this->latch_01_control = v;
}

void toggle_01_output_set(number v) {
    {
        list converted = {v};
        this->prepend_32_b_set(converted);
    }

    this->latch_02_control_set(v);

    {
        list converted = {v};
        this->prepend_31_b_set(converted);
    }

    this->latch_01_control_set(v);
}

void toggle_01_value_number_set(number v) {
    this->toggle_01_value_number_setter(v);
    v = this->toggle_01_value_number;
    this->getEngine()->sendNumMessage(TAG("valout"), TAG("toggle_obj-100"), v, this->_currentTime);
    this->toggle_01_output_set(v);
}

void pack_01_in2_set(number v) {
    this->pack_01_in2 = v;
}

void makenote_01_velocity_out_set(number v) {
    this->pack_01_in2_set(v);
}

void p_02_in1_number_set(number v) {
    this->p_02->updateTime(this->_currentTime);
    this->p_02->eventinlet_01_out1_number_set(v);
}

void midiformat_01_midimessage_set(number v) {
    this->p_02_in1_number_set(v);
}

void midiformat_01_noteonoroff_set(const list& v) {
    if (v->length > 1) {
        number releasevel = (v->length >= 3 ? v[2] : 0);
        number vel = v[1];
        number release = releasevel > 0.0 && vel < 1.0;

        if ((bool)(!(bool)(release))) {
            this->midiformat_01_send3byte(
                this->midiformat_01_innerFormat_note(v[0], vel, this->midiformat_01_channel)
            );
        } else {
            this->midiformat_01_send3byte(
                this->midiformat_01_innerFormat_noterelease(v[0], releasevel, this->midiformat_01_channel)
            );
        }
    }
}

void pack_01_out_set(const list& v) {
    this->midiformat_01_noteonoroff_set(v);
}

void pack_01_in1_set(number v) {
    this->pack_01_in1 = v;
    list array = list(0, 0);
    array[0] = this->pack_01_in1;
    array[1] = this->pack_01_in2;
    this->pack_01_out_set(array);
}

void makenote_01_notenumber_out_set(number v) {
    this->pack_01_in1_set(v);
}

void message_01_out_set(const list& ) {}

void message_01_input_bang() {
    list v = this->message_01_input;
    this->message_01_out_set(v);
}

void message_02_out_set(const list& ) {}

void message_02_input_bang() {
    list v = this->message_02_input;
    this->message_02_out_set(v);
}

void button_01_output_bang() {}

void button_01_bangval_bang() {
    this->getEngine()->sendBangMessage(TAG("bangout"), TAG("button_obj-109"), this->_currentTime);;
    this->button_01_output_bang();
}

void button_02_output_bang() {}

void button_02_bangval_bang() {
    this->getEngine()->sendBangMessage(TAG("bangout"), TAG("button_obj-111"), this->_currentTime);;
    this->button_02_output_bang();
}

void routepass_02_nomatch_bang_bang() {}

void message_02_set_set(const list& v) {
    {
        list __value = jsCreateListCopy(v);
        this->message_02_input = jsCreateListCopy(__value);
    };

    this->getEngine()->sendListMessage(TAG("listout"), TAG("message_obj-133"), v, this->_currentTime);
}

void makenote_01_velocity_set(number v) {
    this->makenote_01_velocity = v;
}

void scale_01_out_set(const list& v) {
    this->scale_01_out = jsCreateListCopy(v);
    this->button_02_bangval_bang();

    {
        number converted = (v->length > 0 ? v[0] : 0);
        this->makenote_01_velocity_set(converted);
    }
}

void scale_01_input_set(const list& v) {
    this->scale_01_input = jsCreateListCopy(v);
    list tmp = {};

    for (Index i = 0; i < v->length; i++) {
        tmp->push(this->scale(
            v[(Index)i],
            this->scale_01_inlow,
            this->scale_01_inhigh,
            this->scale_01_outlow,
            this->scale_01_outhigh,
            this->scale_01_power
        ));
    }

    this->scale_01_out_set(tmp);
}

void unpack_03_out2_bang() {
    number v = this->unpack_03_out2;

    {
        list converted = {v};
        this->message_02_set_set(converted);
    }

    {
        list converted = {v};
        this->scale_01_input_set(converted);
    }
}

void unpack_03_out1_bang() {}

void unpack_03_input_bang_bang() {
    this->unpack_03_out2_bang();
    this->unpack_03_out1_bang();
}

void routepass_02_match1_bang_bang() {
    this->unpack_03_input_bang_bang();
}

void unpack_03_out2_set(number v) {
    this->unpack_03_out2 = v;

    {
        list converted = {v};
        this->message_02_set_set(converted);
    }

    {
        list converted = {v};
        this->scale_01_input_set(converted);
    }
}

void unpack_03_out1_set(number v) {
    this->unpack_03_out1 = v;
}

void unpack_03_input_list_set(const list& v) {
    if (v->length > 1)
        this->unpack_03_out2_set(v[1]);

    if (v->length > 0)
        this->unpack_03_out1_set(v[0]);
}

void routepass_02_match1_number_set(number v) {
    {
        list converted = {v};
        this->unpack_03_input_list_set(converted);
    }
}

void routepass_02_match1_list_set(const list& v) {
    this->unpack_03_input_list_set(v);
}

void routepass_02_nomatch_number_set(number ) {}

void routepass_02_nomatch_list_set(const list& ) {}

void routepass_02_input_list_set(const list& v) {
    if ((bool)(!(bool)(v->length)))
        this->routepass_02_nomatch_bang_bang();
    else {
        number check = v[0];
        list input = jsCreateListCopy(v);
        bool nomatch = true;

        if (check == this->routepass_02_selector1) {
            if (input->length == 0)
                this->routepass_02_match1_bang_bang();
            else if (input->length == 1)
                this->routepass_02_match1_number_set(input[0]);
            else
                this->routepass_02_match1_list_set(input);

            nomatch = false;
        }

        if ((bool)(nomatch)) {
            if (v->length == 1) {
                this->routepass_02_nomatch_number_set(v[0]);
            } else {
                this->routepass_02_nomatch_list_set(v);
            }
        }
    }
}

void prepend_32_out1_set(const list& v) {
    this->routepass_02_input_list_set(v);
}

void prepend_32_a_set(const list& a) {
    this->prepend_32_a = jsCreateListCopy(a);
    auto b = this->prepend_32_b;

    {
        this->prepend_32_out1_set(b->concat(a));
        return;
    }
}

void latch_02_out1_set(number v) {
    {
        list converted = {v};
        this->prepend_32_a_set(converted);
    }
}

void latch_02_x_set(number x) {
    this->latch_02_x = x;
    auto control = this->latch_02_control;

    if (control != 0.)
        this->latch_02_value = x;

    {
        this->latch_02_out1_set(this->latch_02_value);
        return;
    }
}

void expr_02_out1_set(number v) {
    this->expr_02_out1 = v;
    this->toggle_01_value_number_set(this->expr_02_out1);
}

void expr_02_in1_set(number in1) {
    this->expr_02_in1 = in1;
    this->expr_02_out1_set(this->expr_02_in1 >= this->expr_02_in2);//#map:>=_obj-93:1
}

void unpack_02_out2_set(number v) {
    this->unpack_02_out2 = v;
    this->latch_02_x_set(v);
    this->expr_02_in1_set(v);
}

void routepass_01_nomatch_bang_bang() {}

void message_01_set_set(const list& v) {
    {
        list __value = jsCreateListCopy(v);
        this->message_01_input = jsCreateListCopy(__value);
    };

    this->getEngine()->sendListMessage(TAG("listout"), TAG("message_obj-135"), v, this->_currentTime);
}

void makenote_01_notenumber_set(number v) {
    this->makenote_01_notenumber = v;
    int vi = (int)(v);

    if (vi >= 0 && vi < 128) {
        this->makenote_01_sendNoteOn((int)(vi));
        this->getEngine()->scheduleClockEventWithValue(this, 471525977, this->makenote_01_duration + this->_currentTime, v);;
    }
}

void expr_03_out1_set(number v) {
    this->expr_03_out1 = v;
    this->button_01_bangval_bang();
    this->makenote_01_notenumber_set(this->expr_03_out1);
}

void expr_03_in1_set(number in1) {
    this->expr_03_in1 = in1;
    this->expr_03_out1_set(this->expr_03_in1 + this->expr_03_in2);//#map:+_obj-92:1
}

void unpack_01_out2_bang() {
    number v = this->unpack_01_out2;

    {
        list converted = {v};
        this->message_01_set_set(converted);
    }

    this->expr_03_in1_set(v);
}

void unpack_01_out1_bang() {}

void unpack_01_input_bang_bang() {
    this->unpack_01_out2_bang();
    this->unpack_01_out1_bang();
}

void routepass_01_match1_bang_bang() {
    this->unpack_01_input_bang_bang();
}

void unpack_01_out2_set(number v) {
    this->unpack_01_out2 = v;

    {
        list converted = {v};
        this->message_01_set_set(converted);
    }

    this->expr_03_in1_set(v);
}

void unpack_01_out1_set(number v) {
    this->unpack_01_out1 = v;
}

void unpack_01_input_list_set(const list& v) {
    if (v->length > 1)
        this->unpack_01_out2_set(v[1]);

    if (v->length > 0)
        this->unpack_01_out1_set(v[0]);
}

void routepass_01_match1_number_set(number v) {
    {
        list converted = {v};
        this->unpack_01_input_list_set(converted);
    }
}

void routepass_01_match1_list_set(const list& v) {
    this->unpack_01_input_list_set(v);
}

void routepass_01_nomatch_number_set(number ) {}

void routepass_01_nomatch_list_set(const list& ) {}

void routepass_01_input_list_set(const list& v) {
    if ((bool)(!(bool)(v->length)))
        this->routepass_01_nomatch_bang_bang();
    else {
        number check = v[0];
        list input = jsCreateListCopy(v);
        bool nomatch = true;

        if (check == this->routepass_01_selector1) {
            if (input->length == 0)
                this->routepass_01_match1_bang_bang();
            else if (input->length == 1)
                this->routepass_01_match1_number_set(input[0]);
            else
                this->routepass_01_match1_list_set(input);

            nomatch = false;
        }

        if ((bool)(nomatch)) {
            if (v->length == 1) {
                this->routepass_01_nomatch_number_set(v[0]);
            } else {
                this->routepass_01_nomatch_list_set(v);
            }
        }
    }
}

void prepend_31_out1_set(const list& v) {
    this->routepass_01_input_list_set(v);
}

void prepend_31_a_set(const list& a) {
    this->prepend_31_a = jsCreateListCopy(a);
    auto b = this->prepend_31_b;

    {
        this->prepend_31_out1_set(b->concat(a));
        return;
    }
}

void latch_01_out1_set(number v) {
    {
        list converted = {v};
        this->prepend_31_a_set(converted);
    }
}

void latch_01_x_set(number x) {
    this->latch_01_x = x;
    auto control = this->latch_01_control;

    if (control != 0.)
        this->latch_01_value = x;

    {
        this->latch_01_out1_set(this->latch_01_value);
        return;
    }
}

void unpack_02_out1_set(number v) {
    this->unpack_02_out1 = v;
    this->latch_01_x_set(v);
}

void unpack_02_input_list_set(const list& v) {
    if (v->length > 1)
        this->unpack_02_out2_set(v[1]);

    if (v->length > 0)
        this->unpack_02_out1_set(v[0]);
}

void p_01_out1_list_set(const list& v) {
    this->unpack_02_input_list_set(v);
}

void p_01_perform(Index n) {
    // subpatcher: BellaNotesInput
    this->p_01->process(nullptr, 0, nullptr, 0, n);
}

void p_02_perform(SampleValue * out1, Index n) {
    // subpatcher: synth
    SampleArray<1> outs = {out1};

    this->p_02->process(nullptr, 0, outs, 1, n);
}

void signalforwarder_01_perform(const SampleValue * input, SampleValue * output, Index n) {
    for (Index i = 0; i < n; i++) {
        output[(Index)i] = input[(Index)i];
    }
}

void stackprotect_perform(Index n) {
    RNBO_UNUSED(n);
    auto __stackprotect_count = this->stackprotect_count;
    __stackprotect_count = 0;
    this->stackprotect_count = __stackprotect_count;
}

void toggle_01_value_number_setter(number v) {
    this->toggle_01_value_number = (v != 0 ? 1 : 0);
}

void midiformat_01_channel_setter(number v) {
    this->midiformat_01_channel = (v > 16 ? 16 : (v < 1 ? 1 : v));
}

void toggle_01_getPresetValue(PatcherStateInterface& preset) {
    preset["value"] = this->toggle_01_value_number;
}

void toggle_01_setPresetValue(PatcherStateInterface& preset) {
    if ((bool)(stateIsEmpty(preset)))
        return;

    this->toggle_01_value_number_set(preset["value"]);
}

number midiformat_01_innerFormat_cclamp(number v) {
    return (v - 1 > 15 ? 15 : (v - 1 < 0 ? 0 : v - 1));
}

number midiformat_01_innerFormat_mclamp(number v) {
    return (v > 127 ? 127 : (v < 0 ? 0 : v));
}

array<number, 3> midiformat_01_innerFormat_chan3bytemsg(int status, number chan, number v0, number v1) {
    return {
        status + this->midiformat_01_innerFormat_cclamp(chan),
        this->midiformat_01_innerFormat_mclamp(v0),
        this->midiformat_01_innerFormat_mclamp(v1)
    };
}

array<number, 2> midiformat_01_innerFormat_chan2bytemsg(int status, number chan, number v) {
    return {
        status + this->midiformat_01_innerFormat_cclamp(chan),
        this->midiformat_01_innerFormat_mclamp(v)
    };
}

list midiformat_01_innerFormat_next(list data) {
    if (data->length > 1) {
        switch ((int)data[0]) {
        case 0:
            {
            if (data->length > 3) {
                array<number, 3> o = this->midiformat_01_innerFormat_note(data[1], data[2], data[3]);
                return {o[0], o[1], o[2]};
            }

            break;
            }
        case 1:
            {
            if (data->length > 3) {
                array<number, 3> o = this->midiformat_01_innerFormat_polypressure(data[1], data[2], data[3]);
                return {o[0], o[1], o[2]};
            }

            break;
            }
        case 2:
            {
            if (data->length > 3) {
                array<number, 3> o = this->midiformat_01_innerFormat_controlchange(data[1], data[2], data[3]);
                return {o[0], o[1], o[2]};
            }

            break;
            }
        case 3:
            {
            if (data->length > 2) {
                array<number, 2> o = this->midiformat_01_innerFormat_programchange(data[1], data[2]);
                return {o[0], o[1]};
            }

            break;
            }
        case 4:
            {
            if (data->length > 2) {
                array<number, 2> o = this->midiformat_01_innerFormat_aftertouch(data[1], data[2]);
                return {o[0], o[1]};
            }

            break;
            }
        case 5:
            {
            if (data->length > 2) {
                array<number, 3> o = this->midiformat_01_innerFormat_pitchbend(data[1], data[2]);
                return {o[0], o[1], o[2]};
            }

            break;
            }
        default:
            {
            break;
            }
        }
    }

    return {};
}

array<number, 3> midiformat_01_innerFormat_note(number pitch, number velocity, number channel) {
    return this->midiformat_01_innerFormat_chan3bytemsg(0x90, channel, pitch, velocity);
}

array<number, 3> midiformat_01_innerFormat_noterelease(number pitch, number velocity, number channel) {
    return this->midiformat_01_innerFormat_chan3bytemsg(0x80, channel, pitch, velocity);
}

array<number, 3> midiformat_01_innerFormat_pitchbend(number v, number channel) {
    const int stat = (const int)(0xE0 + this->midiformat_01_innerFormat_cclamp(channel));
    int i;

    {
        {
            v = (v > 1 ? 1 : (v < -1 ? -1 : v));

            if (v < 0) {
                i = 8192 * v + 8192 + 0.5;
            } else {
                i = 8191 * v + 8192 + 0.5;
            }
        }
    }

    return this->midiformat_01_innerFormat_chan3bytemsg(
        0xE0,
        channel,
        (BinOpInt)((UBinOpInt)i & (UBinOpInt)0x7F),
        (BinOpInt)((UBinOpInt)((UBinOpInt)i >> (UBinOpInt)7) & (UBinOpInt)0x7F)
    );
}

array<number, 3> midiformat_01_innerFormat_polypressure(number pressure, number pitch, number channel) {
    return this->midiformat_01_innerFormat_chan3bytemsg(0xA0, channel, pressure, pitch);
}

array<number, 3> midiformat_01_innerFormat_controlchange(number num, number value, number channel) {
    return this->midiformat_01_innerFormat_chan3bytemsg(0xB0, channel, num, value);
}

array<number, 2> midiformat_01_innerFormat_programchange(number num, number channel) {
    return this->midiformat_01_innerFormat_chan2bytemsg(0xC0, channel, num);
}

array<number, 2> midiformat_01_innerFormat_aftertouch(number value, number channel) {
    return this->midiformat_01_innerFormat_chan2bytemsg(0xD0, channel, value);
}

void midiformat_01_innerFormat_reset() {}

void midiformat_01_send3byte(array<number, 3> bytes) {
    this->midiformat_01_midimessage_set(bytes[0]);
    this->midiformat_01_midimessage_set(bytes[1]);
    this->midiformat_01_midimessage_set(bytes[2]);
}

void makenote_01_sendNoteOff(int noteNumber) {
    this->makenote_01_noteStatus[(Index)noteNumber] = 0;
    this->makenote_01_velocity_out_set(0);
    this->makenote_01_notenumber_out_set(noteNumber);
}

void makenote_01_sendNoteOn(int noteNumber) {
    this->makenote_01_noteStatus[(Index)noteNumber] = 1;
    this->makenote_01_velocity_out_set(this->makenote_01_velocity);
    this->makenote_01_notenumber_out_set(noteNumber);
}

void message_01_init() {
    {
        list __value = {21};
        this->message_01_input = jsCreateListCopy(__value);
    };
}

void message_02_init() {
    {
        list __value = {0.738};
        this->message_02_input = jsCreateListCopy(__value);
    };
}

Index globaltransport_getSampleOffset(MillisecondTime time) {
    return this->mstosamps(this->maximum(0, time - this->getEngine()->getCurrentTime()));
}

number globaltransport_getTempoAtSample(SampleIndex sampleOffset) {
    return (sampleOffset >= 0 && sampleOffset < this->vs ? this->globaltransport_tempo[(Index)sampleOffset] : this->globaltransport_lastTempo);
}

number globaltransport_getStateAtSample(SampleIndex sampleOffset) {
    return (sampleOffset >= 0 && sampleOffset < this->vs ? this->globaltransport_state[(Index)sampleOffset] : this->globaltransport_lastState);
}

number globaltransport_getState(MillisecondTime time) {
    return this->globaltransport_getStateAtSample(this->globaltransport_getSampleOffset(time));
}

number globaltransport_getBeatTime(MillisecondTime time) {
    number i = 2;

    while (i < this->globaltransport_beatTimeChanges->length && this->globaltransport_beatTimeChanges[(Index)(i + 1)] <= time) {
        i += 2;
    }

    i -= 2;
    number beatTimeBase = this->globaltransport_beatTimeChanges[(Index)i];

    if (this->globaltransport_getState(time) == 0)
        return beatTimeBase;

    number beatTimeBaseMsTime = this->globaltransport_beatTimeChanges[(Index)(i + 1)];
    number diff = time - beatTimeBaseMsTime;
    return beatTimeBase + this->mstobeats(diff);
}

bool globaltransport_setTempo(MillisecondTime time, number tempo, bool notify) {
    if ((bool)(notify)) {
        this->processTempoEvent(time, tempo);
        this->globaltransport_notify = true;
    } else {
        Index offset = (Index)(this->globaltransport_getSampleOffset(time));

        if (this->globaltransport_getTempoAtSample(offset) != tempo) {
            this->globaltransport_beatTimeChanges->push(this->globaltransport_getBeatTime(time));
            this->globaltransport_beatTimeChanges->push(time);
            fillSignal(this->globaltransport_tempo, this->vs, tempo, offset);
            this->globaltransport_lastTempo = tempo;
            this->globaltransport_tempoNeedsReset = true;
            return true;
        }
    }

    return false;
}

number globaltransport_getTempo(MillisecondTime time) {
    return this->globaltransport_getTempoAtSample(this->globaltransport_getSampleOffset(time));
}

bool globaltransport_setState(MillisecondTime time, number state, bool notify) {
    if ((bool)(notify)) {
        this->processTransportEvent(time, TransportState(state));
        this->globaltransport_notify = true;
    } else {
        Index offset = (Index)(this->globaltransport_getSampleOffset(time));

        if (this->globaltransport_getStateAtSample(offset) != state) {
            fillSignal(this->globaltransport_state, this->vs, state, offset);
            this->globaltransport_lastState = TransportState(state);
            this->globaltransport_stateNeedsReset = true;

            if (state == 0) {
                this->globaltransport_beatTimeChanges->push(this->globaltransport_getBeatTime(time));
                this->globaltransport_beatTimeChanges->push(time);
            }

            return true;
        }
    }

    return false;
}

bool globaltransport_setBeatTime(MillisecondTime time, number beattime, bool notify) {
    if ((bool)(notify)) {
        this->processBeatTimeEvent(time, beattime);
        this->globaltransport_notify = true;
        return false;
    } else {
        bool beatTimeHasChanged = false;
        float oldBeatTime = (float)(this->globaltransport_getBeatTime(time));
        float newBeatTime = (float)(beattime);

        if (oldBeatTime != newBeatTime) {
            beatTimeHasChanged = true;
        }

        this->globaltransport_beatTimeChanges->push(beattime);
        this->globaltransport_beatTimeChanges->push(time);
        return beatTimeHasChanged;
    }
}

number globaltransport_getBeatTimeAtSample(SampleIndex sampleOffset) {
    auto msOffset = this->sampstoms(sampleOffset);
    return this->globaltransport_getBeatTime(this->getEngine()->getCurrentTime() + msOffset);
}

array<number, 2> globaltransport_getTimeSignature(MillisecondTime time) {
    number i = 3;

    while (i < this->globaltransport_timeSignatureChanges->length && this->globaltransport_timeSignatureChanges[(Index)(i + 2)] <= time) {
        i += 3;
    }

    i -= 3;

    return {
        this->globaltransport_timeSignatureChanges[(Index)i],
        this->globaltransport_timeSignatureChanges[(Index)(i + 1)]
    };
}

array<number, 2> globaltransport_getTimeSignatureAtSample(SampleIndex sampleOffset) {
    auto msOffset = this->sampstoms(sampleOffset);
    return this->globaltransport_getTimeSignature(this->getEngine()->getCurrentTime() + msOffset);
}

bool globaltransport_setTimeSignature(MillisecondTime time, number numerator, number denominator, bool notify) {
    if ((bool)(notify)) {
        this->processTimeSignatureEvent(time, (int)(numerator), (int)(denominator));
        this->globaltransport_notify = true;
    } else {
        array<number, 2> currentSig = this->globaltransport_getTimeSignature(time);

        if (currentSig[0] != numerator || currentSig[1] != denominator) {
            this->globaltransport_timeSignatureChanges->push(numerator);
            this->globaltransport_timeSignatureChanges->push(denominator);
            this->globaltransport_timeSignatureChanges->push(time);
            return true;
        }
    }

    return false;
}

void globaltransport_advance() {
    if ((bool)(this->globaltransport_tempoNeedsReset)) {
        fillSignal(this->globaltransport_tempo, this->vs, this->globaltransport_lastTempo);
        this->globaltransport_tempoNeedsReset = false;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendTempoEvent(this->globaltransport_lastTempo);
        }
    }

    if ((bool)(this->globaltransport_stateNeedsReset)) {
        fillSignal(this->globaltransport_state, this->vs, this->globaltransport_lastState);
        this->globaltransport_stateNeedsReset = false;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendTransportEvent(TransportState(this->globaltransport_lastState));
        }
    }

    if (this->globaltransport_beatTimeChanges->length > 2) {
        this->globaltransport_beatTimeChanges[0] = this->globaltransport_beatTimeChanges[(Index)(this->globaltransport_beatTimeChanges->length - 2)];
        this->globaltransport_beatTimeChanges[1] = this->globaltransport_beatTimeChanges[(Index)(this->globaltransport_beatTimeChanges->length - 1)];
        this->globaltransport_beatTimeChanges->length = 2;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendBeatTimeEvent(this->globaltransport_beatTimeChanges[0]);
        }
    }

    if (this->globaltransport_timeSignatureChanges->length > 3) {
        this->globaltransport_timeSignatureChanges[0] = this->globaltransport_timeSignatureChanges[(Index)(this->globaltransport_timeSignatureChanges->length - 3)];
        this->globaltransport_timeSignatureChanges[1] = this->globaltransport_timeSignatureChanges[(Index)(this->globaltransport_timeSignatureChanges->length - 2)];
        this->globaltransport_timeSignatureChanges[2] = this->globaltransport_timeSignatureChanges[(Index)(this->globaltransport_timeSignatureChanges->length - 1)];
        this->globaltransport_timeSignatureChanges->length = 3;

        if ((bool)(this->globaltransport_notify)) {
            this->getEngine()->sendTimeSignatureEvent(
                (int)(this->globaltransport_timeSignatureChanges[0]),
                (int)(this->globaltransport_timeSignatureChanges[1])
            );
        }
    }

    this->globaltransport_notify = false;
}

void globaltransport_dspsetup(bool force) {
    if ((bool)(this->globaltransport_setupDone) && (bool)(!(bool)(force)))
        return;

    fillSignal(this->globaltransport_tempo, this->vs, this->globaltransport_lastTempo);
    this->globaltransport_tempoNeedsReset = false;
    fillSignal(this->globaltransport_state, this->vs, this->globaltransport_lastState);
    this->globaltransport_stateNeedsReset = false;
    this->globaltransport_setupDone = true;
}

bool stackprotect_check() {
    this->stackprotect_count++;

    if (this->stackprotect_count > 128) {
        console->log("STACK OVERFLOW DETECTED - stopped processing branch !");
        return true;
    }

    return false;
}

void updateTime(MillisecondTime time) {
    this->_currentTime = time;
    this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(rnbo_fround(this->msToSamps(time - this->getEngine()->getCurrentTime(), this->sr)));

    if (this->sampleOffsetIntoNextAudioBuffer >= (SampleIndex)(this->vs))
        this->sampleOffsetIntoNextAudioBuffer = (SampleIndex)(this->vs) - 1;

    if (this->sampleOffsetIntoNextAudioBuffer < 0)
        this->sampleOffsetIntoNextAudioBuffer = 0;
}

void assign_defaults()
{
    unpack_01_out1 = 0;
    unpack_01_out2 = 0;
    routepass_01_selector1 = 1;
    latch_01_x = 0;
    latch_01_control = 0;
    unpack_02_out1 = 0;
    unpack_02_out2 = 0;
    p_01_target = 0;
    toggle_01_value_number = 0;
    toggle_01_value_number_setter(toggle_01_value_number);
    expr_02_in1 = 0;
    expr_02_in2 = 0.3;
    expr_02_out1 = 0;
    latch_02_x = 0;
    latch_02_control = 0;
    p_02_target = 0;
    expr_03_in1 = 0;
    expr_03_in2 = 60;
    expr_03_out1 = 0;
    midiformat_01_channel = 0;
    midiformat_01_channel_setter(midiformat_01_channel);
    midiformat_01_pitchbend = 64;
    pack_01_in1 = 0;
    pack_01_in2 = 0;
    makenote_01_notenumber = 0;
    makenote_01_velocity = 0;
    makenote_01_duration = 1;
    unpack_03_out1 = 0;
    unpack_03_out2 = 0;
    routepass_02_selector1 = 1;
    scale_01_inlow = 0;
    scale_01_inhigh = 1;
    scale_01_outlow = 80;
    scale_01_outhigh = 127;
    scale_01_power = 1;
    _currentTime = 0;
    audioProcessSampleCount = 0;
    sampleOffsetIntoNextAudioBuffer = 0;
    zeroBuffer = nullptr;
    dummyBuffer = nullptr;
    didAllocateSignals = 0;
    vs = 0;
    maxvs = 0;
    sr = 44100;
    invsr = 0.00002267573696;
    latch_01_value = 0;
    toggle_01_lastValue = 0;
    latch_02_value = 0;
    globaltransport_tempo = nullptr;
    globaltransport_tempoNeedsReset = false;
    globaltransport_lastTempo = 120;
    globaltransport_state = nullptr;
    globaltransport_stateNeedsReset = false;
    globaltransport_lastState = 0;
    globaltransport_beatTimeChanges = { 0, 0 };
    globaltransport_timeSignatureChanges = { 4, 4, 0 };
    globaltransport_notify = false;
    globaltransport_setupDone = false;
    stackprotect_count = 0;
    _voiceIndex = 0;
    _noteNumber = 0;
    isMuted = 1;
}

// member variables

    number unpack_01_out1;
    number unpack_01_out2;
    list prepend_31_a;
    list prepend_31_b;
    number routepass_01_selector1;
    number latch_01_x;
    number latch_01_control;
    number unpack_02_out1;
    number unpack_02_out2;
    number p_01_target;
    number toggle_01_value_number;
    number expr_02_in1;
    number expr_02_in2;
    number expr_02_out1;
    number latch_02_x;
    number latch_02_control;
    number p_02_target;
    number expr_03_in1;
    number expr_03_in2;
    number expr_03_out1;
    number midiformat_01_channel;
    number midiformat_01_pitchbend;
    number pack_01_in1;
    number pack_01_in2;
    number makenote_01_notenumber;
    number makenote_01_velocity;
    number makenote_01_duration;
    list prepend_32_a;
    list prepend_32_b;
    list message_01_input;
    number unpack_03_out1;
    number unpack_03_out2;
    number routepass_02_selector1;
    list scale_01_input;
    number scale_01_inlow;
    number scale_01_inhigh;
    number scale_01_outlow;
    number scale_01_outhigh;
    number scale_01_power;
    list scale_01_out;
    list message_02_input;
    MillisecondTime _currentTime;
    SampleIndex audioProcessSampleCount;
    SampleIndex sampleOffsetIntoNextAudioBuffer;
    signal zeroBuffer;
    signal dummyBuffer;
    bool didAllocateSignals;
    Index vs;
    Index maxvs;
    number sr;
    number invsr;
    number latch_01_value;
    number toggle_01_lastValue;
    number latch_02_value;
    IntBufferRef makenote_01_noteStatus;
    signal globaltransport_tempo;
    bool globaltransport_tempoNeedsReset;
    number globaltransport_lastTempo;
    signal globaltransport_state;
    bool globaltransport_stateNeedsReset;
    number globaltransport_lastState;
    list globaltransport_beatTimeChanges;
    list globaltransport_timeSignatureChanges;
    bool globaltransport_notify;
    bool globaltransport_setupDone;
    number stackprotect_count;
    DataRef RNBODefaultMtofLookupTable256;
    DataRef RNBODefaultSinus;
    DataRef makenote_01_noteStatusobj;
    Index _voiceIndex;
    Int _noteNumber;
    Index isMuted;
    indexlist paramInitIndices;
    indexlist paramInitOrder;
    RNBOSubpatcher_395* p_01;
    RNBOSubpatcher_396* p_02;

};

PatcherInterface* creaternbomatic()
{
    return new rnbomatic();
}

#ifndef RNBO_NO_PATCHERFACTORY

extern "C" PatcherFactoryFunctionPtr GetPatcherFactoryFunction(PlatformInterface* platformInterface)
#else

extern "C" PatcherFactoryFunctionPtr rnbomaticFactoryFunction(PlatformInterface* platformInterface)
#endif

{
    Platform::set(platformInterface);
    return creaternbomatic;
}

} // end RNBO namespace

