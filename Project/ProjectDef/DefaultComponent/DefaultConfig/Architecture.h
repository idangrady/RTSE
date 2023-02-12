/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Architecture
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Architecture.h
*********************************************************************/

#ifndef Architecture_H
#define Architecture_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class Car;

//## auto_generated
class Dashboard;

//## auto_generated
class Display;

//## auto_generated
class Environment;

//## auto_generated
class Led;

//## auto_generated
class PowerSource;

//## auto_generated
class TPMS;

//## auto_generated
class Wheels;

//## package Architecture



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
extern const IOxfEvent::ID requestPowerOn_Architecture_id;
//#]

//## event startCar()
class startCar : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedstartCar;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    startCar(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedstartCar : virtual public AOMEvent {
    DECLARE_META_EVENT(startCar)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID startCar_Architecture_id;
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
extern const IOxfEvent::ID reqPowerOff_Architecture_id;
//#]

//## event onWheel1LedChange()
class onWheel1LedChange : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedonWheel1LedChange;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    onWheel1LedChange(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedonWheel1LedChange : virtual public AOMEvent {
    DECLARE_META_EVENT(onWheel1LedChange)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID onWheel1LedChange_Architecture_id;
//#]

//## event onWheel2LedChange()
class onWheel2LedChange : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedonWheel2LedChange;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    onWheel2LedChange(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedonWheel2LedChange : virtual public AOMEvent {
    DECLARE_META_EVENT(onWheel2LedChange)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID onWheel2LedChange_Architecture_id;
//#]

//## event onWheel3LedChange()
class onWheel3LedChange : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedonWheel3LedChange;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    onWheel3LedChange(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedonWheel3LedChange : virtual public AOMEvent {
    DECLARE_META_EVENT(onWheel3LedChange)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID onWheel3LedChange_Architecture_id;
//#]

//## event onWheel4LedChange()
class onWheel4LedChange : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedonWheel4LedChange;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    onWheel4LedChange(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedonWheel4LedChange : virtual public AOMEvent {
    DECLARE_META_EVENT(onWheel4LedChange)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID onWheel4LedChange_Architecture_id;
//#]

//## event onWheel5LedChange()
class onWheel5LedChange : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedonWheel5LedChange;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    onWheel5LedChange(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedonWheel5LedChange : virtual public AOMEvent {
    DECLARE_META_EVENT(onWheel5LedChange)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID onWheel5LedChange_Architecture_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Architecture.h
*********************************************************************/
