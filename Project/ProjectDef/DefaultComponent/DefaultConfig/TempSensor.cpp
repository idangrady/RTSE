/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TempSensor
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\TempSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TempSensor.h"
//#[ ignore
#define Architecture_TempSensor_TempSensor_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## actor TempSensor
TempSensor::TempSensor(void) : SensorActor() {
    NOTIFY_CONSTRUCTOR(TempSensor, TempSensor(), 0, Architecture_TempSensor_TempSensor_SERIALIZE);
}

TempSensor::~TempSensor(void) {
    NOTIFY_DESTRUCTOR(~TempSensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTempSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedSensorActor::serializeAttributes(aomsAttributes);
}

void OMAnimatedTempSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedSensorActor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(TempSensor, Architecture, false, SensorActor, OMAnimatedSensorActor, OMAnimatedTempSensor)

OMINIT_SUPERCLASS(SensorActor, OMAnimatedSensorActor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TempSensor.cpp
*********************************************************************/
