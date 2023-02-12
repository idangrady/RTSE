/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TPMS
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\TPMS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TPMS.h"
//#[ ignore
#define Architecture_TPMS_TPMS_SERIALIZE OM_NO_OP

#define Architecture_TPMS_turnWheel1Led_SERIALIZE aomsmethod->addAttribute("value", x2String(value));

#define OMAnim_Architecture_TPMS_setTempWheel1_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_tempWheel1)

#define OMAnim_Architecture_TPMS_setTempWheel1_int_SERIALIZE_RET_VAL
//#]

//## package Architecture

//## class TPMS
TPMS::TPMS(void) : OMThread(), OMReactive(), systemOK(false), tempHighThreshold(50), tempLowThreshold(10), tempWheel1(0), wheel1Led(false) {
    NOTIFY_ACTIVE_CONSTRUCTOR(TPMS, TPMS(), 0, Architecture_TPMS_TPMS_SERIALIZE);
    setActiveContext(this, true);
    initStatechart();
}

TPMS::~TPMS(void) {
    NOTIFY_DESTRUCTOR(~TPMS, true);
}

void TPMS::turnWheel1Led(int value) {
    NOTIFY_OPERATION(turnWheel1Led, turnWheel1Led(int), 1, Architecture_TPMS_turnWheel1Led_SERIALIZE);
    //#[ operation turnWheel1Led(int)
    wheel1Led = value;
    std::cout<<"Led 1= "<<wheel1Led;
    //#]
}

const int TPMS::getPressureWheel1(void) const {
    return pressureWheel1;
}

void TPMS::setPressureWheel1(const int p_pressureWheel1) {
    pressureWheel1 = p_pressureWheel1;
}

const RhpBoolean TPMS::getSystemOK(void) const {
    return systemOK;
}

void TPMS::setSystemOK(const RhpBoolean p_systemOK) {
    systemOK = p_systemOK;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getTempHighThreshold(void) const {
    return tempHighThreshold;
}

void TPMS::setTempHighThreshold(const int p_tempHighThreshold) {
    tempHighThreshold = p_tempHighThreshold;
}

const int TPMS::getTempLowThreshold(void) const {
    return tempLowThreshold;
}

void TPMS::setTempLowThreshold(const int p_tempLowThreshold) {
    tempLowThreshold = p_tempLowThreshold;
}

const int TPMS::getTempWheel1(void) const {
    return tempWheel1;
}

void TPMS::setTempWheel1(const int p_tempWheel1) {
    tempWheel1 = p_tempWheel1;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getWheel1Led(void) const {
    return wheel1Led;
}

void TPMS::setWheel1Led(const int p_wheel1Led) {
    wheel1Led = p_wheel1Led;
    NOTIFY_SET_OPERATION;
}

bool TPMS::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void TPMS::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    Wheel1LedChange_subState = OMNonState;
}

void TPMS::Wheel1LedChange_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.Wheel1LedChange");
    rootState_subState = Wheel1LedChange;
    NOTIFY_TRANSITION_STARTED("0");
    NOTIFY_STATE_ENTERED("ROOT.Wheel1LedChange.Off");
    Wheel1LedChange_subState = Off;
    rootState_active = Off;
    NOTIFY_TRANSITION_TERMINATED("0");
}

void TPMS::Wheel1LedChange_exit(void) {
    switch (Wheel1LedChange_subState) {
        // State SignalSense
        case SignalSense:
        {
            NOTIFY_STATE_EXITED("ROOT.Wheel1LedChange.SignalSense");
        }
        break;
        // State TurnOnLed
        case TurnOnLed:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Wheel1LedChange.TurnOnLed");
        }
        break;
        // State TurnOffLed
        case TurnOffLed:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.Wheel1LedChange.TurnOffLed");
        }
        break;
        // State Off
        case Off:
        {
            NOTIFY_STATE_EXITED("ROOT.Wheel1LedChange.Off");
        }
        break;
        default:
            break;
    }
    Wheel1LedChange_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.Wheel1LedChange");
}

void TPMS::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        Wheel1LedChange_entDef();
    }
}

IOxfReactive::TakeEventStatus TPMS::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State SignalSense
        case SignalSense:
        {
            if(IS_EVENT_TYPE_OF(onWheel1LedChange_Architecture_id) == 1)
                {
                    //## transition 3 
                    if((tempWheel1 < tempLowThreshold) && (tempWheel1 > tempHighThreshold))
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_STATE_EXITED("ROOT.Wheel1LedChange.SignalSense");
                            //#[ transition 3 
                            turnWheel1Led(true);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Wheel1LedChange.TurnOnLed");
                            pushNullTransition();
                            Wheel1LedChange_subState = TurnOnLed;
                            rootState_active = TurnOnLed;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_STATE_EXITED("ROOT.Wheel1LedChange.SignalSense");
                            //#[ transition 4 
                            turnWheel1Led(false);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Wheel1LedChange.TurnOffLed");
                            pushNullTransition();
                            Wheel1LedChange_subState = TurnOffLed;
                            rootState_active = TurnOffLed;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        // State TurnOnLed
        case TurnOnLed:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Wheel1LedChange.TurnOnLed");
                    NOTIFY_STATE_ENTERED("ROOT.Wheel1LedChange.SignalSense");
                    Wheel1LedChange_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State TurnOffLed
        case TurnOffLed:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.Wheel1LedChange.TurnOffLed");
                    NOTIFY_STATE_ENTERED("ROOT.Wheel1LedChange.SignalSense");
                    Wheel1LedChange_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(startCar_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Wheel1LedChange.Off");
                    //#[ transition 1 
                    systemOK = true;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Wheel1LedChange.SignalSense");
                    Wheel1LedChange_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTPMS::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("systemOK", x2String(myReal->systemOK));
    aomsAttributes->addAttribute("tempWheel1", x2String(myReal->tempWheel1));
    aomsAttributes->addAttribute("pressureWheel1", x2String(myReal->pressureWheel1));
    aomsAttributes->addAttribute("wheel1Led", x2String(myReal->wheel1Led));
    aomsAttributes->addAttribute("tempHighThreshold", x2String(myReal->tempHighThreshold));
    aomsAttributes->addAttribute("tempLowThreshold", x2String(myReal->tempLowThreshold));
}

void OMAnimatedTPMS::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == TPMS::Wheel1LedChange)
        {
            Wheel1LedChange_serializeStates(aomsState);
        }
}

void OMAnimatedTPMS::Wheel1LedChange_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Wheel1LedChange");
    switch (myReal->Wheel1LedChange_subState) {
        case TPMS::SignalSense:
        {
            SignalSense_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOnLed:
        {
            TurnOnLed_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOffLed:
        {
            TurnOffLed_serializeStates(aomsState);
        }
        break;
        case TPMS::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTPMS::TurnOnLed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Wheel1LedChange.TurnOnLed");
}

void OMAnimatedTPMS::TurnOffLed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Wheel1LedChange.TurnOffLed");
}

void OMAnimatedTPMS::SignalSense_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Wheel1LedChange.SignalSense");
}

void OMAnimatedTPMS::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Wheel1LedChange.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(TPMS, Architecture, Architecture, false, OMAnimatedTPMS)

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setTempWheel1_int, "setTempWheel1", FALSE, "setTempWheel1(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setTempWheel1_int, TPMS, setTempWheel1(p_tempWheel1), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TPMS.cpp
*********************************************************************/
