/********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Driver
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Driver.h"
//## link itsTPMS
#include "TPMS.h"
//#[ ignore
#define Architecture_Driver_Driver_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## actor Driver
Driver::Driver(void) : itsTPMS(NULL) {
    NOTIFY_CONSTRUCTOR(Driver, Driver(), 0, Architecture_Driver_Driver_SERIALIZE);
}

Driver::~Driver(void) {
    NOTIFY_DESTRUCTOR(~Driver, true);
    cleanUpRelations();
}

const TPMS* Driver::getItsTPMS(void) const {
    return itsTPMS;
}

void Driver::setItsTPMS(TPMS* const p_TPMS) {
    if(p_TPMS != NULL)
        {
            p_TPMS->_setItsDriver(this);
        }
    _setItsTPMS(p_TPMS);
}

void Driver::cleanUpRelations(void) {
    if(itsTPMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTPMS");
            const Driver* p_Driver = itsTPMS->getItsDriver();
            if(p_Driver != NULL)
                {
                    itsTPMS->__setItsDriver(NULL);
                }
            itsTPMS = NULL;
        }
}

void Driver::__setItsTPMS(TPMS* const p_TPMS) {
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

void Driver::_setItsTPMS(TPMS* const p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->__setItsDriver(NULL);
        }
    __setItsTPMS(p_TPMS);
}

void Driver::_clearItsTPMS(void) {
    NOTIFY_RELATION_CLEARED("itsTPMS");
    itsTPMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDriver::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTPMS", false, true);
    if(myReal->itsTPMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTPMS);
        }
}
//#]

IMPLEMENT_META_P(Driver, Architecture, Architecture, false, OMAnimatedDriver)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/
