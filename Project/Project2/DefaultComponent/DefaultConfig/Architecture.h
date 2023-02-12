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
class TPMS;

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

//## event increasePressureWheel1()
class increasePressureWheel1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedincreasePressureWheel1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    increasePressureWheel1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedincreasePressureWheel1 : virtual public AOMEvent {
    DECLARE_META_EVENT(increasePressureWheel1)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID increasePressureWheel1_Architecture_id;
//#]

//## event increaseTempWheel1()
class increaseTempWheel1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedincreaseTempWheel1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    increaseTempWheel1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedincreaseTempWheel1 : virtual public AOMEvent {
    DECLARE_META_EVENT(increaseTempWheel1)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID increaseTempWheel1_Architecture_id;
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

//## event tempIncreaseWheel1()
class tempIncreaseWheel1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtempIncreaseWheel1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    tempIncreaseWheel1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtempIncreaseWheel1 : virtual public AOMEvent {
    DECLARE_META_EVENT(tempIncreaseWheel1)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID tempIncreaseWheel1_Architecture_id;
//#]

//## event tempDecreaseWheel1()
class tempDecreaseWheel1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtempDecreaseWheel1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    tempDecreaseWheel1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtempDecreaseWheel1 : virtual public AOMEvent {
    DECLARE_META_EVENT(tempDecreaseWheel1)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID tempDecreaseWheel1_Architecture_id;
//#]

//## event pressureIncreaseWheel1()
class pressureIncreaseWheel1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedpressureIncreaseWheel1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    pressureIncreaseWheel1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedpressureIncreaseWheel1 : virtual public AOMEvent {
    DECLARE_META_EVENT(pressureIncreaseWheel1)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID pressureIncreaseWheel1_Architecture_id;
//#]

//## event pressureDecreaseWheel1()
class pressureDecreaseWheel1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedpressureDecreaseWheel1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    pressureDecreaseWheel1(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedpressureDecreaseWheel1 : virtual public AOMEvent {
    DECLARE_META_EVENT(pressureDecreaseWheel1)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID pressureDecreaseWheel1_Architecture_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Architecture.h
*********************************************************************/
