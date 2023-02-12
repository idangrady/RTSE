/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Wheels
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Wheels.h
*********************************************************************/

#ifndef Wheels_H
#define Wheels_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## link itsCar
class Car;

//## package Architecture

//## class Wheels
class Wheels {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWheels;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Wheels(void);
    
    //## auto_generated
    ~Wheels(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Car* getItsCar(void) const;
    
    //## auto_generated
    void setItsCar(Car* const p_Car);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Car* itsCar;		//## link itsCar
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCar(Car* const p_Car);
    
    //## auto_generated
    void _setItsCar(Car* p_Car);
    
    //## auto_generated
    void _clearItsCar(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWheels : virtual public AOMInstance {
    DECLARE_META(Wheels, OMAnimatedWheels)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Wheels.h
*********************************************************************/
