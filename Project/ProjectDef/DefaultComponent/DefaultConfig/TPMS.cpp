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
//## link itsCar
#include "Car.h"
//## link itsDashboard
#include "Dashboard.h"
//## link itsEnvironment
#include "Environment.h"
//## link itsPowerSource
#include "PowerSource.h"
//## link itsSensorActor
#include "SensorActor.h"
//#[ ignore
#define Architecture_TPMS_turnWheelLed_SERIALIZE \
    aomsmethod->addAttribute("value", x2String(value));\
    aomsmethod->addAttribute("ledId", x2String(ledId));
#define Architecture_TPMS_TPMS_SERIALIZE OM_NO_OP

#define OMAnim_Architecture_TPMS_setPressureWheel1_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pressureWheel1)

#define OMAnim_Architecture_TPMS_setPressureWheel1_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setPressureWheel2_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pressureWheel2)

#define OMAnim_Architecture_TPMS_setPressureWheel2_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setPressureWheel3_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pressureWheel3)

#define OMAnim_Architecture_TPMS_setPressureWheel3_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setPressureWheel4_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pressureWheel4)

#define OMAnim_Architecture_TPMS_setPressureWheel4_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setPressureWheel5_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pressureWheel5)

#define OMAnim_Architecture_TPMS_setPressureWheel5_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setTempWheel1_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_tempWheel1)

#define OMAnim_Architecture_TPMS_setTempWheel1_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setTempWheel2_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_tempWheel2)

#define OMAnim_Architecture_TPMS_setTempWheel2_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setTempWheel3_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_tempWheel3)

#define OMAnim_Architecture_TPMS_setTempWheel3_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setTempWheel4_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_tempWheel4)

#define OMAnim_Architecture_TPMS_setTempWheel4_int_SERIALIZE_RET_VAL

#define OMAnim_Architecture_TPMS_setTempWheel5_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_tempWheel5)

#define OMAnim_Architecture_TPMS_setTempWheel5_int_SERIALIZE_RET_VAL
//#]

//## package Architecture

//## class TPMS
TPMS::TPMS(void) : OMThread(), OMReactive(), pressureHighThreshold(80), pressureLowThreshold(50), pressureWheel1(0), pressureWheel2(0), pressureWheel3(0), pressureWheel4(0), pressureWheel5(0), systemOK(false), tempHighThreshold(50), tempLowThreshold(10), tempWheel1(0), tempWheel2(0), tempWheel3(0), tempWheel4(0), tempWheel5(0), wheel1Led(false), wheel2Led(false), wheel3Led(false), wheel4Led(false), wheel5Led(false), itsCar(NULL), itsDashboard(NULL), itsEnvironment(NULL), itsPowerSource(NULL), itsSensorActor(NULL) {
    NOTIFY_ACTIVE_CONSTRUCTOR(TPMS, TPMS(), 0, Architecture_TPMS_TPMS_SERIALIZE);
    setActiveContext(this, true);
    initStatechart();
}

