/********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
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
TempSensor::TempSensor(void) {
    NOTIFY_CONSTRUCTOR(TempSensor, TempSensor(), 0, Architecture_TempSensor_TempSensor_SERIALIZE);
}

TempSensor::~TempSensor(void) {
    NOTIFY_DESTRUCTOR(~TempSensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(TempSensor, Architecture, Architecture, false, OMAnimatedTempSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TempSensor.cpp
*********************************************************************/
