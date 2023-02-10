/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Wheels
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Wheels.cpp
*********************************************************************/

//## auto_generated
#include "Wheels.h"
//## link itsCar
#include "Car.h"
//## package Default

//## class Wheels
Wheels::Wheels(void) : itsCar(NULL) {
}

Wheels::~Wheels(void) {
    cleanUpRelations();
}

const Car* Wheels::getItsCar(void) const {
    return itsCar;
}

void Wheels::setItsCar(Car* const p_Car) {
    if(p_Car != NULL)
        {
            p_Car->_addItsWheels(this);
        }
    _setItsCar(p_Car);
}

void Wheels::cleanUpRelations(void) {
    if(itsCar != NULL)
        {
            Car* current = itsCar;
            if(current != NULL)
                {
                    current->_removeItsWheels(this);
                }
            itsCar = NULL;
        }
}

void Wheels::__setItsCar(Car* const p_Car) {
    itsCar = p_Car;
}

void Wheels::_setItsCar(Car* p_Car) {
    if(itsCar != NULL)
        {
            itsCar->_removeItsWheels(this);
        }
    __setItsCar(p_Car);
}

void Wheels::_clearItsCar(void) {
    itsCar = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Wheels.cpp
*********************************************************************/
