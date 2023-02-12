/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PresSensor
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\PresSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PresSensor.h"
//#[ ignore
#define Architecture_PresSensor_PresSensor_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## actor PresSensor
PresSensor::PresSensor(void) : SensorActor() {
    NOTIFY_CONSTRUCTOR(PresSensor, PresSensor(), 0, Architecture_PresSensor_PresSensor_SERIALIZE);
}

PresSensor::~PresSensor(void) {
    NOTIFY_DESTRUCTOR(~PresSensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPresSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensorActor::serializeAttributes(aomsAttributes);
}

void OMAnimatedPresSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedSensorActor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(PresSensor, Architecture, false, SensorActor, OMAnimatedSensorActor, OMAnimatedPresSensor)

OMINIT_SUPERCLASS(SensorActor, OMAnimatedSensorActor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PresSensor.cpp
*********************************************************************/
