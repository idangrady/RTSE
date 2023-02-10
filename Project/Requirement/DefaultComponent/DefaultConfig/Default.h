/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <event.h>
//## auto_generated
class Car;

//## auto_generated
class Dashboard;

//## auto_generated
class Display;

//## auto_generated
class EnergySource;

//## auto_generated
class Environment;

//## auto_generated
class LED;

//## auto_generated
class PowerSource;

//## auto_generated
class System;

//## auto_generated
class TPMS;

//## auto_generated
class Wheel;

//## auto_generated
class Wheels;

//## auto_generated
class block_57;

//## auto_generated
class block_59;

//## package Default



//## event startCar()
class startCar : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    startCar(void);
};

//#[ ignore
extern const IOxfEvent::ID startCar_Default_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
