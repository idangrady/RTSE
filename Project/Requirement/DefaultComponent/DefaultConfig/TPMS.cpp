/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TPMS
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\TPMS.cpp
*********************************************************************/

//## auto_generated
#include <omthread.h>
//## auto_generated
#include "TPMS.h"
//## link itsCar
#include "Car.h"
//## link itsDashboard
#include "Dashboard.h"
//## link itsDriver
#include "Driver.h"
//## link itsEnvironment
#include "Environment.h"
//## link itsPowerSource
#include "PowerSource.h"
//## link itsSensorActor
#include "SensorActor.h"
//## package Default

//## class TPMS
TPMS::TPMS(IOxfActive* const theActiveContext) : OMReactive(), displayPressureLed1(0), displayPressureLed2(0), displayPressureLed3(0), displayPressureLed4(0), displayPressureLed5(0), displayTempLed1(0), displayTempLed2(0), displayTempLed3(0), displayTempLed4(0), displayTempLed5(0), turnOnLed1(false), turnOnLed2(false), turnOnLed3(false), turnOnLed4(false), turnOnLed5(false), itsCar(NULL), itsDashboard(NULL), itsDriver(NULL), itsEnvironment(NULL), itsPowerSource(NULL) {
    setActiveContext(theActiveContext, false);
    {
        for (int pos = 0; pos < 5; ++pos) {
        	itsSensorActor[pos] = NULL;
        }
    }
    initStatechart();
}

TPMS::~TPMS(void) {
    cleanUpRelations();
}

void TPMS::SwitchOffLed(int ledId) {
    //#[ operation SwitchOffLed(int)
    //#]
}

void TPMS::SwitchOnLed(int ledId) {
    //#[ operation SwitchOnLed(int)
    //#]
}

void TPMS::ToggleCarEngine(void) {
    //#[ operation ToggleCarEngine()
    //#]
}

const int TPMS::getDisplayPressureLed1(void) const {
    return displayPressureLed1;
}

void TPMS::setDisplayPressureLed1(const int p_displayPressureLed1) {
    displayPressureLed1 = p_displayPressureLed1;
}

const int TPMS::getDisplayPressureLed2(void) const {
    return displayPressureLed2;
}

void TPMS::setDisplayPressureLed2(const int p_displayPressureLed2) {
    displayPressureLed2 = p_displayPressureLed2;
}

const int TPMS::getDisplayPressureLed3(void) const {
    return displayPressureLed3;
}

void TPMS::setDisplayPressureLed3(const int p_displayPressureLed3) {
    displayPressureLed3 = p_displayPressureLed3;
}

const int TPMS::getDisplayPressureLed4(void) const {
    return displayPressureLed4;
}

void TPMS::setDisplayPressureLed4(const int p_displayPressureLed4) {
    displayPressureLed4 = p_displayPressureLed4;
}

const int TPMS::getDisplayPressureLed5(void) const {
    return displayPressureLed5;
}

void TPMS::setDisplayPressureLed5(const int p_displayPressureLed5) {
    displayPressureLed5 = p_displayPressureLed5;
}

const int TPMS::getDisplayTempLed1(void) const {
    return displayTempLed1;
}

void TPMS::setDisplayTempLed1(const int p_displayTempLed1) {
    displayTempLed1 = p_displayTempLed1;
}

const int TPMS::getDisplayTempLed2(void) const {
    return displayTempLed2;
}

void TPMS::setDisplayTempLed2(const int p_displayTempLed2) {
    displayTempLed2 = p_displayTempLed2;
}

const int TPMS::getDisplayTempLed3(void) const {
    return displayTempLed3;
}

void TPMS::setDisplayTempLed3(const int p_displayTempLed3) {
    displayTempLed3 = p_displayTempLed3;
}

const int TPMS::getDisplayTempLed4(void) const {
    return displayTempLed4;
}

void TPMS::setDisplayTempLed4(const int p_displayTempLed4) {
    displayTempLed4 = p_displayTempLed4;
}

const int TPMS::getDisplayTempLed5(void) const {
    return displayTempLed5;
}

void TPMS::setDisplayTempLed5(const int p_displayTempLed5) {
    displayTempLed5 = p_displayTempLed5;
}

const bool TPMS::getTurnOnLed1(void) const {
    return turnOnLed1;
}

void TPMS::setTurnOnLed1(const bool p_turnOnLed1) {
    turnOnLed1 = p_turnOnLed1;
}

const bool TPMS::getTurnOnLed2(void) const {
    return turnOnLed2;
}

void TPMS::setTurnOnLed2(const bool p_turnOnLed2) {
    turnOnLed2 = p_turnOnLed2;
}

const bool TPMS::getTurnOnLed3(void) const {
    return turnOnLed3;
}

void TPMS::setTurnOnLed3(const bool p_turnOnLed3) {
    turnOnLed3 = p_turnOnLed3;
}

const bool TPMS::getTurnOnLed4(void) const {
    return turnOnLed4;
}

void TPMS::setTurnOnLed4(const bool p_turnOnLed4) {
    turnOnLed4 = p_turnOnLed4;
}

const bool TPMS::getTurnOnLed5(void) const {
    return turnOnLed5;
}

