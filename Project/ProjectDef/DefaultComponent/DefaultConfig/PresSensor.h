/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PresSensor
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\PresSensor.h
*********************************************************************/

#ifndef PresSensor_H
#define PresSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## actor PresSensor
#include "SensorActor.h"
//## package Architecture

//## actor PresSensor
class PresSensor : public SensorActor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPresSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PresSensor(void);
    
    //## auto_generated
    ~PresSensor(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPresSensor : public OMAnimatedSensorActor {
    DECLARE_META(PresSensor, OMAnimatedPresSensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PresSensor.h
*********************************************************************/
