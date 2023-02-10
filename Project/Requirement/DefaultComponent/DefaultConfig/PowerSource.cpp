/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowerSource
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\PowerSource.cpp
*********************************************************************/

//## auto_generated
#include "PowerSource.h"
//## link itsTPMS
#include "TPMS.h"
//## package Default

//## class PowerSource
PowerSource::PowerSource(void) : itsTPMS(NULL) {
}

PowerSource::~PowerSource(void) {
    cleanUpRelations();
}

const TPMS* PowerSource::getItsTPMS(void) const {
    return itsTPMS;
}

void PowerSource::setItsTPMS(TPMS* const p_TPMS) {
    if(p_TPMS != NULL)
        {
            p_TPMS->_setItsPowerSource(this);
        }
    _setItsTPMS(p_TPMS);
}

void PowerSource::cleanUpRelations(void) {
    if(itsTPMS != NULL)
        {
            const PowerSource* p_PowerSource = itsTPMS->getItsPowerSource();
            if(p_PowerSource != NULL)
                {
                    itsTPMS->__setItsPowerSource(NULL);
                }
            itsTPMS = NULL;
        }
}

void PowerSource::__setItsTPMS(TPMS* const p_TPMS) {
    itsTPMS = p_TPMS;
}

void PowerSource::_setItsTPMS(TPMS* const p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->__setItsPowerSource(NULL);
        }
    __setItsTPMS(p_TPMS);
}

void PowerSource::_clearItsTPMS(void) {
    itsTPMS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PowerSource.cpp
*********************************************************************/
