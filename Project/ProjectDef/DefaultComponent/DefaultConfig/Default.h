/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
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
class PowerSourceCar;

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

//## event reqPowerOn()
class reqPowerOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqPowerOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqPowerOn(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqPowerOn : virtual public AOMEvent {
    DECLARE_META_EVENT(reqPowerOn)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqPowerOn_Default_id;
//#]

//## event reqPowerOff()
class reqPowerOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqPowerOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqPowerOff(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqPowerOff : virtual public AOMEvent {
    DECLARE_META_EVENT(reqPowerOff)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqPowerOff_Default_id;
//#]

//## event eventFaultCleared()
class eventFaultCleared : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedeventFaultCleared;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    eventFaultCleared(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedeventFaultCleared : virtual public AOMEvent {
    DECLARE_META_EVENT(eventFaultCleared)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID eventFaultCleared_Default_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
