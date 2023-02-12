/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Display.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Display.h"
//## link itsDashboard
#include "Dashboard.h"
//#[ ignore
#define Architecture_Display_Display_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Display
Display::Display(void) : itsDashboard(NULL) {
    NOTIFY_CONSTRUCTOR(Display, Display(), 0, Architecture_Display_Display_SERIALIZE);
}

Display::~Display(void) {
    NOTIFY_DESTRUCTOR(~Display, true);
    cleanUpRelations();
}

const Dashboard* Display::getItsDashboard(void) const {
    return itsDashboard;
}

void Display::setItsDashboard(Dashboard* const p_Dashboard) {
    if(p_Dashboard != NULL)
        {
            p_Dashboard->_addItsDisplay(this);
        }
    _setItsDashboard(p_Dashboard);
}

void Display::cleanUpRelations(void) {
    if(itsDashboard != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDashboard");
            Dashboard* current = itsDashboard;
            if(current != NULL)
                {
                    current->_removeItsDisplay(this);
                }
            itsDashboard = NULL;
        }
}

void Display::__setItsDashboard(Dashboard* const p_Dashboard) {
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

void Display::_setItsDashboard(Dashboard* p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->_removeItsDisplay(this);
        }
    __setItsDashboard(p_Dashboard);
}

void Display::_clearItsDashboard(void) {
    NOTIFY_RELATION_CLEARED("itsDashboard");
    itsDashboard = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDisplay::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDashboard", false, true);
    if(myReal->itsDashboard)
        {
            aomsRelations->ADD_ITEM(myReal->itsDashboard);
        }
}
//#]

IMPLEMENT_META_P(Display, Architecture, Architecture, false, OMAnimatedDisplay)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Display.cpp
*********************************************************************/
