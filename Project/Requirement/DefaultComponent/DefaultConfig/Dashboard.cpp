/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/

//## auto_generated
#include "Dashboard.h"
//## link itsDisplay
#include "Display.h"
//## link itsLED
#include "LED.h"
//## link itsTPMS
#include "TPMS.h"
//## package Default

//## class Dashboard
Dashboard::Dashboard(void) : itsTPMS(NULL) {
    {
        for (int pos = 0; pos < 10; ++pos) {
        	itsDisplay[pos] = NULL;
        }
    }
    {
        for (int pos = 0; pos < 5; ++pos) {
        	itsLED[pos] = NULL;
        }
    }
}

Dashboard::~Dashboard(void) {
    cleanUpRelations();
}

Rhp_int32_t Dashboard::getItsDisplay(void) const {
    Rhp_int32_t iter = 0;
    return iter;
}

void Dashboard::addItsDisplay(Display* const p_Display) {
    if(p_Display != NULL)
        {
            p_Display->_setItsDashboard(this);
        }
    _addItsDisplay(p_Display);
}

void Dashboard::removeItsDisplay(Display* p_Display) {
    if(p_Display != NULL)
        {
            p_Display->__setItsDashboard(NULL);
        }
    _removeItsDisplay(p_Display);
}

void Dashboard::clearItsDisplay(void) {
    Rhp_int32_t iter = 0;
    while ((iter < 10) && itsDisplay[iter]){
        (itsDisplay[iter])->_clearItsDashboard();
        iter++;
    }
    _clearItsDisplay();
}

Rhp_int32_t Dashboard::getItsLED(void) const {
    Rhp_int32_t iter = 0;
    return iter;
}

void Dashboard::addItsLED(LED* const p_LED) {
    if(p_LED != NULL)
        {
            p_LED->_setItsDashboard(this);
        }
    _addItsLED(p_LED);
}

void Dashboard::removeItsLED(LED* p_LED) {
    if(p_LED != NULL)
        {
            p_LED->__setItsDashboard(NULL);
        }
    _removeItsLED(p_LED);
}

void Dashboard::clearItsLED(void) {
    Rhp_int32_t iter = 0;
    while ((iter < 5) && itsLED[iter]){
        (itsLED[iter])->_clearItsDashboard();
        iter++;
    }
    _clearItsLED();
}

const TPMS* Dashboard::getItsTPMS(void) const {
    return itsTPMS;
}

void Dashboard::setItsTPMS(TPMS* const p_TPMS) {
    if(p_TPMS != NULL)
        {
            p_TPMS->_setItsDashboard(this);
        }
    _setItsTPMS(p_TPMS);
}

void Dashboard::cleanUpRelations(void) {
    {
        Rhp_int32_t iter = 0;
        while ((iter < 10) && itsDisplay[iter]){
            const Dashboard* p_Dashboard = (itsDisplay[iter])->getItsDashboard();
            if(p_Dashboard != NULL)
                {
                    (itsDisplay[iter])->__setItsDashboard(NULL);
                }
            iter++;
        }
    }
    {
        Rhp_int32_t iter = 0;
        while ((iter < 5) && itsLED[iter]){
            const Dashboard* p_Dashboard = (itsLED[iter])->getItsDashboard();
            if(p_Dashboard != NULL)
                {
                    (itsLED[iter])->__setItsDashboard(NULL);
                }
            iter++;
        }
    }
    if(itsTPMS != NULL)
        {
            const Dashboard* p_Dashboard = itsTPMS->getItsDashboard();
            if(p_Dashboard != NULL)
                {
                    itsTPMS->__setItsDashboard(NULL);
                }
            itsTPMS = NULL;
        }
}

void Dashboard::_addItsDisplay(Display* const p_Display) {
    for (int pos = 0; pos < 10; ++pos) {
    	if (!itsDisplay[pos]) {
    		itsDisplay[pos] = p_Display;
    		break;
    	}
    }
}

void Dashboard::_removeItsDisplay(Display* const p_Display) {
    for (int pos = 0; pos < 10; ++pos) {
    	if (itsDisplay[pos] == p_Display) {
    		itsDisplay[pos] = NULL;
    	}
    }
}

void Dashboard::_clearItsDisplay(void) {
}

void Dashboard::_addItsLED(LED* const p_LED) {
    for (int pos = 0; pos < 5; ++pos) {
    	if (!itsLED[pos]) {
    		itsLED[pos] = p_LED;
    		break;
    	}
    }
}

void Dashboard::_removeItsLED(LED* const p_LED) {
    for (int pos = 0; pos < 5; ++pos) {
    	if (itsLED[pos] == p_LED) {
    		itsLED[pos] = NULL;
    	}
    }
}

void Dashboard::_clearItsLED(void) {
}

void Dashboard::__setItsTPMS(TPMS* const p_TPMS) {
    itsTPMS = p_TPMS;
}

void Dashboard::_setItsTPMS(TPMS* const p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->__setItsDashboard(NULL);
        }
    __setItsTPMS(p_TPMS);
}

void Dashboard::_clearItsTPMS(void) {
    itsTPMS = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/
