/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
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
#include "TPMS.h"
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

#define increasePressureWheel1_SERIALIZE OM_NO_OP

#define increasePressureWheel1_UNSERIALIZE OM_NO_OP

#define increasePressureWheel1_CONSTRUCTOR increasePressureWheel1()

#define increaseTempWheel1_SERIALIZE OM_NO_OP

#define increaseTempWheel1_UNSERIALIZE OM_NO_OP

#define increaseTempWheel1_CONSTRUCTOR increaseTempWheel1()

#define onWheel1LedChange_SERIALIZE OM_NO_OP

#define onWheel1LedChange_UNSERIALIZE OM_NO_OP

#define onWheel1LedChange_CONSTRUCTOR onWheel1LedChange()

#define tempIncreaseWheel1_SERIALIZE OM_NO_OP

#define tempIncreaseWheel1_UNSERIALIZE OM_NO_OP

#define tempIncreaseWheel1_CONSTRUCTOR tempIncreaseWheel1()

#define tempDecreaseWheel1_SERIALIZE OM_NO_OP

#define tempDecreaseWheel1_UNSERIALIZE OM_NO_OP

#define tempDecreaseWheel1_CONSTRUCTOR tempDecreaseWheel1()

#define pressureIncreaseWheel1_SERIALIZE OM_NO_OP

#define pressureIncreaseWheel1_UNSERIALIZE OM_NO_OP

#define pressureIncreaseWheel1_CONSTRUCTOR pressureIncreaseWheel1()

#define pressureDecreaseWheel1_SERIALIZE OM_NO_OP

#define pressureDecreaseWheel1_UNSERIALIZE OM_NO_OP

#define pressureDecreaseWheel1_CONSTRUCTOR pressureDecreaseWheel1()
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

//## event increasePressureWheel1()
increasePressureWheel1::increasePressureWheel1(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(increasePressureWheel1)
    setId(increasePressureWheel1_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID increasePressureWheel1_Architecture_id(18604);
//#]

IMPLEMENT_META_EVENT_P(increasePressureWheel1, Architecture, Architecture, increasePressureWheel1())

//## event increaseTempWheel1()
increaseTempWheel1::increaseTempWheel1(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(increaseTempWheel1)
    setId(increaseTempWheel1_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID increaseTempWheel1_Architecture_id(18605);
//#]

IMPLEMENT_META_EVENT_P(increaseTempWheel1, Architecture, Architecture, increaseTempWheel1())

//## event onWheel1LedChange()
onWheel1LedChange::onWheel1LedChange(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(onWheel1LedChange)
    setId(onWheel1LedChange_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID onWheel1LedChange_Architecture_id(18606);
//#]

IMPLEMENT_META_EVENT_P(onWheel1LedChange, Architecture, Architecture, onWheel1LedChange())

//## event tempIncreaseWheel1()
tempIncreaseWheel1::tempIncreaseWheel1(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(tempIncreaseWheel1)
    setId(tempIncreaseWheel1_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID tempIncreaseWheel1_Architecture_id(18607);
//#]

IMPLEMENT_META_EVENT_P(tempIncreaseWheel1, Architecture, Architecture, tempIncreaseWheel1())

//## event tempDecreaseWheel1()
tempDecreaseWheel1::tempDecreaseWheel1(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(tempDecreaseWheel1)
    setId(tempDecreaseWheel1_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID tempDecreaseWheel1_Architecture_id(18608);
//#]

IMPLEMENT_META_EVENT_P(tempDecreaseWheel1, Architecture, Architecture, tempDecreaseWheel1())

//## event pressureIncreaseWheel1()
pressureIncreaseWheel1::pressureIncreaseWheel1(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(pressureIncreaseWheel1)
    setId(pressureIncreaseWheel1_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID pressureIncreaseWheel1_Architecture_id(18609);
//#]

IMPLEMENT_META_EVENT_P(pressureIncreaseWheel1, Architecture, Architecture, pressureIncreaseWheel1())

//## event pressureDecreaseWheel1()
pressureDecreaseWheel1::pressureDecreaseWheel1(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(pressureDecreaseWheel1)
    setId(pressureDecreaseWheel1_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID pressureDecreaseWheel1_Architecture_id(18610);
//#]

IMPLEMENT_META_EVENT_P(pressureDecreaseWheel1, Architecture, Architecture, pressureDecreaseWheel1())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Architecture.cpp
*********************************************************************/
