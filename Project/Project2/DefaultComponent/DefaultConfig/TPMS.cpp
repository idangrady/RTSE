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
#define Architecture_TPMS_turnWheelLed_SERIALIZE \
    aomsmethod->addAttribute("value", x2String(value));\
    aomsmethod->addAttribute("ledId", x2String(ledId));
#define Architecture_TPMS_TPMS_SERIALIZE OM_NO_OP

#define OMAnim_Architecture_TPMS_setPressureWheel1_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pressureWheel1)

#define OMAnim_Architecture_TPMS_setPressureWheel1_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setPressureWheel2_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pressureWheel2)

#define OMAnim_Architecture_TPMS_setPressureWheel2_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setTempWheel1_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_tempWheel1)

#define OMAnim_Architecture_TPMS_setTempWheel1_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setTempWheel2_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_tempWheel2)

#define OMAnim_Architecture_TPMS_setTempWheel2_int_SERIALIZE_RET_VAL
//#]

//## package Architecture

//## class TPMS
TPMS::TPMS(void) : OMThread(), OMReactive(), pressureHighThreshold(80), pressureLowThreshold(50), pressureWheel1(0), pressureWheel2(0), systemOK(false), tempHighThreshold(50), tempLowThreshold(10), tempWheel1(0), tempWheel2(0), wheel1Led(false), wheel2Led(false) {
    NOTIFY_ACTIVE_CONSTRUCTOR(TPMS, TPMS(), 0, Architecture_TPMS_TPMS_SERIALIZE);
    setActiveContext(this, true);
    initStatechart();
}

TPMS::~TPMS(void) {
    NOTIFY_DESTRUCTOR(~TPMS, true);
}

void TPMS::turnWheelLed(bool value, int ledId) {
    NOTIFY_OPERATION(turnWheelLed, turnWheelLed(bool,int), 2, Architecture_TPMS_turnWheelLed_SERIALIZE);
    //#[ operation turnWheelLed(bool,int)
    if(ledId == 1)
    {
    wheel1Led = value;
    }
    else if(ledId == 2)
    {
    wheel2Led = value;
    }
    std::cout<<"Led " <<ledId <<" = "<<wheel1Led;
    //#]
}

const int TPMS::getPressureHighThreshold(void) const {
    return pressureHighThreshold;
}

void TPMS::setPressureHighThreshold(const int p_pressureHighThreshold) {
    pressureHighThreshold = p_pressureHighThreshold;
}

const int TPMS::getPressureLowThreshold(void) const {
    return pressureLowThreshold;
}

void TPMS::setPressureLowThreshold(const int p_pressureLowThreshold) {
    pressureLowThreshold = p_pressureLowThreshold;
}

const int TPMS::getPressureWheel1(void) const {
    return pressureWheel1;
}