TPMS::~TPMS(void) {
    NOTIFY_DESTRUCTOR(~TPMS, true);
    cleanUpRelations();
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
    else if(ledId == 3)
    {
    wheel3Led = value;
    }
    else if(ledId == 4)
    {
    wheel4Led = value;
    }
    else if(ledId == 5)
    {
    wheel5Led = value;
    }
    std::cout<<"Led " <<ledId <<" = "<<value<<std::endl;
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

const int TPMS::getPressureWheel3(void) const {
    return pressureWheel3;
}

void TPMS::setPressureWheel3(const int p_pressureWheel3) {
    pressureWheel3 = p_pressureWheel3;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getPressureWheel4(void) const {
    return pressureWheel4;
}

void TPMS::setPressureWheel4(const int p_pressureWheel4) {
    pressureWheel4 = p_pressureWheel4;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getPressureWheel5(void) const {
    return pressureWheel5;
}

void TPMS::setPressureWheel5(const int p_pressureWheel5) {
    pressureWheel5 = p_pressureWheel5;
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

const int TPMS::getTempWheel3(void) const {
    return tempWheel3;
}

void TPMS::setTempWheel3(const int p_tempWheel3) {
    tempWheel3 = p_tempWheel3;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getTempWheel4(void) const {
    return tempWheel4;
}

void TPMS::setTempWheel4(const int p_tempWheel4) {
    tempWheel4 = p_tempWheel4;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getTempWheel5(void) const {
    return tempWheel5;
}

void TPMS::setTempWheel5(const int p_tempWheel5) {
    tempWheel5 = p_tempWheel5;
    NOTIFY_SET_OPERATION;
}

const bool TPMS::getWheel1Led(void) const {
    return wheel1Led;
}

void TPMS::setWheel1Led(const bool p_wheel1Led) {
    wheel1Led = p_wheel1Led;
    NOTIFY_SET_OPERATION;
}

const bool TPMS::getWheel2Led(void) const {
    return wheel2Led;
}

void TPMS::setWheel2Led(const bool p_wheel2Led) {
    wheel2Led = p_wheel2Led;
    NOTIFY_SET_OPERATION;
}

const bool TPMS::getWheel3Led(void) const {
    return wheel3Led;
}

void TPMS::setWheel3Led(const bool p_wheel3Led) {
    wheel3Led = p_wheel3Led;
    NOTIFY_SET_OPERATION;
}

const bool TPMS::getWheel4Led(void) const {
    return wheel4Led;
}

void TPMS::setWheel4Led(const bool p_wheel4Led) {
    wheel4Led = p_wheel4Led;
    NOTIFY_SET_OPERATION;
}

const bool TPMS::getWheel5Led(void) const {
    return wheel5Led;
}

void TPMS::setWheel5Led(const bool p_wheel5Led) {
    wheel5Led = p_wheel5Led;
    NOTIFY_SET_OPERATION;
}

const Car* TPMS::getItsCar(void) const {
    return itsCar;
}

void TPMS::setItsCar(Car* const p_Car) {
    if(p_Car != NULL)
        {
            p_Car->_setItsTPMS(this);
        }
    _setItsCar(p_Car);
}

const Dashboard* TPMS::getItsDashboard(void) const {
    return itsDashboard;
}

void TPMS::setItsDashboard(Dashboard* const p_Dashboard) {
    if(p_Dashboard != NULL)
        {
            p_Dashboard->_setItsTPMS(this);
        }
    _setItsDashboard(p_Dashboard);
}

const Environment* TPMS::getItsEnvironment(void) const {
    return itsEnvironment;
}

void TPMS::setItsEnvironment(Environment* const p_Environment) {
    if(p_Environment != NULL)
        {
            p_Environment->_setItsTPMS(this);
        }
    _setItsEnvironment(p_Environment);
}

const PowerSource* TPMS::getItsPowerSource(void) const {
    return itsPowerSource;
}

void TPMS::setItsPowerSource(PowerSource* const p_PowerSource) {
    if(p_PowerSource != NULL)
        {
            p_PowerSource->_setItsTPMS(this);
        }
    _setItsPowerSource(p_PowerSource);
}

const SensorActor* TPMS::getItsSensorActor(void) const {
    return itsSensorActor;
}

void TPMS::setItsSensorActor(SensorActor* const p_SensorActor) {
    if(p_SensorActor != NULL)
        {
            p_SensorActor->_setItsTPMS(this);
        }
    _setItsSensorActor(p_SensorActor);
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

void TPMS::cleanUpRelations(void) {
    if(itsCar != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCar");
            const TPMS* p_TPMS = itsCar->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsCar->__setItsTPMS(NULL);
                }
            itsCar = NULL;
        }
    if(itsDashboard != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDashboard");
            const TPMS* p_TPMS = itsDashboard->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsDashboard->__setItsTPMS(NULL);
                }
            itsDashboard = NULL;
        }
    if(itsEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
            const TPMS* p_TPMS = itsEnvironment->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsEnvironment->__setItsTPMS(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsPowerSource != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPowerSource");
            const TPMS* p_TPMS = itsPowerSource->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsPowerSource->__setItsTPMS(NULL);
                }
            itsPowerSource = NULL;
        }
    if(itsSensorActor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensorActor");
            const TPMS* p_TPMS = itsSensorActor->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsSensorActor->__setItsTPMS(NULL);
                }
            itsSensorActor = NULL;
        }
}

void TPMS::__setItsCar(Car* const p_Car) {
    itsCar = p_Car;
    if(p_Car != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCar", p_Car, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCar");
        }
}

void TPMS::_setItsCar(Car* const p_Car) {
    if(itsCar != NULL)
        {
            itsCar->__setItsTPMS(NULL);
        }
    __setItsCar(p_Car);
}

void TPMS::_clearItsCar(void) {
    NOTIFY_RELATION_CLEARED("itsCar");
    itsCar = NULL;
}

void TPMS::__setItsDashboard(Dashboard* const p_Dashboard) {
    itsDashboard = p_Dashboard;
    if(p_Dashboard != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDashboard", p_Dashboard, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDashboard");
        }
}

void TPMS::_setItsDashboard(Dashboard* const p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->__setItsTPMS(NULL);
        }
    __setItsDashboard(p_Dashboard);
}

void TPMS::_clearItsDashboard(void) {
    NOTIFY_RELATION_CLEARED("itsDashboard");
    itsDashboard = NULL;
}

void TPMS::__setItsEnvironment(Environment* const p_Environment) {
    itsEnvironment = p_Environment;
    if(p_Environment != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnvironment", p_Environment, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnvironment");
        }
}

