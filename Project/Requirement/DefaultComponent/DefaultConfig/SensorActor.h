/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorActor
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\SensorActor.h
*********************************************************************/

#ifndef SensorActor_H
#define SensorActor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "Default.h"
//## link itsTPMS
class TPMS;

//## package Default

//## actor SensorActor
class SensorActor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SensorActor(void);
    
    //## auto_generated
    ~SensorActor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const TPMS* getItsTPMS(void) const;
    
    //## auto_generated
    void setItsTPMS(TPMS* const p_TPMS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    TPMS* itsTPMS;		//## link itsTPMS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTPMS(TPMS* const p_TPMS);
    
    //## auto_generated
    void _setItsTPMS(TPMS* p_TPMS);
    
    //## auto_generated
    void _clearItsTPMS(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorActor.h
*********************************************************************/
