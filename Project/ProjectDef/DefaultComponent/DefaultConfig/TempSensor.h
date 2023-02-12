/*********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TempSensor
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\TempSensor.h
*********************************************************************/

#ifndef TempSensor_H
#define TempSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## package Architecture

//## actor TempSensor
class TempSensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTempSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TempSensor(void);
    
    //## auto_generated
    ~TempSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTempSensor : virtual public AOMInstance {
    DECLARE_META(TempSensor, OMAnimatedTempSensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TempSensor.h
*********************************************************************/
