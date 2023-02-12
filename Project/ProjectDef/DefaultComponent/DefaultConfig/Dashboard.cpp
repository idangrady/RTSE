/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Dashboard.h"
//## link itsDisplay
#include "Display.h"
//## link itsLed
#include "Led.h"
//## link itsTPMS
#include "TPMS.h"
//#[ ignore
#define Architecture_Dashboard_Dashboard_SERIALIZE OM_NO_OP
//#]

//## package Architecture

//## class Dashboard
Dashboard::Dashboard(void) : itsTPMS(NULL) {
    NOTIFY_CONSTRUCTOR(Dashboard, Dashboard(), 0, Architecture_Dashboard_Dashboard_SERIALIZE);
    {
        for (int pos = 0; pos < 10; ++pos) {
        	itsDisplay[pos] = NULL;
        }
    }
    {
        for (int pos = 0; pos < 5; ++pos) {
        	itsLed[pos] = NULL;
        }
    }
}

Dashboard::~Dashboard(void) {
    NOTIFY_DESTRUCTOR(~Dashboard, true);
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

Rhp_int32_t Dashboard::getItsLed(void) const {
    Rhp_int32_t iter = 0;
    return iter;
}

void Dashboard::addItsLed(Led* const p_Led) {
    if(p_Led != NULL)
        {
            p_Led->_setItsDashboard(this);
        }
    _addItsLed(p_Led);
}

void Dashboard::removeItsLed(Led* p_Led) {
    if(p_Led != NULL)
        {
            p_Led->__setItsDashboard(NULL);
        }
    _removeItsLed(p_Led);
}

void Dashboard::clearItsLed(void) {
    Rhp_int32_t iter = 0;
    while ((iter < 5) && itsLed[iter]){
        (itsLed[iter])->_clearItsDashboard();
        iter++;
    }
    _clearItsLed();
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
        while ((iter < 5) && itsLed[iter]){
            const Dashboard* p_Dashboard = (itsLed[iter])->getItsDashboard();
            if(p_Dashboard != NULL)
                {
                    (itsLed[iter])->__setItsDashboard(NULL);
                }
            iter++;
        }
    }
    if(itsTPMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTPMS");
            const Dashboard* p_Dashboard = itsTPMS->getItsDashboard();
            if(p_Dashboard != NULL)
                {
                    itsTPMS->__setItsDashboard(NULL);
                }
            itsTPMS = NULL;
        }
}

void Dashboard::_addItsDisplay(Display* const p_Display) {
    if(p_Display != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDisplay", p_Display, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDisplay");
        }
    for (int pos = 0; pos < 10; ++pos) {
    	if (!itsDisplay[pos]) {
    		itsDisplay[pos] = p_Display;
    		break;
    	}
    }
}

void Dashboard::_removeItsDisplay(Display* const p_Display) {
    NOTIFY_RELATION_ITEM_REMOVED("itsDisplay", p_Display);
    for (int pos = 0; pos < 10; ++pos) {
    	if (itsDisplay[pos] == p_Display) {
    		itsDisplay[pos] = NULL;
    	}
    }
}

void Dashboard::_clearItsDisplay(void) {
    NOTIFY_RELATION_CLEARED("itsDisplay");
    
}

void Dashboard::_addItsLed(Led* const p_Led) {
    if(p_Led != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLed", p_Led, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLed");
        }
    for (int pos = 0; pos < 5; ++pos) {
    	if (!itsLed[pos]) {
    		itsLed[pos] = p_Led;
    		break;
    	}
    }
}

void Dashboard::_removeItsLed(Led* const p_Led) {
    NOTIFY_RELATION_ITEM_REMOVED("itsLed", p_Led);
    for (int pos = 0; pos < 5; ++pos) {
    	if (itsLed[pos] == p_Led) {
    		itsLed[pos] = NULL;
    	}
    }
}

void Dashboard::_clearItsLed(void) {
    NOTIFY_RELATION_CLEARED("itsLed");
    
}

void Dashboard::__setItsTPMS(TPMS* const p_TPMS) {
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

void Dashboard::_setItsTPMS(TPMS* const p_TPMS) {
    if(itsTPMS != NULL)
        {
            itsTPMS->__setItsDashboard(NULL);
        }
    __setItsTPMS(p_TPMS);
}

void Dashboard::_clearItsTPMS(void) {
    NOTIFY_RELATION_CLEARED("itsTPMS");
    itsTPMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDashboard::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTPMS", false, true);
    if(myReal->itsTPMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTPMS);
        }
    aomsRelations->addRelation("itsDisplay", false, false);
    {
        Rhp_int32_t iter = 0;
        while ((iter < 10) && myReal->itsDisplay[iter]){
            aomsRelations->ADD_ITEM(myReal->itsDisplay[iter]);
            iter++;
        }
    }
    aomsRelations->addRelation("itsLed", false, false);
    {
        Rhp_int32_t iter = 0;
        while ((iter < 5) && myReal->itsLed[iter]){
            aomsRelations->ADD_ITEM(myReal->itsLed[iter]);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(Dashboard, Architecture, Architecture, false, OMAnimatedDashboard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.cpp
*********************************************************************/
