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
//## link itsCar
class Car;

//## link itsDashboard
class Dashboard;

//## link itsEnvironment
class Environment;

//## link itsPowerSource
class PowerSource;

//## link itsSensorActor
class SensorActor;

//#[ ignore
#define OMAnim_Architecture_TPMS_setPressureWheel1_int_ARGS_DECLARATION int p_pressureWheel1;

#define OMAnim_Architecture_TPMS_setPressureWheel2_int_ARGS_DECLARATION int p_pressureWheel2;

#define OMAnim_Architecture_TPMS_setPressureWheel3_int_ARGS_DECLARATION int p_pressureWheel3;

#define OMAnim_Architecture_TPMS_setPressureWheel4_int_ARGS_DECLARATION int p_pressureWheel4;

#define OMAnim_Architecture_TPMS_setPressureWheel5_int_ARGS_DECLARATION int p_pressureWheel5;

#define OMAnim_Architecture_TPMS_setTempWheel1_int_ARGS_DECLARATION int p_tempWheel1;

#define OMAnim_Architecture_TPMS_setTempWheel2_int_ARGS_DECLARATION int p_tempWheel2;

#define OMAnim_Architecture_TPMS_setTempWheel3_int_ARGS_DECLARATION int p_tempWheel3;

#define OMAnim_Architecture_TPMS_setTempWheel4_int_ARGS_DECLARATION int p_tempWheel4;

