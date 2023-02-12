/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Vehicle
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Vehicle.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Vehicle.h"
//## link itsTPMS
#include "TPMS.h"
//## link itsWheels
#include "Wheels.h"
//#[ ignore
#define Architecture_Vehicle_Vehicle_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Vehicle
Vehicle::Vehicle(void) : itsTPMS(NULL) {
    NOTIFY_CONSTRUCTOR(Vehicle, Vehicle(), 0, Architecture_Vehicle_Vehicle_SERIALIZE);
    {
        for (int pos = 0; pos < 5; ++pos) {
        	itsWheels[pos] = NULL;
        }
    }
}

Vehicle::~Vehicle(void) {
    NOTIFY_DESTRUCTOR(~Vehicle, true);
    cleanUpRelations();
}

const TPMS* Vehicle::getItsTPMS(void) const {
    return itsTPMS;
}

void Vehicle::setItsTPMS(TPMS* const p_TPMS) {
    if(p_TPMS != NULL)
        {
            p_TPMS->_setItsVehicle(this);
        }
    _setItsTPMS(p_TPMS);
}

Rhp_int32_t Vehicle::getItsWheels(void) const {
    Rhp_int32_t iter = 0;
    return iter;
}

void Vehicle::addItsWheels(Wheels* const p_Wheels) {
    if(p_Wheels != NULL)
        {
            p_Wheels->_setItsVehicle(this);
        }
    _addItsWheels(p_Wheels);
}

void Vehicle::removeItsWheels(Wheels* p_Wheels) {
    if(p_Wheels != NULL)
        {
            p_Wheels->__setItsVehicle(NULL);
        }
    _removeItsWheels(p_Wheels);
}

void Vehicle::clearItsWheels(void) {
    Rhp_int32_t iter = 0;
    while ((iter < 5) && itsWheels[iter]){
        (itsWheels[iter])->_clearItsVehicle();
        iter++;
    }
    _clearItsWheels();
}

void Vehicle::cleanUpRelations(void) {
    if(itsTPMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTPMS");
            const Vehicle* p_Vehicle = itsTPMS->getItsVehicle();
            if(p_Vehicle != NULL)
                {
                    itsTPMS->__setItsVehicle(NULL);
                }
            itsTPMS = NULL;
        }
    {
        Rhp_int32_t iter = 0;
        while ((iter < 5) && itsWheels[iter]){
            const Vehicle* p_Vehicle = (itsWheels[iter])->getItsVehicle();
            if(p_Vehicle != NULL)
                {
                    (itsWheels[iter])->__setItsVehicle(NULL);
                }
            iter++;
        }
    }
}

void Vehicle::__setItsTPMS(TPMS* const p_TPMS) {
    itsTPMS = p_TPMS;
    if(p_TPMS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTPMS", p_TPMS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTPMS");
        }
}

void Vehicle::_setItsTPMS(TPMS* const p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->__setItsVehicle(NULL);
        }
    __setItsTPMS(p_TPMS);
}

void Vehicle::_clearItsTPMS(void) {
    NOTIFY_RELATION_CLEARED("itsTPMS");
    itsTPMS = NULL;
}

void Vehicle::_addItsWheels(Wheels* const p_Wheels) {
    if(p_Wheels != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWheels", p_Wheels, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWheels");
        }
    for (int pos = 0; pos < 5; ++pos) {
    	if (!itsWheels[pos]) {
    		itsWheels[pos] = p_Wheels;
    		break;
    	}
    }
}

void Vehicle::_removeItsWheels(Wheels* const p_Wheels) {
    NOTIFY_RELATION_ITEM_REMOVED("itsWheels", p_Wheels);
    for (int pos = 0; pos < 5; ++pos) {
    	if (itsWheels[pos] == p_Wheels) {
    		itsWheels[pos] = NULL;
    	}
    }
}

void Vehicle::_clearItsWheels(void) {
    NOTIFY_RELATION_CLEARED("itsWheels");
    
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedVehicle::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTPMS", false, true);
    if(myReal->itsTPMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTPMS);
        }
    aomsRelations->addRelation("itsWheels", false, false);
    {
        Rhp_int32_t iter = 0;
        while ((iter < 5) && myReal->itsWheels[iter]){
            aomsRelations->ADD_ITEM(myReal->itsWheels[iter]);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(Vehicle, Architecture, Architecture, false, OMAnimatedVehicle)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Vehicle.cpp
*********************************************************************/
