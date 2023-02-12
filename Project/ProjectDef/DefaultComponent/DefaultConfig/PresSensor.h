/*********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PresSensor
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\PresSensor.h
*********************************************************************/

#ifndef PresSensor_H
#define PresSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## package Architecture

//## actor PresSensor
class PresSensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPresSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PresSensor(void);
    
    //## auto_generated
    ~PresSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPresSensor : virtual public AOMInstance {
    DECLARE_META(PresSensor, OMAnimatedPresSensor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PresSensor.h
*********************************************************************/
