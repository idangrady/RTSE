/*********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensor
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\Sensor.h
*********************************************************************/

#ifndef Sensor_H
#define Sensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "SystemContext.h"
//## link itsPowerSource
class PowerSource;

//## package SystemContext

//## actor Sensor
class Sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sensor(void);
    
    //## auto_generated
    ~Sensor(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const PowerSource* getItsPowerSource(void) const;
    
    //## auto_generated
    void setItsPowerSource(PowerSource* const p_PowerSource);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    PowerSource* itsPowerSource;		//## link itsPowerSource
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsPowerSource(PowerSource* const p_PowerSource);
    
    //## auto_generated
    void _setItsPowerSource(PowerSource* const p_PowerSource);
    
    //## auto_generated
    void _clearItsPowerSource(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensor : virtual public AOMInstance {
    DECLARE_META(Sensor, OMAnimatedSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensor.h
*********************************************************************/
