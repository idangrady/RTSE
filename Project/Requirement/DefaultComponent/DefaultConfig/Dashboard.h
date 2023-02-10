/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/

#ifndef Dashboard_H
#define Dashboard_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "Default.h"
//## link itsDisplay
class Display;

//## link itsLED
class LED;

//## link itsTPMS
class TPMS;

//## package Default

//## class Dashboard
class Dashboard {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Dashboard(void);
    
    //## auto_generated
    ~Dashboard(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    Rhp_int32_t getItsDisplay(void) const;
    
    //## auto_generated
    void addItsDisplay(Display* const p_Display);
    
    //## auto_generated
    void removeItsDisplay(Display* p_Display);
    
    //## auto_generated
    void clearItsDisplay(void);
    
    //## auto_generated
    Rhp_int32_t getItsLED(void) const;
    
    //## auto_generated
    void addItsLED(LED* const p_LED);
    
    //## auto_generated
    void removeItsLED(LED* p_LED);
    
    //## auto_generated
    void clearItsLED(void);
    
    //## auto_generated
    const TPMS* getItsTPMS(void) const;
    
    //## auto_generated
    void setItsTPMS(TPMS* const p_TPMS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Display* itsDisplay[10];		//## link itsDisplay
    
    LED* itsLED[5];		//## link itsLED
    
    TPMS* itsTPMS;		//## link itsTPMS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addItsDisplay(Display* const p_Display);
    
    //## auto_generated
    void _removeItsDisplay(Display* const p_Display);
    
    //## auto_generated
    void _clearItsDisplay(void);
    
    //## auto_generated
    void _addItsLED(LED* const p_LED);
    
    //## auto_generated
    void _removeItsLED(LED* const p_LED);
    
    //## auto_generated
    void _clearItsLED(void);
    
    //## auto_generated
    void __setItsTPMS(TPMS* const p_TPMS);
    
    //## auto_generated
    void _setItsTPMS(TPMS* const p_TPMS);
    
    //## auto_generated
    void _clearItsTPMS(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/
