/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Led
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Led.h
*********************************************************************/

#ifndef Led_H
#define Led_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## link itsDashboard
class Dashboard;

//## package Architecture

//## class Led
class Led {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLed;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Led(void);
    
    //## auto_generated
    ~Led(void);
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLed : virtual public AOMInstance {
    DECLARE_META(Led, OMAnimatedLed)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Led.h
*********************************************************************/
