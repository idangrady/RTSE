/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Sat, 11, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## classInstance itsGPS
#include "GPS.h"
//## auto_generated
#include "Battery.h"
//## auto_generated
#include "Engine.h"
//## auto_generated
#include "TPMS.h"
//#[ ignore
#define evntStartCar_SERIALIZE OM_NO_OP

#define evntStartCar_UNSERIALIZE OM_NO_OP

#define evntStartCar_CONSTRUCTOR evntStartCar()
//#]

//## package Default


//## classInstance itsGPS
GPS itsGPS;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations(void) {
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsGPS, GPS, "itsGPS", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//## event evntStartCar()
evntStartCar::evntStartCar(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evntStartCar)
    setId(evntStartCar_Default_id);
}

//#[ ignore
const IOxfEvent::ID evntStartCar_Default_id(18601);
//#]

IMPLEMENT_META_EVENT_P(evntStartCar, Default, Default, evntStartCar())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
