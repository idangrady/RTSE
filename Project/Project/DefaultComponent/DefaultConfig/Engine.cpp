/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Engine
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Engine.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Engine.h"
//#[ ignore
#define Default_Engine_Engine_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Engine
Engine::Engine(void) {
    NOTIFY_CONSTRUCTOR(Engine, Engine(), 0, Default_Engine_Engine_SERIALIZE);
}

Engine::~Engine(void) {
    NOTIFY_DESTRUCTOR(~Engine, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(Engine, Default, Default, false, OMAnimatedEngine)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Engine.cpp
*********************************************************************/
