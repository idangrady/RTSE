/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TPMS
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\TPMS.h
*********************************************************************/

#ifndef TPMS_H
#define TPMS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include "Default.h"
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

//## link itsDriver
class Driver;

//## link itsEnvironment
class Environment;

//## link itsPowerSource
class PowerSource;

//## link itsSensorActor
class SensorActor;

//## package Default

//## class TPMS
class TPMS : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    explicit TPMS(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~TPMS(void);
    
    ////    Operations    ////
    
    //## operation SwitchOffLed(int)
    virtual void SwitchOffLed(int ledId = 0);
    
    //## operation SwitchOnLed(int)
    virtual void SwitchOnLed(int ledId = 0);
    
    //## operation ToggleCarEngine()
    virtual void ToggleCarEngine(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getDisplayPressureLed1(void) const;
    
    //## auto_generated
    void setDisplayPressureLed1(const int p_displayPressureLed1);
    
    //## auto_generated
    const int getDisplayPressureLed2(void) const;
    
    //## auto_generated
    void setDisplayPressureLed2(const int p_displayPressureLed2);
    
    //## auto_generated
    const int getDisplayPressureLed3(void) const;
    
    //## auto_generated
    void setDisplayPressureLed3(const int p_displayPressureLed3);
    
    //## auto_generated
    const int getDisplayPressureLed4(void) const;
    
    //## auto_generated
    void setDisplayPressureLed4(const int p_displayPressureLed4);
    
    //## auto_generated
    const int getDisplayPressureLed5(void) const;
    
    //## auto_generated
    void setDisplayPressureLed5(const int p_displayPressureLed5);
    
    //## auto_generated
    const int getDisplayTempLed1(void) const;
    
    //## auto_generated
    void setDisplayTempLed1(const int p_displayTempLed1);
    
    //## auto_generated
    const int getDisplayTempLed2(void) const;
    
    //## auto_generated
    void setDisplayTempLed2(const int p_displayTempLed2);
    
    //## auto_generated
    const int getDisplayTempLed3(void) const;
    
    //## auto_generated
    void setDisplayTempLed3(const int p_displayTempLed3);
    
    //## auto_generated
    const int getDisplayTempLed4(void) const;
    
    //## auto_generated
    void setDisplayTempLed4(const int p_displayTempLed4);
    
    //## auto_generated
    const int getDisplayTempLed5(void) const;
    
    //## auto_generated
    void setDisplayTempLed5(const int p_displayTempLed5);
    
    //## auto_generated
    const bool getTurnOnLed1(void) const;
    
    //## auto_generated
    void setTurnOnLed1(const bool p_turnOnLed1);
    
    //## auto_generated
    const bool getTurnOnLed2(void) const;
    
    //## auto_generated
    void setTurnOnLed2(const bool p_turnOnLed2);
    
    //## auto_generated
    const bool getTurnOnLed3(void) const;
    
    //## auto_generated
    void setTurnOnLed3(const bool p_turnOnLed3);
    
    //## auto_generated
    const bool getTurnOnLed4(void) const;
    
    //## auto_generated
    void setTurnOnLed4(const bool p_turnOnLed4);
    
    //## auto_generated
    const bool getTurnOnLed5(void) const;
    
    //## auto_generated
    void setTurnOnLed5(const bool p_turnOnLed5);
    
    //## auto_generated
    const Car* getItsCar(void) const;
    
    //## auto_generated
    void setItsCar(Car* const p_Car);
    
    //## auto_generated
    const Dashboard* getItsDashboard(void) const;
    
    //## auto_generated
    void setItsDashboard(Dashboard* const p_Dashboard);
    
    //## auto_generated
    const Driver* getItsDriver(void) const;
    
    //## auto_generated
    void setItsDriver(Driver* const p_Driver);
    
    //## auto_generated
    const Environment* getItsEnvironment(void) const;
    
    //## auto_generated
    void setItsEnvironment(Environment* const p_Environment);
    
    //## auto_generated
    const PowerSource* getItsPowerSource(void) const;
    
    //## auto_generated
    void setItsPowerSource(PowerSource* const p_PowerSource);
    
    //## auto_generated
    Rhp_int32_t getItsSensorActor(void) const;
    
    //## auto_generated
    void addItsSensorActor(SensorActor* const p_SensorActor);
    
    //## auto_generated
    void removeItsSensorActor(SensorActor* p_SensorActor);
    
    //## auto_generated
    void clearItsSensorActor(void);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int displayPressureLed1;		//## attribute displayPressureLed1
    
    int displayPressureLed2;		//## attribute displayPressureLed2
    
    int displayPressureLed3;		//## attribute displayPressureLed3
    
    int displayPressureLed4;		//## attribute displayPressureLed4
    
    int displayPressureLed5;		//## attribute displayPressureLed5
    
    int displayTempLed1;		//## attribute displayTempLed1
    
    int displayTempLed2;		//## attribute displayTempLed2
    
    int displayTempLed3;		//## attribute displayTempLed3
    
    int displayTempLed4;		//## attribute displayTempLed4
    
    int displayTempLed5;		//## attribute displayTempLed5
    
    bool turnOnLed1;		//## attribute turnOnLed1
    
    bool turnOnLed2;		//## attribute turnOnLed2
    
    bool turnOnLed3;		//## attribute turnOnLed3
    
    bool turnOnLed4;		//## attribute turnOnLed4
    
    bool turnOnLed5;		//## attribute turnOnLed5
    
    ////    Relations and components    ////
    
    Car* itsCar;		//## link itsCar
    
    Dashboard* itsDashboard;		//## link itsDashboard
    
    Driver* itsDriver;		//## link itsDriver
    
    Environment* itsEnvironment;		//## link itsEnvironment
    
    PowerSource* itsPowerSource;		//## link itsPowerSource
    
    SensorActor* itsSensorActor[5];		//## link itsSensorActor
    
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
    void __setItsDriver(Driver* const p_Driver);
    
    //## auto_generated
    void _setItsDriver(Driver* const p_Driver);
    
    //## auto_generated
    void _clearItsDriver(void);
    
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
    void _addItsSensorActor(SensorActor* const p_SensorActor);
    
    //## auto_generated
    void _removeItsSensorActor(SensorActor* const p_SensorActor);
    
    //## auto_generated
    void _clearItsSensorActor(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // On:
    //## statechart_method
    inline RhpBoolean On_IN(void) const;
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;
    
    // accepteventaction_4:
    //## statechart_method
    inline RhpBoolean accepteventaction_4_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum TPMS_Enum {
        OMNonState = 0,
        On = 1,
        Off = 2,
        accepteventaction_4 = 3
    };
//#]

private :

//#[ ignore
    TPMS_Enum rootState_subState;
    
    TPMS_Enum rootState_active;
//#]
};

inline RhpBoolean TPMS::rootState_IN(void) const {
    return true;
}

inline RhpBoolean TPMS::On_IN(void) const {
    return rootState_subState == On;
}

inline RhpBoolean TPMS::Off_IN(void) const {
    return rootState_subState == Off;
}

inline RhpBoolean TPMS::accepteventaction_4_IN(void) const {
    return rootState_subState == accepteventaction_4;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TPMS.h
*********************************************************************/
