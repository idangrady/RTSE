/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/

#ifndef Car_H
#define Car_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "Default.h"
//## link itsTPMS
class TPMS;

//## link itsWheels
class Wheels;

//## package Default

//## class Car
class Car {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Car(void);
    
    //## auto_generated
    ~Car(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const TPMS* getItsTPMS(void) const;
    
    //## auto_generated
    void setItsTPMS(TPMS* const p_TPMS);
    
    //## auto_generated
    Rhp_int32_t getItsWheels(void) const;
    
    //## auto_generated
    void addItsWheels(Wheels* const p_Wheels);
    
    //## auto_generated
    void removeItsWheels(Wheels* p_Wheels);
    
    //## auto_generated
    void clearItsWheels(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    TPMS* itsTPMS;		//## link itsTPMS
    
    Wheels* itsWheels[5];		//## link itsWheels
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTPMS(TPMS* const p_TPMS);
    
    //## auto_generated
    void _setItsTPMS(TPMS* const p_TPMS);
    
    //## auto_generated
    void _clearItsTPMS(void);
    
    //## auto_generated
    void _addItsWheels(Wheels* const p_Wheels);
    
    //## auto_generated
    void _removeItsWheels(Wheels* const p_Wheels);
    
    //## auto_generated
    void _clearItsWheels(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/