void TPMS::setTurnOnLed5(const bool p_turnOnLed5) {
    turnOnLed5 = p_turnOnLed5;
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

const Driver* TPMS::getItsDriver(void) const {
    return itsDriver;
}

void TPMS::setItsDriver(Driver* const p_Driver) {
    if(p_Driver != NULL)
        {
            p_Driver->_setItsTPMS(this);
        }
    _setItsDriver(p_Driver);
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

Rhp_int32_t TPMS::getItsSensorActor(void) const {
    Rhp_int32_t iter = 0;
    return iter;
}

void TPMS::addItsSensorActor(SensorActor* const p_SensorActor) {
    if(p_SensorActor != NULL)
        {
            p_SensorActor->_setItsTPMS(this);
        }
    _addItsSensorActor(p_SensorActor);
}

void TPMS::removeItsSensorActor(SensorActor* p_SensorActor) {
    if(p_SensorActor != NULL)
        {
            p_SensorActor->__setItsTPMS(NULL);
        }
    _removeItsSensorActor(p_SensorActor);
}

void TPMS::clearItsSensorActor(void) {
    Rhp_int32_t iter = 0;
    while ((iter < 5) && itsSensorActor[iter]){
        (itsSensorActor[iter])->_clearItsTPMS();
        iter++;
    }
    _clearItsSensorActor();
}

bool TPMS::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TPMS::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void TPMS::cleanUpRelations(void) {
    if(itsCar != NULL)
        {
            const TPMS* p_TPMS = itsCar->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsCar->__setItsTPMS(NULL);
                }
            itsCar = NULL;
        }
    if(itsDashboard != NULL)
        {
            const TPMS* p_TPMS = itsDashboard->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsDashboard->__setItsTPMS(NULL);
                }
            itsDashboard = NULL;
        }
    if(itsDriver != NULL)
        {
            const TPMS* p_TPMS = itsDriver->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsDriver->__setItsTPMS(NULL);
                }
            itsDriver = NULL;
        }
    if(itsEnvironment != NULL)
        {
            const TPMS* p_TPMS = itsEnvironment->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsEnvironment->__setItsTPMS(NULL);
                }
            itsEnvironment = NULL;
        }
    if(itsPowerSource != NULL)
        {
            const TPMS* p_TPMS = itsPowerSource->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsPowerSource->__setItsTPMS(NULL);
                }
            itsPowerSource = NULL;
        }
    {
        Rhp_int32_t iter = 0;
        while ((iter < 5) && itsSensorActor[iter]){
            const TPMS* p_TPMS = (itsSensorActor[iter])->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    (itsSensorActor[iter])->__setItsTPMS(NULL);
                }
            iter++;
        }
    }
}

void TPMS::__setItsCar(Car* const p_Car) {
    itsCar = p_Car;
}

void TPMS::_setItsCar(Car* const p_Car) {
    if(itsCar != NULL)
        {
            itsCar->__setItsTPMS(NULL);
        }
    __setItsCar(p_Car);
}

void TPMS::_clearItsCar(void) {
    itsCar = NULL;
}

void TPMS::__setItsDashboard(Dashboard* const p_Dashboard) {
    itsDashboard = p_Dashboard;
}

void TPMS::_setItsDashboard(Dashboard* const p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->__setItsTPMS(NULL);
        }
    __setItsDashboard(p_Dashboard);
}

void TPMS::_clearItsDashboard(void) {
    itsDashboard = NULL;
}

void TPMS::__setItsDriver(Driver* const p_Driver) {
    itsDriver = p_Driver;
}

void TPMS::_setItsDriver(Driver* const p_Driver) {
    if(itsDriver != NULL)
        {
            itsDriver->__setItsTPMS(NULL);
        }
    __setItsDriver(p_Driver);
}

void TPMS::_clearItsDriver(void) {
    itsDriver = NULL;
}

void TPMS::__setItsEnvironment(Environment* const p_Environment) {
    itsEnvironment = p_Environment;
}

void TPMS::_setItsEnvironment(Environment* const p_Environment) {
    if(itsEnvironment != NULL)
        {
            itsEnvironment->__setItsTPMS(NULL);
        }
    __setItsEnvironment(p_Environment);
}

void TPMS::_clearItsEnvironment(void) {
    itsEnvironment = NULL;
}

void TPMS::__setItsPowerSource(PowerSource* const p_PowerSource) {
    itsPowerSource = p_PowerSource;
}

void TPMS::_setItsPowerSource(PowerSource* const p_PowerSource) {
    if(itsPowerSource != NULL)
        {
            itsPowerSource->__setItsTPMS(NULL);
        }
    __setItsPowerSource(p_PowerSource);
}

void TPMS::_clearItsPowerSource(void) {
    itsPowerSource = NULL;
}

void TPMS::_addItsSensorActor(SensorActor* const p_SensorActor) {
    for (int pos = 0; pos < 5; ++pos) {
    	if (!itsSensorActor[pos]) {
    		itsSensorActor[pos] = p_SensorActor;
    		break;
    	}
    }
}

void TPMS::_removeItsSensorActor(SensorActor* const p_SensorActor) {
    for (int pos = 0; pos < 5; ++pos) {
    	if (itsSensorActor[pos] == p_SensorActor) {
    		itsSensorActor[pos] = NULL;
    	}
    }
}

void TPMS::_clearItsSensorActor(void) {
}

void TPMS::rootState_entDef(void) {
    {
        rootState_subState = Off;
        rootState_active = Off;
    }
}

IOxfReactive::TakeEventStatus TPMS::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(startCar_Default_id) == 1)
                {
                    pushNullTransition();
                    rootState_subState = accepteventaction_4;
                    rootState_active = accepteventaction_4;
                    res = eventConsumed;
                }
            
        }
        break;
        case accepteventaction_4:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    popNullTransition();
                    rootState_subState = On;
                    rootState_active = On;
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TPMS.cpp
*********************************************************************/
