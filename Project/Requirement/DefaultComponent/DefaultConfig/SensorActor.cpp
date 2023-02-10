/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorActor
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\SensorActor.cpp
*********************************************************************/

//## auto_generated
#include "SensorActor.h"
//## link itsTPMS
#include "TPMS.h"
//## package Default

//## actor SensorActor
SensorActor::SensorActor(void) : itsTPMS(NULL) {
}

SensorActor::~SensorActor(void) {
    cleanUpRelations();
}

const TPMS* SensorActor::getItsTPMS(void) const {
    return itsTPMS;
}

void SensorActor::setItsTPMS(TPMS* const p_TPMS) {
    if(p_TPMS != NULL)
        {
            p_TPMS->_addItsSensorActor(this);
        }
    _setItsTPMS(p_TPMS);
}

void SensorActor::cleanUpRelations(void) {
    if(itsTPMS != NULL)
        {
            TPMS* current = itsTPMS;
            if(current != NULL)
                {
                    current->_removeItsSensorActor(this);
                }
            itsTPMS = NULL;
        }
}

void SensorActor::__setItsTPMS(TPMS* const p_TPMS) {
    itsTPMS = p_TPMS;
}

void SensorActor::_setItsTPMS(TPMS* p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->_removeItsSensorActor(this);
        }
    __setItsTPMS(p_TPMS);
}

void SensorActor::_clearItsTPMS(void) {
    itsTPMS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorActor.cpp
*********************************************************************/
