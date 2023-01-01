/*********************************************************************
	Rhapsody	: 9.0 
	Login		: gebruiker
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowerSouceCar
//!	Generated Date	: Wed, 21, Dec 2022  
	File Path	: DefaultComponent\DefaultConfig\PowerSouceCar.h
*********************************************************************/

#ifndef PowerSouceCar_H
#define PowerSouceCar_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## package Default

//## class PowerSouceCar
class PowerSouceCar : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPowerSouceCar;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit PowerSouceCar(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~PowerSouceCar(void);
    
    ////    Operations    ////
    
    //## operation SwitchLightOff()
    virtual void SwitchLightOff(void);
    
    //## operation SwitchLightOn()
    virtual void SwitchLightOn(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // On:
    //## statechart_method
    inline RhpBoolean On_IN(void) const;
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum PowerSouceCar_Enum {
        OMNonState = 0,
        On = 1,
        Off = 2
    };
//#]

private :

//#[ ignore
    PowerSouceCar_Enum rootState_subState;
    
    PowerSouceCar_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPowerSouceCar : virtual public AOMInstance {
    DECLARE_REACTIVE_META(PowerSouceCar, OMAnimatedPowerSouceCar)
    
    ////    Framework operations    ////
    
public :

    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean PowerSouceCar::rootState_IN(void) const {
    return true;
}

inline RhpBoolean PowerSouceCar::On_IN(void) const {
    return rootState_subState == On;
}

inline RhpBoolean PowerSouceCar::Off_IN(void) const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PowerSouceCar.h
*********************************************************************/
