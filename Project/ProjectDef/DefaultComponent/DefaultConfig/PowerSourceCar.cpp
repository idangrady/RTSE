/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowerSourceCar
//!	Generated Date	: Wed, 21, Dec 2022  
	File Path	: DefaultComponent\DefaultConfig\PowerSourceCar.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PowerSourceCar.h"
//#[ ignore
#define Architecture_PowerSourceCar_PowerSourceCar_SERIALIZE OM_NO_OP

#define Architecture_PowerSourceCar_indicateSystemFault_SERIALIZE OM_NO_OP

#define Architecture_PowerSourceCar_runSystemTest_SERIALIZE OM_NO_OP

#define Architecture_PowerSourceCar_switchLightOff_SERIALIZE OM_NO_OP

#define Architecture_PowerSourceCar_switchLightOn_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class PowerSourceCar
PowerSourceCar::PowerSourceCar(IOxfActive* const theActiveContext) : OMReactive(), systemOK(true) {
    NOTIFY_REACTIVE_CONSTRUCTOR(PowerSourceCar, PowerSourceCar(), 0, Architecture_PowerSourceCar_PowerSourceCar_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

PowerSourceCar::~PowerSourceCar(void) {
    NOTIFY_DESTRUCTOR(~PowerSourceCar, true);
}

void PowerSourceCar::indicateSystemFault(void) {
    NOTIFY_OPERATION(indicateSystemFault, indicateSystemFault(), 0, Architecture_PowerSourceCar_indicateSystemFault_SERIALIZE);
    //#[ operation indicateSystemFault()
    std::cout<<"System FAULT!";
    //#]
}

void PowerSourceCar::runSystemTest(void) {
    NOTIFY_OPERATION(runSystemTest, runSystemTest(), 0, Architecture_PowerSourceCar_runSystemTest_SERIALIZE);
    //#[ operation runSystemTest()
    std::cout<<"runSystemTest  -  system ok\n";
    systemOK = false;
    //#]
}

void PowerSourceCar::switchLightOff(void) {
    NOTIFY_OPERATION(switchLightOff, switchLightOff(), 0, Architecture_PowerSourceCar_switchLightOff_SERIALIZE);
    //#[ operation switchLightOff()
    std::cout<<"Led Off\n";
    //#]
}

void PowerSourceCar::switchLightOn(void) {
    NOTIFY_OPERATION(switchLightOn, switchLightOn(), 0, Architecture_PowerSourceCar_switchLightOn_SERIALIZE);
    //#[ operation switchLightOn()
    std::cout<<"Led On\n";
    //#]
}

const RhpBoolean PowerSourceCar::getSystemOK(void) const {
    return systemOK;
}

void PowerSourceCar::setSystemOK(const RhpBoolean p_systemOK) {
    systemOK = p_systemOK;
    NOTIFY_SET_OPERATION;
}

bool PowerSourceCar::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PowerSourceCar::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void PowerSourceCar::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PowerSourceCar::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(reqPowerOn_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    NOTIFY_STATE_ENTERED("ROOT.CheckingSystemState");
                    pushNullTransition();
                    rootState_subState = CheckingSystemState;
                    rootState_active = CheckingSystemState;
                    //#[ state CheckingSystemState.(Entry) 
                    runSystemTest();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State On
        case On:
        {
            if(IS_EVENT_TYPE_OF(reqPowerOff_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.On");
                    //#[ transition 1 
                    switchLightOff();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    rootState_subState = Off;
                    rootState_active = Off;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CheckingSystemState
        case CheckingSystemState:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 4 
                    if(systemOK)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_TRANSITION_STARTED("4");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.CheckingSystemState");
                            //#[ transition 4 
                            switchLightOn();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On");
                            rootState_subState = On;
                            rootState_active = On;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_TRANSITION_STARTED("5");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.CheckingSystemState");
                            //#[ transition 5 
                            indicateSystemFault();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.SystemFault");
                            rootState_subState = SystemFault;
                            rootState_active = SystemFault;
                            NOTIFY_TRANSITION_TERMINATED("5");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State SystemFault
        case SystemFault:
        {
            if(IS_EVENT_TYPE_OF(eventFaultCleared_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.SystemFault");
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    rootState_subState = Off;
                    rootState_active = Off;
                    NOTIFY_TRANSITION_TERMINATED("6");
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
void OMAnimatedPowerSourceCar::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("systemOK", x2String(myReal->systemOK));
}

void OMAnimatedPowerSourceCar::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PowerSourceCar::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case PowerSourceCar::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        case PowerSourceCar::CheckingSystemState:
        {
            CheckingSystemState_serializeStates(aomsState);
        }
        break;
        case PowerSourceCar::SystemFault:
        {
            SystemFault_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPowerSourceCar::SystemFault_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SystemFault");
}

void OMAnimatedPowerSourceCar::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}

void OMAnimatedPowerSourceCar::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}

void OMAnimatedPowerSourceCar::CheckingSystemState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CheckingSystemState");
}
//#]

IMPLEMENT_REACTIVE_META_P(PowerSourceCar, Architecture, Architecture, false, OMAnimatedPowerSourceCar)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PowerSourceCar.cpp
*********************************************************************/
