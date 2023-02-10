/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Display.cpp
*********************************************************************/

//## auto_generated
#include "Display.h"
//## link itsDashboard
#include "Dashboard.h"
//## package Default

//## class Display
Display::Display(void) : itsDashboard(NULL) {
}

Display::~Display(void) {
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
}

void Display::_setItsDashboard(Dashboard* p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->_removeItsDisplay(this);
        }
    __setItsDashboard(p_Dashboard);
}

void Display::_clearItsDashboard(void) {
    itsDashboard = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Display.cpp
*********************************************************************/
