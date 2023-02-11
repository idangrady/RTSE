/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Sat, 11, Feb 2023  
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
class Battery;

//## auto_generated
class Engine;

//## classInstance itsGPS
class GPS;

//## auto_generated
class TPMS;

//## package Default


//## classInstance itsGPS
extern GPS itsGPS;

//## auto_generated
void Default_initRelations(void);

//## event evntStartCar()
class evntStartCar : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevntStartCar;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evntStartCar(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevntStartCar : virtual public AOMEvent {
    DECLARE_META_EVENT(evntStartCar)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evntStartCar_Default_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
