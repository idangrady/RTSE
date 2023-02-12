/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Wed, 21, Dec 2022  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "PowerSourceCar.h"
//#[ ignore
#define requestPowerOn_SERIALIZE OM_NO_OP

#define requestPowerOn_UNSERIALIZE OM_NO_OP

#define requestPowerOn_CONSTRUCTOR requestPowerOn()

#define reqPowerOn_SERIALIZE OM_NO_OP

#define reqPowerOn_UNSERIALIZE OM_NO_OP

#define reqPowerOn_CONSTRUCTOR reqPowerOn()

#define reqPowerOff_SERIALIZE OM_NO_OP

#define reqPowerOff_UNSERIALIZE OM_NO_OP

#define reqPowerOff_CONSTRUCTOR reqPowerOff()

#define eventFaultCleared_SERIALIZE OM_NO_OP

#define eventFaultCleared_UNSERIALIZE OM_NO_OP

#define eventFaultCleared_CONSTRUCTOR eventFaultCleared()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(Default, Default)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event requestPowerOn()
requestPowerOn::requestPowerOn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(requestPowerOn)
    setId(requestPowerOn_Default_id);
}

//#[ ignore
const IOxfEvent::ID requestPowerOn_Default_id(18601);
//#]

IMPLEMENT_META_EVENT_P(requestPowerOn, Default, Default, requestPowerOn())

//## event reqPowerOn()
reqPowerOn::reqPowerOn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqPowerOn)
    setId(reqPowerOn_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqPowerOn_Default_id(18602);
//#]

IMPLEMENT_META_EVENT_P(reqPowerOn, Default, Default, reqPowerOn())

//## event reqPowerOff()
reqPowerOff::reqPowerOff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqPowerOff)
    setId(reqPowerOff_Default_id);
}

//#[ ignore
const IOxfEvent::ID reqPowerOff_Default_id(18603);
//#]

IMPLEMENT_META_EVENT_P(reqPowerOff, Default, Default, reqPowerOff())

//## event eventFaultCleared()
eventFaultCleared::eventFaultCleared(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(eventFaultCleared)
    setId(eventFaultCleared_Default_id);
}

//#[ ignore
const IOxfEvent::ID eventFaultCleared_Default_id(18604);
//#]

IMPLEMENT_META_EVENT_P(eventFaultCleared, Default, Default, eventFaultCleared())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
