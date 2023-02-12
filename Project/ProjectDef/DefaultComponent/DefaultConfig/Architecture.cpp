/********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Architecture
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Architecture.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Architecture.h"
//## auto_generated
#include "Car.h"
//## auto_generated
#include "Dashboard.h"
//## auto_generated
#include "Display.h"
//## auto_generated
#include "Environment.h"
//## auto_generated
#include "Led.h"
//## auto_generated
#include "PowerSource.h"
//## auto_generated
#include "TPMS.h"
//## auto_generated
#include "Wheels.h"
//#[ ignore
#define requestPowerOn_SERIALIZE OM_NO_OP

#define requestPowerOn_UNSERIALIZE OM_NO_OP

#define requestPowerOn_CONSTRUCTOR requestPowerOn()

#define startCar_SERIALIZE OM_NO_OP

#define startCar_UNSERIALIZE OM_NO_OP

#define startCar_CONSTRUCTOR startCar()

#define reqPowerOff_SERIALIZE OM_NO_OP

#define reqPowerOff_UNSERIALIZE OM_NO_OP

#define reqPowerOff_CONSTRUCTOR reqPowerOff()

#define onWheel1LedChange_SERIALIZE OM_NO_OP

#define onWheel1LedChange_UNSERIALIZE OM_NO_OP

#define onWheel1LedChange_CONSTRUCTOR onWheel1LedChange()

#define onWheel2LedChange_SERIALIZE OM_NO_OP

#define onWheel2LedChange_UNSERIALIZE OM_NO_OP

#define onWheel2LedChange_CONSTRUCTOR onWheel2LedChange()

#define onWheel3LedChange_SERIALIZE OM_NO_OP

#define onWheel3LedChange_UNSERIALIZE OM_NO_OP

#define onWheel3LedChange_CONSTRUCTOR onWheel3LedChange()

#define onWheel4LedChange_SERIALIZE OM_NO_OP

#define onWheel4LedChange_UNSERIALIZE OM_NO_OP

#define onWheel4LedChange_CONSTRUCTOR onWheel4LedChange()

#define onWheel5LedChange_SERIALIZE OM_NO_OP

#define onWheel5LedChange_UNSERIALIZE OM_NO_OP

#define onWheel5LedChange_CONSTRUCTOR onWheel5LedChange()
//#]

//## package Architecture


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Architecture, Architecture)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event requestPowerOn()
requestPowerOn::requestPowerOn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(requestPowerOn)
    setId(requestPowerOn_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID requestPowerOn_Architecture_id(18601);
//#]

IMPLEMENT_META_EVENT_P(requestPowerOn, Architecture, Architecture, requestPowerOn())

//## event startCar()
startCar::startCar(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(startCar)
    setId(startCar_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID startCar_Architecture_id(18602);
//#]

IMPLEMENT_META_EVENT_P(startCar, Architecture, Architecture, startCar())

//## event reqPowerOff()
reqPowerOff::reqPowerOff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqPowerOff)
    setId(reqPowerOff_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID reqPowerOff_Architecture_id(18603);
//#]

IMPLEMENT_META_EVENT_P(reqPowerOff, Architecture, Architecture, reqPowerOff())

//## event onWheel1LedChange()
onWheel1LedChange::onWheel1LedChange(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(onWheel1LedChange)
    setId(onWheel1LedChange_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID onWheel1LedChange_Architecture_id(18604);
//#]

IMPLEMENT_META_EVENT_P(onWheel1LedChange, Architecture, Architecture, onWheel1LedChange())

//## event onWheel2LedChange()
onWheel2LedChange::onWheel2LedChange(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(onWheel2LedChange)
    setId(onWheel2LedChange_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID onWheel2LedChange_Architecture_id(18605);
//#]

IMPLEMENT_META_EVENT_P(onWheel2LedChange, Architecture, Architecture, onWheel2LedChange())

//## event onWheel3LedChange()
onWheel3LedChange::onWheel3LedChange(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(onWheel3LedChange)
    setId(onWheel3LedChange_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID onWheel3LedChange_Architecture_id(18606);
//#]

IMPLEMENT_META_EVENT_P(onWheel3LedChange, Architecture, Architecture, onWheel3LedChange())

//## event onWheel4LedChange()
onWheel4LedChange::onWheel4LedChange(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(onWheel4LedChange)
    setId(onWheel4LedChange_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID onWheel4LedChange_Architecture_id(18607);
//#]

IMPLEMENT_META_EVENT_P(onWheel4LedChange, Architecture, Architecture, onWheel4LedChange())

//## event onWheel5LedChange()
onWheel5LedChange::onWheel5LedChange(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(onWheel5LedChange)
    setId(onWheel5LedChange_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID onWheel5LedChange_Architecture_id(18608);
//#]

IMPLEMENT_META_EVENT_P(onWheel5LedChange, Architecture, Architecture, onWheel5LedChange())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Architecture.cpp
*********************************************************************/
