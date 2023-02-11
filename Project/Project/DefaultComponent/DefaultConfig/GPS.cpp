/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: GPS
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\GPS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "GPS.h"
//## link itsTPMS
#include "TPMS.h"
//#[ ignore
#define Default_GPS_GPS_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class GPS
GPS::GPS(void) : itsTPMS(NULL) {
    NOTIFY_CONSTRUCTOR(GPS, GPS(), 0, Default_GPS_GPS_SERIALIZE);
}

GPS::~GPS(void) {
    NOTIFY_DESTRUCTOR(~GPS, true);
    cleanUpRelations();
}

const TPMS* GPS::getItsTPMS(void) const {
    return itsTPMS;
}

void GPS::setItsTPMS(TPMS* const p_TPMS) {
    if(p_TPMS != NULL)
        {
            p_TPMS->_setItsGPS(this);
        }
    _setItsTPMS(p_TPMS);
}

void GPS::cleanUpRelations(void) {
    if(itsTPMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTPMS");
            const GPS* p_GPS = itsTPMS->getItsGPS();
            if(p_GPS != NULL)
                {
                    itsTPMS->__setItsGPS(NULL);
                }
            itsTPMS = NULL;
        }
}

void GPS::__setItsTPMS(TPMS* const p_TPMS) {
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

void GPS::_setItsTPMS(TPMS* const p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->__setItsGPS(NULL);
        }
    __setItsTPMS(p_TPMS);
}

void GPS::_clearItsTPMS(void) {
    NOTIFY_RELATION_CLEARED("itsTPMS");
    itsTPMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGPS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTPMS", false, true);
    if(myReal->itsTPMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTPMS);
        }
}
//#]

IMPLEMENT_META_P(GPS, Default, Default, false, OMAnimatedGPS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\GPS.cpp
*********************************************************************/
