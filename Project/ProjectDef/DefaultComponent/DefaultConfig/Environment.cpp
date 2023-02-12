/********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Environment
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Environment.h"
//## link itsTPMS
#include "TPMS.h"
//#[ ignore
#define Architecture_Environment_Environment_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Environment
Environment::Environment(void) : itsTPMS(NULL) {
    NOTIFY_CONSTRUCTOR(Environment, Environment(), 0, Architecture_Environment_Environment_SERIALIZE);
}

Environment::~Environment(void) {
    NOTIFY_DESTRUCTOR(~Environment, true);
    cleanUpRelations();
}

const TPMS* Environment::getItsTPMS(void) const {
    return itsTPMS;
}

void Environment::setItsTPMS(TPMS* const p_TPMS) {
    if(p_TPMS != NULL)
        {
            p_TPMS->_setItsEnvironment(this);
        }
    _setItsTPMS(p_TPMS);
}

void Environment::cleanUpRelations(void) {
    if(itsTPMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTPMS");
            const Environment* p_Environment = itsTPMS->getItsEnvironment();
            if(p_Environment != NULL)
                {
                    itsTPMS->__setItsEnvironment(NULL);
                }
            itsTPMS = NULL;
        }
}

void Environment::__setItsTPMS(TPMS* const p_TPMS) {
    itsTPMS = p_TPMS;
    if(p_TPMS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTPMS", p_TPMS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTPMS");
        }
}

void Environment::_setItsTPMS(TPMS* const p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->__setItsEnvironment(NULL);
        }
    __setItsTPMS(p_TPMS);
}

void Environment::_clearItsTPMS(void) {
    NOTIFY_RELATION_CLEARED("itsTPMS");
    itsTPMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnvironment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTPMS", false, true);
    if(myReal->itsTPMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTPMS);
        }
}
//#]

IMPLEMENT_META_P(Environment, Architecture, Architecture, false, OMAnimatedEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/
