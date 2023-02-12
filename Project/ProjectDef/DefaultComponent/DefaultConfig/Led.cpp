/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Led
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Led.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Led.h"
//## link itsDashboard
#include "Dashboard.h"
//#[ ignore
#define Architecture_Led_Led_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Led
Led::Led(void) : itsDashboard(NULL) {
    NOTIFY_CONSTRUCTOR(Led, Led(), 0, Architecture_Led_Led_SERIALIZE);
}

Led::~Led(void) {
    NOTIFY_DESTRUCTOR(~Led, true);
    cleanUpRelations();
}

const Dashboard* Led::getItsDashboard(void) const {
    return itsDashboard;
}

void Led::setItsDashboard(Dashboard* const p_Dashboard) {
    if(p_Dashboard != NULL)
        {
            p_Dashboard->_addItsLed(this);
        }
    _setItsDashboard(p_Dashboard);
}

void Led::cleanUpRelations(void) {
    if(itsDashboard != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDashboard");
            Dashboard* current = itsDashboard;
            if(current != NULL)
                {
                    current->_removeItsLed(this);
                }
            itsDashboard = NULL;
        }
}

void Led::__setItsDashboard(Dashboard* const p_Dashboard) {
    itsDashboard = p_Dashboard;
    if(p_Dashboard != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDashboard", p_Dashboard, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDashboard");
        }
}

void Led::_setItsDashboard(Dashboard* p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->_removeItsLed(this);
        }
    __setItsDashboard(p_Dashboard);
}

void Led::_clearItsDashboard(void) {
    NOTIFY_RELATION_CLEARED("itsDashboard");
    itsDashboard = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLed::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDashboard", false, true);
    if(myReal->itsDashboard)
        {
            aomsRelations->ADD_ITEM(myReal->itsDashboard);
        }
}
//#]

IMPLEMENT_META_P(Led, Architecture, Architecture, false, OMAnimatedLed)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Led.cpp
*********************************************************************/
