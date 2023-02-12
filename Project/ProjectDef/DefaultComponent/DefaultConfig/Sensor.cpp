/********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensor
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sensor.h"
//## link itsPowerSource
#include "PowerSource.h"
//#[ ignore
#define SystemContext_Sensor_Sensor_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## actor Sensor
Sensor::Sensor(void) : itsPowerSource(NULL) {
    NOTIFY_CONSTRUCTOR(Sensor, Sensor(), 0, SystemContext_Sensor_Sensor_SERIALIZE);
}

Sensor::~Sensor(void) {
    NOTIFY_DESTRUCTOR(~Sensor, true);
    cleanUpRelations();
}

const PowerSource* Sensor::getItsPowerSource(void) const {
    return itsPowerSource;
}

void Sensor::setItsPowerSource(PowerSource* const p_PowerSource) {
    if(p_PowerSource != NULL)
        {
            p_PowerSource->_setItsSensor(this);
        }
    _setItsPowerSource(p_PowerSource);
}

void Sensor::cleanUpRelations(void) {
    if(itsPowerSource != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPowerSource");
            const Sensor* p_Sensor = itsPowerSource->getItsSensor();
            if(p_Sensor != NULL)
                {
                    itsPowerSource->__setItsSensor(NULL);
                }
            itsPowerSource = NULL;
        }
}

void Sensor::__setItsPowerSource(PowerSource* const p_PowerSource) {
    itsPowerSource = p_PowerSource;
    if(p_PowerSource != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPowerSource", p_PowerSource, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPowerSource");
        }
}

void Sensor::_setItsPowerSource(PowerSource* const p_PowerSource) {
    if(itsPowerSource != NULL)
        {
            itsPowerSource->__setItsSensor(NULL);
        }
    __setItsPowerSource(p_PowerSource);
}

void Sensor::_clearItsPowerSource(void) {
    NOTIFY_RELATION_CLEARED("itsPowerSource");
    itsPowerSource = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsPowerSource", false, true);
    if(myReal->itsPowerSource)
        {
            aomsRelations->ADD_ITEM(myReal->itsPowerSource);
        }
}
//#]

IMPLEMENT_META_P(Sensor, SystemContext, SystemContext, false, OMAnimatedSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensor.cpp
*********************************************************************/