void TPMS::setPressureWheel1(const int p_pressureWheel1) {
    pressureWheel1 = p_pressureWheel1;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getPressureWheel2(void) const {
    return pressureWheel2;
}

void TPMS::setPressureWheel2(const int p_pressureWheel2) {
    pressureWheel2 = p_pressureWheel2;
    NOTIFY_SET_OPERATION;
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

const int TPMS::getTempWheel2(void) const {
    return tempWheel2;
}

void TPMS::setTempWheel2(const int p_tempWheel2) {
    tempWheel2 = p_tempWheel2;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getWheel1Led(void) const {
    return wheel1Led;
}

void TPMS::setWheel1Led(const int p_wheel1Led) {
    wheel1Led = p_wheel1Led;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getWheel2Led(void) const {
    return wheel2Led;
}

void TPMS::setWheel2Led(const int p_wheel2Led) {
    wheel2Led = p_wheel2Led;
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
}

IOxfReactive::TakeEventStatus TPMS::SignalSense_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(onWheel2LedChange_Architecture_id) == 1)
        {
            //## transition 9 
            if((tempWheel2 < tempLowThreshold) || (tempWheel2 > tempHighThreshold) ||  (pressureWheel2 < pressureLowThreshold) || (pressureWheel2 > pressureHighThreshold))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_STATE_EXITED("ROOT.SignalSense");
                    //#[ transition 9 
                    turnWheelLed(true,2);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TurnOnLed2");
                    pushNullTransition();
                    rootState_subState = TurnOnLed2;
                    rootState_active = TurnOnLed2;
                    NOTIFY_TRANSITION_TERMINATED("9");
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_STATE_EXITED("ROOT.SignalSense");
                    //#[ transition 10 
                    turnWheelLed(false,2);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TurnOffLed2");
                    pushNullTransition();
                    rootState_subState = TurnOffLed2;
                    rootState_active = TurnOffLed2;
                    NOTIFY_TRANSITION_TERMINATED("10");
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
        }
    else {
        if(IS_EVENT_TYPE_OF(reqPowerOff_Architecture_id) == 1)
            {
                NOTIFY_TRANSITION_STARTED("7");
                NOTIFY_STATE_EXITED("ROOT.SignalSense");
                //#[ transition 7 
                systemOK=false;
                wheel1Led=false;
                wheel2Led=false;
                //#]
                NOTIFY_STATE_ENTERED("ROOT.Off");
                rootState_subState = Off;
                rootState_active = Off;
                NOTIFY_TRANSITION_TERMINATED("7");
                res = eventConsumed;
            }
        else {
            if(IS_EVENT_TYPE_OF(onWheel1LedChange_Architecture_id) == 1)
                {
                    //## transition 3 
                    if((tempWheel1 < tempLowThreshold) || (tempWheel1 > tempHighThreshold) ||  (pressureWheel1 < pressureLowThreshold) || (pressureWheel1 > pressureHighThreshold))
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_STATE_EXITED("ROOT.SignalSense");
                            //#[ transition 3 
                            turnWheelLed(true,1);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.TurnOnLed1");
                            pushNullTransition();
                            rootState_subState = TurnOnLed1;
                            rootState_active = TurnOnLed1;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_STATE_EXITED("ROOT.SignalSense");
                            //#[ transition 4 
                            turnWheelLed(false,1);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.TurnOffLed1");
                            pushNullTransition();
                            rootState_subState = TurnOffLed1;
                            rootState_active = TurnOffLed1;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            }
            
        }
        
    
    return res;
}

void TPMS::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus TPMS::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(startCar_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    //#[ transition 1 
                    systemOK = true;
                    tempWheel1 = tempWheel2 = 20;
                    pressureWheel1 = pressureWheel2 = 75;
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TurnOnLed1
        case TurnOnLed1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TurnOnLed1");
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TurnOffLed1
        case TurnOffLed1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TurnOffLed1");
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SignalSense
        case SignalSense:
        {
            res = SignalSense_handleEvent();
        }
        break;
        // State TurnOnLed2
        case TurnOnLed2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TurnOnLed2");
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TurnOffLed2
        case TurnOffLed2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TurnOffLed2");
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("11");
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
    aomsAttributes->addAttribute("pressureHighThreshold", x2String(myReal->pressureHighThreshold));
    aomsAttributes->addAttribute("pressureLowThreshold", x2String(myReal->pressureLowThreshold));
    aomsAttributes->addAttribute("wheel2Led", x2String(myReal->wheel2Led));
    aomsAttributes->addAttribute("pressureWheel2", x2String(myReal->pressureWheel2));
    aomsAttributes->addAttribute("tempWheel2", x2String(myReal->tempWheel2));
}

void OMAnimatedTPMS::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case TPMS::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOnLed1:
        {
            TurnOnLed1_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOffLed1:
        {
            TurnOffLed1_serializeStates(aomsState);
        }
        break;
        case TPMS::SignalSense:
        {
            SignalSense_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOnLed2:
        {
            TurnOnLed2_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOffLed2:
        {
            TurnOffLed2_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTPMS::TurnOnLed2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOnLed2");
}

void OMAnimatedTPMS::TurnOnLed1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOnLed1");
}

void OMAnimatedTPMS::TurnOffLed2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOffLed2");
}

void OMAnimatedTPMS::TurnOffLed1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOffLed1");
}

void OMAnimatedTPMS::SignalSense_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SignalSense");
}

void OMAnimatedTPMS::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(TPMS, Architecture, Architecture, false, OMAnimatedTPMS)

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setPressureWheel1_int, "setPressureWheel1", FALSE, "setPressureWheel1(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setPressureWheel1_int, TPMS, setPressureWheel1(p_pressureWheel1), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setPressureWheel2_int, "setPressureWheel2", FALSE, "setPressureWheel2(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setPressureWheel2_int, TPMS, setPressureWheel2(p_pressureWheel2), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setTempWheel1_int, "setTempWheel1", FALSE, "setTempWheel1(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setTempWheel1_int, TPMS, setTempWheel1(p_tempWheel1), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setTempWheel2_int, "setTempWheel2", FALSE, "setTempWheel2(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setTempWheel2_int, TPMS, setTempWheel2(p_tempWheel2), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TPMS.cpp
*********************************************************************/
