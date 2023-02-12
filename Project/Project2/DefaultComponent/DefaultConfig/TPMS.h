/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TPMS
//!	Generated Date	: Sun, 12, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\TPMS.h
*********************************************************************/

#ifndef TPMS_H
#define TPMS_H

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
//#[ ignore
#define OMAnim_Architecture_TPMS_setTempWheel1_int_ARGS_DECLARATION int p_tempWheel1;
//#]

//## package Architecture

//## class TPMS
class TPMS : public OMThread, public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTPMS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TPMS(void);
    
    //## auto_generated
    virtual ~TPMS(void);
    
    ////    Operations    ////
    
    //## operation turnWheel1Led(int)
    virtual void turnWheel1Led(int value);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getPressureWheel1(void) const;
    
    //## auto_generated
    void setPressureWheel1(const int p_pressureWheel1);
    
    //## auto_generated
    const RhpBoolean getSystemOK(void) const;
    
    //## auto_generated
    void setSystemOK(const RhpBoolean p_systemOK);
    
    //## auto_generated
    const int getTempHighThreshold(void) const;
    
    //## auto_generated
    void setTempHighThreshold(const int p_tempHighThreshold);
    
    //## auto_generated
    const int getTempLowThreshold(void) const;
    
    //## auto_generated
    void setTempLowThreshold(const int p_tempLowThreshold);
    
    //## auto_generated
    const int getTempWheel1(void) const;
    
    //## auto_generated
    void setTempWheel1(const int p_tempWheel1);
    
    //## auto_generated
    const int getWheel1Led(void) const;
    
    //## auto_generated
    void setWheel1Led(const int p_wheel1Led);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    int pressureWheel1;		//## attribute pressureWheel1
    
    RhpBoolean systemOK;		//## attribute systemOK
    
    int tempHighThreshold;		//## attribute tempHighThreshold
    
    int tempLowThreshold;		//## attribute tempLowThreshold
    
    int tempWheel1;		//## attribute tempWheel1
    
    int wheel1Led;		//## attribute wheel1Led
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // Wheel1LedChange:
    //## statechart_method
    inline RhpBoolean Wheel1LedChange_IN(void) const;
    
    //## statechart_method
    void Wheel1LedChange_entDef(void);
    
    //## statechart_method
    void Wheel1LedChange_exit(void);
    
    // TurnOnLed:
    //## statechart_method
    inline RhpBoolean TurnOnLed_IN(void) const;
    
    // TurnOffLed:
    //## statechart_method
    inline RhpBoolean TurnOffLed_IN(void) const;
    
    // SignalSense:
    //## statechart_method
    inline RhpBoolean SignalSense_IN(void) const;
    
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
    enum TPMS_Enum {
        OMNonState = 0,
        Wheel1LedChange = 1,
        TurnOnLed = 2,
        TurnOffLed = 3,
        SignalSense = 4,
        Off = 5
    };
//#]

private :

//#[ ignore
    TPMS_Enum rootState_subState;
    
    TPMS_Enum rootState_active;
    
    TPMS_Enum Wheel1LedChange_subState;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Architecture_TPMS_setTempWheel1_int)

//#[ ignore
class OMAnimatedTPMS : virtual public AOMInstance {
    DECLARE_REACTIVE_META(TPMS, OMAnimatedTPMS)
    
    DECLARE_META_OP(Architecture_TPMS_setTempWheel1_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Wheel1LedChange_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOnLed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOffLed_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SignalSense_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean TPMS::rootState_IN(void) const {
    return true;
}

inline RhpBoolean TPMS::Wheel1LedChange_IN(void) const {
    return rootState_subState == Wheel1LedChange;
}

inline RhpBoolean TPMS::TurnOnLed_IN(void) const {
    return Wheel1LedChange_subState == TurnOnLed;
}

inline RhpBoolean TPMS::TurnOffLed_IN(void) const {
    return Wheel1LedChange_subState == TurnOffLed;
}

inline RhpBoolean TPMS::SignalSense_IN(void) const {
    return Wheel1LedChange_subState == SignalSense;
}

inline RhpBoolean TPMS::Off_IN(void) const {
    return Wheel1LedChange_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TPMS.h
*********************************************************************/
