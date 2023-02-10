/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/

//## auto_generated
#include "Car.h"
//## link itsTPMS
#include "TPMS.h"
//## link itsWheels
#include "Wheels.h"
//## package Default

//## class Car
Car::Car(void) : itsTPMS(NULL) {
    {
        for (int pos = 0; pos < 5; ++pos) {
        	itsWheels[pos] = NULL;
        }
    }
}

Car::~Car(void) {
    cleanUpRelations();
}

const TPMS* Car::getItsTPMS(void) const {
    return itsTPMS;
}

void Car::setItsTPMS(TPMS* const p_TPMS) {
    if(p_TPMS != NULL)
        {
            p_TPMS->_setItsCar(this);
        }
    _setItsTPMS(p_TPMS);
}

Rhp_int32_t Car::getItsWheels(void) const {
    Rhp_int32_t iter = 0;
    return iter;
}

void Car::addItsWheels(Wheels* const p_Wheels) {
    if(p_Wheels != NULL)
        {
            p_Wheels->_setItsCar(this);
        }
    _addItsWheels(p_Wheels);
}

void Car::removeItsWheels(Wheels* p_Wheels) {
    if(p_Wheels != NULL)
        {
            p_Wheels->__setItsCar(NULL);
        }
    _removeItsWheels(p_Wheels);
}

void Car::clearItsWheels(void) {
    Rhp_int32_t iter = 0;
    while ((iter < 5) && itsWheels[iter]){
        (itsWheels[iter])->_clearItsCar();
        iter++;
    }
    _clearItsWheels();
}

void Car::cleanUpRelations(void) {
    if(itsTPMS != NULL)
        {
            const Car* p_Car = itsTPMS->getItsCar();
            if(p_Car != NULL)
                {
                    itsTPMS->__setItsCar(NULL);
                }
            itsTPMS = NULL;
        }
    {
        Rhp_int32_t iter = 0;
        while ((iter < 5) && itsWheels[iter]){
            const Car* p_Car = (itsWheels[iter])->getItsCar();
            if(p_Car != NULL)
                {
                    (itsWheels[iter])->__setItsCar(NULL);
                }
            iter++;
        }
    }
}

void Car::__setItsTPMS(TPMS* const p_TPMS) {
    itsTPMS = p_TPMS;
}

void Car::_setItsTPMS(TPMS* const p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->__setItsCar(NULL);
        }
    __setItsTPMS(p_TPMS);
}

void Car::_clearItsTPMS(void) {
    itsTPMS = NULL;
}

void Car::_addItsWheels(Wheels* const p_Wheels) {
    for (int pos = 0; pos < 5; ++pos) {
    	if (!itsWheels[pos]) {
    		itsWheels[pos] = p_Wheels;
    		break;
    	}
    }
}

void Car::_removeItsWheels(Wheels* const p_Wheels) {
    for (int pos = 0; pos < 5; ++pos) {
    	if (itsWheels[pos] == p_Wheels) {
    		itsWheels[pos] = NULL;
    	}
    }
}

void Car::_clearItsWheels(void) {
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/
