/********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowerSouceCar
//!	Generated Date	: Wed, 21, Dec 2022  
	File Path	: DefaultComponent\DefaultConfig\PowerSouceCar.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PowerSouceCar.h"
//#[ ignore
#define Default_PowerSouceCar_PowerSouceCar_SERIALIZE OM_NO_OP

#define Default_PowerSouceCar_SwitchLightOff_SERIALIZE OM_NO_OP

#define Default_PowerSouceCar_SwitchLightOn_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class PowerSouceCar
PowerSouceCar::PowerSouceCar(IOxfActive* const theActiveContext) : OMReactive() {
    NOTIFY_REACTIVE_CONSTRUCTOR(PowerSouceCar, PowerSouceCar(), 0, Default_PowerSouceCar_PowerSouceCar_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

PowerSouceCar::~PowerSouceCar(void) {
    NOTIFY_DESTRUCTOR(~PowerSouceCar, true);
}

void PowerSouceCar::SwitchLightOff(void) {
    NOTIFY_OPERATION(SwitchLightOff, SwitchLightOff(), 0, Default_PowerSouceCar_SwitchLightOff_SERIALIZE);
    //#[ operation SwitchLightOff()
    std::cout<<"Let Off";
    //#]
}

void PowerSouceCar::SwitchLightOn(void) {
    NOTIFY_OPERATION(SwitchLightOn, SwitchLightOn(), 0, Default_PowerSouceCar_SwitchLightOn_SERIALIZE);
    //#[ operation SwitchLightOn()
    std::cout<<"LEd On";
    //#]
}

bool PowerSouceCar::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PowerSouceCar::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PowerSouceCar::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PowerSouceCar::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(requestPowerOn_Default_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    //#[ transition 1 
                    SwitchLightOn();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State On
        case On:
        {
            if(IS_EVENT_TYPE_OF(RequestPowerOff_Default_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.On");
                    //#[ transition 2 
                    SwitchLightOff();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    rootState_subState = Off;
                    rootState_active = Off;
                    NOTIFY_TRANSITION_TERMINATED("2");
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
void OMAnimatedPowerSouceCar::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PowerSouceCar::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case PowerSouceCar::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPowerSouceCar::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}

void OMAnimatedPowerSouceCar::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(PowerSouceCar, Default, Default, false, OMAnimatedPowerSouceCar)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PowerSouceCar.cpp
*********************************************************************/
