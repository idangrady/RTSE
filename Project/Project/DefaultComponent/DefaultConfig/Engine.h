/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Engine
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Engine.h
*********************************************************************/

#ifndef Engine_H
#define Engine_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Engine
class Engine {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEngine;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Engine(void);
    
    //## auto_generated
    ~Engine(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEngine : virtual public AOMInstance {
    DECLARE_META(Engine, OMAnimatedEngine)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Engine.h
*********************************************************************/
