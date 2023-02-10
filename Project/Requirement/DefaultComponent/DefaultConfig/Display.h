/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Display
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Display.h
*********************************************************************/

#ifndef Display_H
#define Display_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "Default.h"
//## link itsDashboard
class Dashboard;

//## package Default

//## class Display
class Display {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Display(void);
    
    //## auto_generated
    ~Display(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Dashboard* getItsDashboard(void) const;
    
    //## auto_generated
    void setItsDashboard(Dashboard* const p_Dashboard);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Dashboard* itsDashboard;		//## link itsDashboard
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    void _setItsDashboard(Dashboard* p_Dashboard);
    
    //## auto_generated
    void _clearItsDashboard(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Display.h
*********************************************************************/