#define OMAnim_Architecture_TPMS_setTempWheel5_int_ARGS_DECLARATION int p_tempWheel5;
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
    const int getPressureWheel3(void) const;
    
    //## auto_generated
    void setPressureWheel3(const int p_pressureWheel3);
    
    //## auto_generated
    const int getPressureWheel4(void) const;
    
    //## auto_generated
    void setPressureWheel4(const int p_pressureWheel4);
    
    //## auto_generated
    const int getPressureWheel5(void) const;
    
    //## auto_generated
    void setPressureWheel5(const int p_pressureWheel5);
    
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
    const int getTempWheel3(void) const;
    
    //## auto_generated
    void setTempWheel3(const int p_tempWheel3);
    
    //## auto_generated
    const int getTempWheel4(void) const;
    
    //## auto_generated
    void setTempWheel4(const int p_tempWheel4);
    
    //## auto_generated
    const int getTempWheel5(void) const;
    
    //## auto_generated
    void setTempWheel5(const int p_tempWheel5);
    
    //## auto_generated
    const bool getWheel1Led(void) const;
    
    //## auto_generated
    void setWheel1Led(const bool p_wheel1Led);
    
    //## auto_generated
    const bool getWheel2Led(void) const;
    
    //## auto_generated
    void setWheel2Led(const bool p_wheel2Led);
    
    //## auto_generated
    const bool getWheel3Led(void) const;
    
    //## auto_generated
    void setWheel3Led(const bool p_wheel3Led);
    
    //## auto_generated
    const bool getWheel4Led(void) const;
    
    //## auto_generated
    void setWheel4Led(const bool p_wheel4Led);
    
    //## auto_generated
    const bool getWheel5Led(void) const;
    
    //## auto_generated
    void setWheel5Led(const bool p_wheel5Led);
    
    //## auto_generated
    const Car* getItsCar(void) const;
    
    //## auto_generated
    void setItsCar(Car* const p_Car);
    
    //## auto_generated
    const Dashboard* getItsDashboard(void) const;
    
    //## auto_generated
    void setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    const Environment* getItsEnvironment(void) const;
    
    //## auto_generated
    void setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    const PowerSource* getItsPowerSource(void) const;
    
    //## auto_generated
    void setItsPowerSource(PowerSource* const p_PowerSource);
    
    //## auto_generated
    const SensorActor* getItsSensorActor(void) const;
    
    //## auto_generated
    void setItsSensorActor(SensorActor* const p_SensorActor);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int pressureHighThreshold;		//## attribute pressureHighThreshold
    
    int pressureLowThreshold;		//## attribute pressureLowThreshold
    
    int pressureWheel1;		//## attribute pressureWheel1
    
    int pressureWheel2;		//## attribute pressureWheel2
    
    int pressureWheel3;		//## attribute pressureWheel3
    
    int pressureWheel4;		//## attribute pressureWheel4
    
    int pressureWheel5;		//## attribute pressureWheel5
    
    RhpBoolean systemOK;		//## attribute systemOK
    
    int tempHighThreshold;		//## attribute tempHighThreshold
    
    int tempLowThreshold;		//## attribute tempLowThreshold
    
    int tempWheel1;		//## attribute tempWheel1
    
    int tempWheel2;		//## attribute tempWheel2
    
    int tempWheel3;		//## attribute tempWheel3
    
    int tempWheel4;		//## attribute tempWheel4
    
    int tempWheel5;		//## attribute tempWheel5
    
    bool wheel1Led;		//## attribute wheel1Led
    
    bool wheel2Led;		//## attribute wheel2Led
    
    bool wheel3Led;		//## attribute wheel3Led
    
    bool wheel4Led;		//## attribute wheel4Led
    
    bool wheel5Led;		//## attribute wheel5Led
    
    ////    Relations and components    ////
    
    Car* itsCar;		//## link itsCar
    
    Dashboard* itsDashboard;		//## link itsDashboard
    
    Environment* itsEnvironment;		//## link itsEnvironment
    
    PowerSource* itsPowerSource;		//## link itsPowerSource
    
    SensorActor* itsSensorActor;		//## link itsSensorActor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCar(Car* const p_Car);
    
    //## auto_generated
    void _setItsCar(Car* const p_Car);
    
    //## auto_generated
    void _clearItsCar(void);
    
    //## auto_generated
    void __setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    void _setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    void _clearItsDashboard(void);
    
    //## auto_generated
    void __setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    void _setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    void _clearItsEnvironment(void);
    
    //## auto_generated
    void __setItsPowerSource(PowerSource* const p_PowerSource);
    
    //## auto_generated
    void _setItsPowerSource(PowerSource* const p_PowerSource);
    
    //## auto_generated
    void _clearItsPowerSource(void);
    
    //## auto_generated
    void __setItsSensorActor(SensorActor* const p_SensorActor);
    
    //## auto_generated
    void _setItsSensorActor(SensorActor* const p_SensorActor);
    
    //## auto_generated
    void _clearItsSensorActor(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // TurnOnLed5:
    //## statechart_method
    inline RhpBoolean TurnOnLed5_IN(void) const;
    
    // TurnOnLed4:
    //## statechart_method
    inline RhpBoolean TurnOnLed4_IN(void) const;
    
    // TurnOnLed3:
    //## statechart_method
    inline RhpBoolean TurnOnLed3_IN(void) const;
    
    // TurnOnLed2:
    //## statechart_method
    inline RhpBoolean TurnOnLed2_IN(void) const;
    
    // TurnOnLed1:
    //## statechart_method
    inline RhpBoolean TurnOnLed1_IN(void) const;
    
    // TurnOffLed5:
    //## statechart_method
    inline RhpBoolean TurnOffLed5_IN(void) const;
    
    // TurnOffLed4:
    //## statechart_method
    inline RhpBoolean TurnOffLed4_IN(void) const;
    
    // TurnOffLed3:
    //## statechart_method
    inline RhpBoolean TurnOffLed3_IN(void) const;
    
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
        TurnOnLed5 = 1,
        TurnOnLed4 = 2,
        TurnOnLed3 = 3,
        TurnOnLed2 = 4,
        TurnOnLed1 = 5,
        TurnOffLed5 = 6,
        TurnOffLed4 = 7,
        TurnOffLed3 = 8,
        TurnOffLed2 = 9,
        TurnOffLed1 = 10,
        SignalSense = 11,
        Off = 12
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

DECLARE_OPERATION_CLASS(Architecture_TPMS_setPressureWheel3_int)

DECLARE_OPERATION_CLASS(Architecture_TPMS_setPressureWheel4_int)

DECLARE_OPERATION_CLASS(Architecture_TPMS_setPressureWheel5_int)

DECLARE_OPERATION_CLASS(Architecture_TPMS_setTempWheel1_int)

DECLARE_OPERATION_CLASS(Architecture_TPMS_setTempWheel2_int)

DECLARE_OPERATION_CLASS(Architecture_TPMS_setTempWheel3_int)

DECLARE_OPERATION_CLASS(Architecture_TPMS_setTempWheel4_int)

DECLARE_OPERATION_CLASS(Architecture_TPMS_setTempWheel5_int)

//#[ ignore
class OMAnimatedTPMS : virtual public AOMInstance {
    DECLARE_REACTIVE_META(TPMS, OMAnimatedTPMS)
    
    DECLARE_META_OP(Architecture_TPMS_setPressureWheel1_int)
    
    DECLARE_META_OP(Architecture_TPMS_setPressureWheel2_int)
    
    DECLARE_META_OP(Architecture_TPMS_setPressureWheel3_int)
    
    DECLARE_META_OP(Architecture_TPMS_setPressureWheel4_int)
    
    DECLARE_META_OP(Architecture_TPMS_setPressureWheel5_int)
    
    DECLARE_META_OP(Architecture_TPMS_setTempWheel1_int)
    
    DECLARE_META_OP(Architecture_TPMS_setTempWheel2_int)
    
    DECLARE_META_OP(Architecture_TPMS_setTempWheel3_int)
    
    DECLARE_META_OP(Architecture_TPMS_setTempWheel4_int)
    
    DECLARE_META_OP(Architecture_TPMS_setTempWheel5_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOnLed5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOnLed4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOnLed3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOnLed2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOnLed1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOffLed5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOffLed4_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TurnOffLed3_serializeStates(AOMSState* aomsState) const;
    
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

inline RhpBoolean TPMS::TurnOnLed5_IN(void) const {
    return rootState_subState == TurnOnLed5;
}

inline RhpBoolean TPMS::TurnOnLed4_IN(void) const {
    return rootState_subState == TurnOnLed4;
}

inline RhpBoolean TPMS::TurnOnLed3_IN(void) const {
    return rootState_subState == TurnOnLed3;
}

inline RhpBoolean TPMS::TurnOnLed2_IN(void) const {
    return rootState_subState == TurnOnLed2;
}

inline RhpBoolean TPMS::TurnOnLed1_IN(void) const {
    return rootState_subState == TurnOnLed1;
}

inline RhpBoolean TPMS::TurnOffLed5_IN(void) const {
    return rootState_subState == TurnOffLed5;
}

inline RhpBoolean TPMS::TurnOffLed4_IN(void) const {
    return rootState_subState == TurnOffLed4;
}

inline RhpBoolean TPMS::TurnOffLed3_IN(void) const {
    return rootState_subState == TurnOffLed3;
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
