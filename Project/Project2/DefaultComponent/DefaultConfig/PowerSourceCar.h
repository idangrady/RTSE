/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowerSourceCar
//!	Generated Date	: Wed, 21, Dec 2022  
	File Path	: DefaultComponent\DefaultConfig\PowerSourceCar.h
*********************************************************************/

#ifndef PowerSourceCar_H
#define PowerSourceCar_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Architecture.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## package Architecture

//## class PowerSourceCar
class PowerSourceCar : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPowerSourceCar;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit PowerSourceCar(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~PowerSourceCar(void);
    
    ////    Operations    ////
    
    //## operation indicateSystemFault()
    virtual void indicateSystemFault(void);
    
    //## operation runSystemTest()
    virtual void runSystemTest(void);
    
    //## operation switchLightOff()
    virtual void switchLightOff(void);
    
    //## operation switchLightOn()
    virtual void switchLightOn(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const RhpBoolean getSystemOK(void) const;
    
    //## auto_generated
    void setSystemOK(const RhpBoolean p_systemOK);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    RhpBoolean systemOK;		//## attribute systemOK
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // SystemFault:
    //## statechart_method
    inline RhpBoolean SystemFault_IN(void) const;
    
    // On:
    //## statechart_method
    inline RhpBoolean On_IN(void) const;
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;
    
    // CheckingSystemState:
    //## statechart_method
    inline RhpBoolean CheckingSystemState_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum PowerSourceCar_Enum {
        OMNonState = 0,
        SystemFault = 1,
        On = 2,
        Off = 3,
        CheckingSystemState = 4
    };
//#]

private :

//#[ ignore
    PowerSourceCar_Enum rootState_subState;
    
    PowerSourceCar_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPowerSourceCar : virtual public AOMInstance {
    DECLARE_REACTIVE_META(PowerSourceCar, OMAnimatedPowerSourceCar)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SystemFault_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CheckingSystemState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean PowerSourceCar::rootState_IN(void) const {
    return true;
}

inline RhpBoolean PowerSourceCar::SystemFault_IN(void) const {
    return rootState_subState == SystemFault;
}

inline RhpBoolean PowerSourceCar::On_IN(void) const {
    return rootState_subState == On;
}

inline RhpBoolean PowerSourceCar::Off_IN(void) const {
    return rootState_subState == Off;
}

inline RhpBoolean PowerSourceCar::CheckingSystemState_IN(void) const {
    return rootState_subState == CheckingSystemState;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PowerSourceCar.h
*********************************************************************/
