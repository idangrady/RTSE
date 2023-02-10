/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: LED
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\LED.cpp
*********************************************************************/

//## auto_generated
#include "LED.h"
//## link itsDashboard
#include "Dashboard.h"
//## package Default

//## class LED
LED::LED(void) : itsDashboard(NULL) {
}

LED::~LED(void) {
    cleanUpRelations();
}

const Dashboard* LED::getItsDashboard(void) const {
    return itsDashboard;
}

void LED::setItsDashboard(Dashboard* const p_Dashboard) {
    if(p_Dashboard != NULL)
        {
            p_Dashboard->_addItsLED(this);
        }
    _setItsDashboard(p_Dashboard);
}

void LED::cleanUpRelations(void) {
    if(itsDashboard != NULL)
        {
            Dashboard* current = itsDashboard;
            if(current != NULL)
                {
                    current->_removeItsLED(this);
                }
            itsDashboard = NULL;
        }
}

void LED::__setItsDashboard(Dashboard* const p_Dashboard) {
    itsDashboard = p_Dashboard;
}

void LED::_setItsDashboard(Dashboard* p_Dashboard) {
    if(itsDashboard != NULL)
        {
            itsDashboard->_removeItsLED(this);
        }
    __setItsDashboard(p_Dashboard);
}

void LED::_clearItsDashboard(void) {
    itsDashboard = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\LED.cpp
*********************************************************************/