void TPMS::_setItsEnvironment(Environment* const p_Environment) {
    if(itsEnvironment != NULL)
        {
            itsEnvironment->__setItsTPMS(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void TPMS::_clearItsEnvironment(void) {
    NOTIFY_RELATION_CLEARED("itsEnvironment");
    itsEnvironment = NULL;
}

void TPMS::__setItsPowerSource(PowerSource* const p_PowerSource) {
    itsPowerSource = p_PowerSource;
    if(p_PowerSource != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPowerSource", p_PowerSource, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPowerSource");
        }
}

void TPMS::_setItsPowerSource(PowerSource* const p_PowerSource) {
    if(itsPowerSource != NULL)
        {
            itsPowerSource->__setItsTPMS(NULL);
        }
    __setItsPowerSource(p_PowerSource);
}

void TPMS::_clearItsPowerSource(void) {
    NOTIFY_RELATION_CLEARED("itsPowerSource");
    itsPowerSource = NULL;
}

void TPMS::__setItsSensorActor(SensorActor* const p_SensorActor) {
    itsSensorActor = p_SensorActor;
    if(p_SensorActor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensorActor", p_SensorActor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensorActor");
        }
}

void TPMS::_setItsSensorActor(SensorActor* const p_SensorActor) {
    if(itsSensorActor != NULL)
        {
            itsSensorActor->__setItsTPMS(NULL);
        }
    __setItsSensorActor(p_SensorActor);
}

void TPMS::_clearItsSensorActor(void) {
    NOTIFY_RELATION_CLEARED("itsSensorActor");
    itsSensorActor = NULL;
}

IOxfReactive::TakeEventStatus TPMS::SignalSense_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(onWheel5LedChange_Architecture_id) == 1)
        {
            //## transition 24 
            if((tempWheel5 < tempLowThreshold) || (tempWheel5 > tempHighThreshold) ||  (pressureWheel5 < pressureLowThreshold) || (pressureWheel5 > pressureHighThreshold))
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_TRANSITION_STARTED("24");
                    NOTIFY_STATE_EXITED("ROOT.SignalSense");
                    //#[ transition 24 
                    turnWheelLed(true,5);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TurnOnLed5");
                    pushNullTransition();
                    rootState_subState = TurnOnLed5;
                    rootState_active = TurnOnLed5;
                    NOTIFY_TRANSITION_TERMINATED("24");
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_TRANSITION_STARTED("25");
                    NOTIFY_STATE_EXITED("ROOT.SignalSense");
                    //#[ transition 25 
                    turnWheelLed(false,5);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.TurnOffLed5");
                    pushNullTransition();
                    rootState_subState = TurnOffLed5;
                    rootState_active = TurnOffLed5;
                    NOTIFY_TRANSITION_TERMINATED("25");
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
        }
    else {
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
            if(IS_EVENT_TYPE_OF(onWheel3LedChange_Architecture_id) == 1)
                {
                    //## transition 16 
                    if((tempWheel3 < tempLowThreshold) || (tempWheel3 > tempHighThreshold) ||  (pressureWheel3 < pressureLowThreshold) || (pressureWheel3 > pressureHighThreshold))
                        {
                            NOTIFY_TRANSITION_STARTED("13");
                            NOTIFY_TRANSITION_STARTED("16");
                            NOTIFY_STATE_EXITED("ROOT.SignalSense");
                            //#[ transition 16 
                            turnWheelLed(true,3);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.TurnOnLed3");
                            pushNullTransition();
                            rootState_subState = TurnOnLed3;
                            rootState_active = TurnOnLed3;
                            NOTIFY_TRANSITION_TERMINATED("16");
                            NOTIFY_TRANSITION_TERMINATED("13");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("13");
                            NOTIFY_TRANSITION_STARTED("17");
                            NOTIFY_STATE_EXITED("ROOT.SignalSense");
                            //#[ transition 17 
                            turnWheelLed(false,3);
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.TurnOffLed3");
                            pushNullTransition();
                            rootState_subState = TurnOffLed3;
                            rootState_active = TurnOffLed3;
                            NOTIFY_TRANSITION_TERMINATED("17");
                            NOTIFY_TRANSITION_TERMINATED("13");
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
                        wheel3Led=false;
                        wheel4Led=false;
                        wheel5Led=false;
                        pressureWheel1=0;
                        pressureWheel2=0;
                        pressureWheel3=0;
                        pressureWheel4=0;
                        pressureWheel5=0;
                        tempWheel1=0;
                        tempWheel2=0;
                        tempWheel3=0;
                        tempWheel4=0;
                        tempWheel5=0;
                        //#]
                        NOTIFY_STATE_ENTERED("ROOT.Off");
                        rootState_subState = Off;
                        rootState_active = Off;
                        NOTIFY_TRANSITION_TERMINATED("7");
                        res = eventConsumed;
                    }
                else {
                    if(IS_EVENT_TYPE_OF(onWheel4LedChange_Architecture_id) == 1)
                        {
                            //## transition 20 
                            if((tempWheel4 < tempLowThreshold) || (tempWheel4 > tempHighThreshold) ||  (pressureWheel4 < pressureLowThreshold) || (pressureWheel4 > pressureHighThreshold))
                                {
                                    NOTIFY_TRANSITION_STARTED("14");
                                    NOTIFY_TRANSITION_STARTED("20");
                                    NOTIFY_STATE_EXITED("ROOT.SignalSense");
                                    //#[ transition 20 
                                    turnWheelLed(true,4);
                                    //#]
                                    NOTIFY_STATE_ENTERED("ROOT.TurnOnLed4");
                                    pushNullTransition();
                                    rootState_subState = TurnOnLed4;
                                    rootState_active = TurnOnLed4;
                                    NOTIFY_TRANSITION_TERMINATED("20");
                                    NOTIFY_TRANSITION_TERMINATED("14");
                                    res = eventConsumed;
                                }
                            else
                                {
                                    NOTIFY_TRANSITION_STARTED("14");
                                    NOTIFY_TRANSITION_STARTED("21");
                                    NOTIFY_STATE_EXITED("ROOT.SignalSense");
                                    //#[ transition 21 
                                    turnWheelLed(false,4);
                                    //#]
                                    NOTIFY_STATE_ENTERED("ROOT.TurnOffLed4");
                                    pushNullTransition();
                                    rootState_subState = TurnOffLed4;
                                    rootState_active = TurnOffLed4;
                                    NOTIFY_TRANSITION_TERMINATED("21");
                                    NOTIFY_TRANSITION_TERMINATED("14");
                                    res = eventConsumed;
                                }
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
                    tempWheel1 = tempWheel2 = tempWheel3 = tempWheel4 = tempWheel5 = 20;
                    pressureWheel1 = pressureWheel2 = pressureWheel3 = pressureWheel4 = pressureWheel5 = 75;
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
        // State TurnOffLed5
        case TurnOffLed5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("27");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TurnOffLed5");
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("27");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TurnOnLed5
        case TurnOnLed5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TurnOnLed5");
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("26");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TurnOffLed4
        case TurnOffLed4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TurnOffLed4");
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TurnOnLed4
        case TurnOnLed4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("22");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TurnOnLed4");
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("22");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TurnOffLed3
        case TurnOffLed3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TurnOffLed3");
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
            
        }
        break;
        // State TurnOnLed3
        case TurnOnLed3:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.TurnOnLed3");
                    NOTIFY_STATE_ENTERED("ROOT.SignalSense");
                    rootState_subState = SignalSense;
                    rootState_active = SignalSense;
                    NOTIFY_TRANSITION_TERMINATED("18");
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
    aomsAttributes->addAttribute("wheel3Led", x2String(myReal->wheel3Led));
    aomsAttributes->addAttribute("wheel4Led", x2String(myReal->wheel4Led));
    aomsAttributes->addAttribute("wheel5Led", x2String(myReal->wheel5Led));
    aomsAttributes->addAttribute("tempWheel3", x2String(myReal->tempWheel3));
    aomsAttributes->addAttribute("tempWheel4", x2String(myReal->tempWheel4));
    aomsAttributes->addAttribute("tempWheel5", x2String(myReal->tempWheel5));
    aomsAttributes->addAttribute("pressureWheel3", x2String(myReal->pressureWheel3));
    aomsAttributes->addAttribute("pressureWheel4", x2String(myReal->pressureWheel4));
    aomsAttributes->addAttribute("pressureWheel5", x2String(myReal->pressureWheel5));
}

void OMAnimatedTPMS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDashboard", false, true);
    if(myReal->itsDashboard)
        {
            aomsRelations->ADD_ITEM(myReal->itsDashboard);
        }
    aomsRelations->addRelation("itsCar", false, true);
    if(myReal->itsCar)
        {
            aomsRelations->ADD_ITEM(myReal->itsCar);
        }
    aomsRelations->addRelation("itsPowerSource", false, true);
    if(myReal->itsPowerSource)
        {
            aomsRelations->ADD_ITEM(myReal->itsPowerSource);
        }
    aomsRelations->addRelation("itsEnvironment", false, true);
    if(myReal->itsEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironment);
        }
    aomsRelations->addRelation("itsSensorActor", false, true);
    if(myReal->itsSensorActor)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensorActor);
        }
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
        case TPMS::TurnOffLed5:
        {
            TurnOffLed5_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOnLed5:
        {
            TurnOnLed5_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOffLed4:
        {
            TurnOffLed4_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOnLed4:
        {
            TurnOnLed4_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOffLed3:
        {
            TurnOffLed3_serializeStates(aomsState);
        }
        break;
        case TPMS::TurnOnLed3:
        {
            TurnOnLed3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTPMS::TurnOnLed5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOnLed5");
}

void OMAnimatedTPMS::TurnOnLed4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOnLed4");
}

void OMAnimatedTPMS::TurnOnLed3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOnLed3");
}

void OMAnimatedTPMS::TurnOnLed2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOnLed2");
}

void OMAnimatedTPMS::TurnOnLed1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOnLed1");
}

