/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Driver
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/

//## auto_generated
#include "Driver.h"
//## link itsTPMS
#include "TPMS.h"
//## package Default

//## actor Driver
Driver::Driver(void) : itsTPMS(NULL) {
}

Driver::~Driver(void) {
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
}

void Driver::_setItsTPMS(TPMS* const p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->__setItsDriver(NULL);
        }
    __setItsTPMS(p_TPMS);
}

void Driver::_clearItsTPMS(void) {
    itsTPMS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/
