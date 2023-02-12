/********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowerSource
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\PowerSource.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PowerSource.h"
//## link itsTPMS
#include "TPMS.h"
//#[ ignore
#define Architecture_PowerSource_PowerSource_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class PowerSource
PowerSource::PowerSource(void) : itsTPMS(NULL) {
    NOTIFY_CONSTRUCTOR(PowerSource, PowerSource(), 0, Architecture_PowerSource_PowerSource_SERIALIZE);
}

PowerSource::~PowerSource(void) {
    NOTIFY_DESTRUCTOR(~PowerSource, true);
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
            NOTIFY_RELATION_CLEARED("itsTPMS");
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
    if(p_TPMS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTPMS", p_TPMS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTPMS");
        }
}

void PowerSource::_setItsTPMS(TPMS* const p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->__setItsPowerSource(NULL);
        }
    __setItsTPMS(p_TPMS);
}

void PowerSource::_clearItsTPMS(void) {
    NOTIFY_RELATION_CLEARED("itsTPMS");
    itsTPMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPowerSource::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTPMS", false, true);
    if(myReal->itsTPMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTPMS);
        }
}
//#]

IMPLEMENT_META_P(PowerSource, Architecture, Architecture, false, OMAnimatedPowerSource)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PowerSource.cpp
*********************************************************************/