void OMAnimatedTPMS::TurnOffLed5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOffLed5");
}

void OMAnimatedTPMS::TurnOffLed4_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOffLed4");
}

void OMAnimatedTPMS::TurnOffLed3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.TurnOffLed3");
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

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setPressureWheel3_int, "setPressureWheel3", FALSE, "setPressureWheel3(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setPressureWheel3_int, TPMS, setPressureWheel3(p_pressureWheel3), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setPressureWheel4_int, "setPressureWheel4", FALSE, "setPressureWheel4(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setPressureWheel4_int, TPMS, setPressureWheel4(p_pressureWheel4), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setPressureWheel5_int, "setPressureWheel5", FALSE, "setPressureWheel5(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setPressureWheel5_int, TPMS, setPressureWheel5(p_pressureWheel5), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setTempWheel1_int, "setTempWheel1", FALSE, "setTempWheel1(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setTempWheel1_int, TPMS, setTempWheel1(p_tempWheel1), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setTempWheel2_int, "setTempWheel2", FALSE, "setTempWheel2(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setTempWheel2_int, TPMS, setTempWheel2(p_tempWheel2), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setTempWheel3_int, "setTempWheel3", FALSE, "setTempWheel3(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setTempWheel3_int, TPMS, setTempWheel3(p_tempWheel3), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setTempWheel4_int, "setTempWheel4", FALSE, "setTempWheel4(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setTempWheel4_int, TPMS, setTempWheel4(p_tempWheel4), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Architecture_TPMS_setTempWheel5_int, "setTempWheel5", FALSE, "setTempWheel5(int)", 1)

IMPLEMENT_OP_CALL(Architecture_TPMS_setTempWheel5_int, TPMS, setTempWheel5(p_tempWheel5), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TPMS.cpp
*********************************************************************/
