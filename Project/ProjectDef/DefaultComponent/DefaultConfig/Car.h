/*********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/

#ifndef Car_H
#define Car_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## link itsTPMS
class TPMS;

//## link itsWheels
class Wheels;

//## package Architecture

//## class Car
class Car {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCar;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCar : virtual public AOMInstance {
    DECLARE_META(Car, OMAnimatedCar)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/
