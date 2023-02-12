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
#define OMAnim_Architecture_TPMS_setPressureWheel1_int_ARGS_DECLARATION int p_pressureWheel1;

#define OMAnim_Architecture_TPMS_setPressureWheel2_int_ARGS_DECLARATION int p_pressureWheel2;

#define OMAnim_Architecture_TPMS_setTempWheel1_int_ARGS_DECLARATION int p_tempWheel1;

#define OMAnim_Architecture_TPMS_setTempWheel2_int_ARGS_DECLARATION int p_tempWheel2;
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
    
    //## operation turnWheelLed(bool,int)
    virtual void turnWheelLed(bool value, int ledId);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getPressureHighThreshold(void) const;
    
    //## auto_generated
    void setPressureHighThreshold(const int p_pressureHighThreshold);
    
    //## auto_generated
    const int getPressureLowThreshold(void) const;
    
    //## auto_generated
    void setPressureLowThreshold(const int p_pressureLowThreshold);
    
    //## auto_generated
    const int getPressureWheel1(void) const;
    
    //## auto_generated
    void setPressureWheel1(const int p_pressureWheel1);
    
    //## auto_generated
    const int getPressureWheel2(void) const;
    
    //## auto_generated
    void setPressureWheel2(const int p_pressureWheel2);
    
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
    const int getTempWheel2(void) const;
    
    //## auto_generated
    void setTempWheel2(const int p_tempWheel2);
    
    //## auto_generated
    const int getWheel1Led(void) const;
    
    //## auto_generated
    void setWheel1Led(const int p_wheel1Led);
    
    //## auto_generated
    const int getWheel2Led(void) const;
    
    //## auto_generated
    void setWheel2Led(const int p_wheel2Led);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    ////    Attributes    ////

private :

    int pressureHighThreshold;		//## attribute pressureHighThreshold
    
    int pressureLowThreshold;		//## attribute pressureLowThreshold
    
    int pressureWheel1;		//## attribute pressureWheel1
    
    int pressureWheel2;		//## attribute pressureWheel2
    
    RhpBoolean systemOK;		//## attribute systemOK
    
    int tempHighThreshold;		//## attribute tempHighThreshold
    
    int tempLowThreshold;		//## attribute tempLowThreshold
    
    int tempWheel1;		//## attribute tempWheel1
    
    int tempWheel2;		//## attribute tempWheel2
    
    int wheel1Led;		//## attribute wheel1Led
    
    int wheel2Led;		//## attribute wheel2Led
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // TurnOnLed2:
    //## statechart_method
    inline RhpBoolean TurnOnLed2_IN(void) const;
    
    // TurnOnLed1:
    //## statechart_method
    inline RhpBoolean TurnOnLed1_IN(void) const;
    
    // TurnOffLed2:
    //## statechart_method
    inline RhpBoolean TurnOffLed2_IN(void) const;
    
    // TurnOffLed1:
    //## statechart_method
    inline RhpBoolean TurnOffLed1_IN(void) const;
    
    // SignalSense:
    //## statechart_method
    inline RhpBoolean SignalSense_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus SignalSense_handleEvent(void);
    
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
        TurnOnLed2 = 1,
        TurnOnLed1 = 2,
        TurnOffLed2 = 3,
        TurnOffLed1 = 4,
        SignalSense = 5,
        Off = 6
    };
//#]

private :

//#[ ignore
    TPMS_Enum rootState_subState;
    
    TPMS_Enum rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Architecture_TPMS_setPressureWheel1_int)

DECLARE_OPERATION_CLASS(Architecture_TPMS_setPressureWheel2_int)

DECLARE_OPERATION_CLASS(Architecture_TPMS_setTempWheel1_int)

DECLARE_OPERATION_CLASS(Architecture_TPMS_setTempWheel2_int)

//#[ ignore
class OMAnimatedTPMS : virtual public AOMInstance {
    DECLARE_REACTIVE_META(TPMS, OMAnimatedTPMS)
    
    DECLARE_META_OP(Architecture_TPMS_setPressureWheel1_int)
    
    DECLARE_META_OP(Architecture_TPMS_setPressureWheel2_int)
    
    DECLARE_META_OP(Architecture_TPMS_setTempWheel1_int)
    
    DECLARE_META_OP(Architecture_TPMS_setTempWheel2_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOnLed2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOnLed1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOffLed2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOffLed1_serializeStates(AOMSState* aomsState) const;
    
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

inline RhpBoolean TPMS::TurnOnLed2_IN(void) const {
    return rootState_subState == TurnOnLed2;
}

inline RhpBoolean TPMS::TurnOnLed1_IN(void) const {
    return rootState_subState == TurnOnLed1;
}

inline RhpBoolean TPMS::TurnOffLed2_IN(void) const {
    return rootState_subState == TurnOffLed2;
}

inline RhpBoolean TPMS::TurnOffLed1_IN(void) const {
    return rootState_subState == TurnOffLed1;
}

inline RhpBoolean TPMS::SignalSense_IN(void) const {
    return rootState_subState == SignalSense;
}

inline RhpBoolean TPMS::Off_IN(void) const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TPMS.h
*********************************************************************/
