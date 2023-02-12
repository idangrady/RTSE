/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TempSensor
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\TempSensor.h
*********************************************************************/

#ifndef TempSensor_H
#define TempSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## actor TempSensor
#include "SensorActor.h"
//## package Architecture

//## actor TempSensor
class TempSensor : public SensorActor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTempSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TempSensor(void);
    
    //## auto_generated
    ~TempSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTempSensor : public OMAnimatedSensorActor {
    DECLARE_META(TempSensor, OMAnimatedTempSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TempSensor.h
*********************************************************************/
