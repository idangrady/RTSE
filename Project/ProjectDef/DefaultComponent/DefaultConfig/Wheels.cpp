/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Wheels
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Wheels.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Wheels.h"
//## link itsCar
#include "Car.h"
//#[ ignore
#define Architecture_Wheels_Wheels_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Wheels
Wheels::Wheels(void) : itsCar(NULL) {
    NOTIFY_CONSTRUCTOR(Wheels, Wheels(), 0, Architecture_Wheels_Wheels_SERIALIZE);
}

Wheels::~Wheels(void) {
    NOTIFY_DESTRUCTOR(~Wheels, true);
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
            NOTIFY_RELATION_CLEARED("itsCar");
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
    if(p_Car != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCar", p_Car, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCar");
        }
}

void Wheels::_setItsCar(Car* p_Car) {
    if(itsCar != NULL)
        {
            itsCar->_removeItsWheels(this);
        }
    __setItsCar(p_Car);
}

void Wheels::_clearItsCar(void) {
    NOTIFY_RELATION_CLEARED("itsCar");
    itsCar = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedWheels::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCar", false, true);
    if(myReal->itsCar)
        {
            aomsRelations->ADD_ITEM(myReal->itsCar);
        }
}
//#]

IMPLEMENT_META_P(Wheels, Architecture, Architecture, false, OMAnimatedWheels)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Wheels.cpp
*********************************************************************/
