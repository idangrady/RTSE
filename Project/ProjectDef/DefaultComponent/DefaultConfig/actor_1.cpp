/********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: actor_1
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\actor_1.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "actor_1.h"
//#[ ignore
#define SystemContext_actor_1_actor_1_SERIALIZE OM_NO_OP
//#]

//## package SystemContext

//## actor actor_1
actor_1::actor_1(void) {
    NOTIFY_CONSTRUCTOR(actor_1, actor_1(), 0, SystemContext_actor_1_actor_1_SERIALIZE);
}

actor_1::~actor_1(void) {
    NOTIFY_DESTRUCTOR(~actor_1, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(actor_1, SystemContext, SystemContext, false, OMAnimatedactor_1)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\actor_1.cpp
*********************************************************************/
