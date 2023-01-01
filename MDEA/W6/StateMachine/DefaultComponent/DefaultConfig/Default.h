/*********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Wed, 21, Dec 2022  
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class PowerSouceCar;

//## package Default



//## event requestPowerOn()
class requestPowerOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrequestPowerOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    requestPowerOn(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrequestPowerOn : virtual public AOMEvent {
    DECLARE_META_EVENT(requestPowerOn)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID requestPowerOn_Default_id;
//#]

//## event RequestPowerOff()
class RequestPowerOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRequestPowerOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    RequestPowerOff(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRequestPowerOff : virtual public AOMEvent {
    DECLARE_META_EVENT(RequestPowerOff)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID RequestPowerOff_Default_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
