/********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
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
#include "PowerSouceCar.h"
//#[ ignore
#define requestPowerOn_SERIALIZE OM_NO_OP

#define requestPowerOn_UNSERIALIZE OM_NO_OP

#define requestPowerOn_CONSTRUCTOR requestPowerOn()

#define RequestPowerOff_SERIALIZE OM_NO_OP

#define RequestPowerOff_UNSERIALIZE OM_NO_OP

#define RequestPowerOff_CONSTRUCTOR RequestPowerOff()
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

//## event RequestPowerOff()
RequestPowerOff::RequestPowerOff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(RequestPowerOff)
    setId(RequestPowerOff_Default_id);
}

//#[ ignore
const IOxfEvent::ID RequestPowerOff_Default_id(18602);
//#]

IMPLEMENT_META_EVENT_P(RequestPowerOff, Default, Default, RequestPowerOff())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
