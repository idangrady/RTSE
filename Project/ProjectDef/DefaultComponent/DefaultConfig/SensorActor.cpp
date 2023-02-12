/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorActor
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\SensorActor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorActor.h"
//## link itsTPMS
#include "TPMS.h"
//#[ ignore
#define Architecture_SensorActor_SensorActor_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## actor SensorActor
SensorActor::SensorActor(void) : itsTPMS(NULL) {
    NOTIFY_CONSTRUCTOR(SensorActor, SensorActor(), 0, Architecture_SensorActor_SensorActor_SERIALIZE);
}

SensorActor::~SensorActor(void) {
    NOTIFY_DESTRUCTOR(~SensorActor, true);
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
            NOTIFY_RELATION_CLEARED("itsTPMS");
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
    if(p_TPMS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTPMS", p_TPMS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTPMS");
        }
}

void SensorActor::_setItsTPMS(TPMS* p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->_removeItsSensorActor(this);
        }
    __setItsTPMS(p_TPMS);
}

void SensorActor::_clearItsTPMS(void) {
    NOTIFY_RELATION_CLEARED("itsTPMS");
    itsTPMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensorActor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTPMS", false, true);
    if(myReal->itsTPMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTPMS);
        }
}
//#]

IMPLEMENT_META_P(SensorActor, Architecture, Architecture, false, OMAnimatedSensorActor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorActor.cpp
*********************************************************************/
