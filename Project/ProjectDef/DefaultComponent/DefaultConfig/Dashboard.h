/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Dashboard
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/

#ifndef Dashboard_H
#define Dashboard_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## link itsDisplay
class Display;

//## link itsLed
class Led;

//## link itsTPMS
class TPMS;

//## package Architecture

//## class Dashboard
class Dashboard {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDashboard;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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
    Rhp_int32_t getItsLed(void) const;
    
    //## auto_generated
    void addItsLed(Led* const p_Led);
    
    //## auto_generated
    void removeItsLed(Led* p_Led);
    
    //## auto_generated
    void clearItsLed(void);
    
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
    
    Led* itsLed[5];		//## link itsLed
    
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
    void _addItsLed(Led* const p_Led);
    
    //## auto_generated
    void _removeItsLed(Led* const p_Led);
    
    //## auto_generated
    void _clearItsLed(void);
    
    //## auto_generated
    void __setItsTPMS(TPMS* const p_TPMS);
    
    //## auto_generated
    void _setItsTPMS(TPMS* const p_TPMS);
    
    //## auto_generated
    void _clearItsTPMS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDashboard : virtual public AOMInstance {
    DECLARE_META(Dashboard, OMAnimatedDashboard)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Dashboard.h
*********************************************************************/
