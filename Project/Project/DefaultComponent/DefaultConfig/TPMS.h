/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TPMS
//!	Generated Date	: Sat, 11, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\TPMS.h
*********************************************************************/

#ifndef TPMS_H
#define TPMS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//##   ignore
#include <simulation\OMActivityContext.h>
//## auto_generated
#include "Default.h"
//## classInstance itsBattery
#include "Battery.h"
//## classInstance itsEngine
#include "Engine.h"
//## link itsGPS
class GPS;

//#[ ignore
#define OMAnim_Default_TPMS_setPressureLed1_int_ARGS_DECLARATION int p_pressureLed1;

#define OMAnim_Default_TPMS_setTemperatureLed1_int_ARGS_DECLARATION int p_temperatureLed1;
//#]

//## package Default

//## class TPMS
class TPMS : virtual public OMActivityContext {
public :

    //## auto_generated
    class CarActivityOfTPMS;
    
//#[ ignore
    class CarActivityOfTPMS : virtual public OMActivity {
    public :
    
        class ActionEvntStartCarInActivityCarActivityOfTPMS : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionEvntStartCarInActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, IOxfEvent::ID eventId, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void acceptEventData(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        class ActionAction_24InActivityCarActivityOfTPMS : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_24InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        class ActionCalloperation_28InActivityCarActivityOfTPMS : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_28InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void setValue(int value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
            
            int value;
        };
        
        class ActionCalloperation_29InActivityCarActivityOfTPMS : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_29InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void setValue(int value);
            
            void serializeTokens(AOMSAttributes& tokens);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
            
            int value;
        };
        
        class ActionAction_35InActivityCarActivityOfTPMS : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_35InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        class ActionAction_36InActivityCarActivityOfTPMS : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_36InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        class ActionCalloperation_37InActivityCarActivityOfTPMS : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_37InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        class ActionCalloperation_38InActivityCarActivityOfTPMS : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_38InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        class ActionAction_39InActivityCarActivityOfTPMS : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_39InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        class ActionAction_40InActivityCarActivityOfTPMS : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_40InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        class ActionAction_41InActivityCarActivityOfTPMS : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_41InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        class ControlDecisionnode_107InActivityCarActivityOfTPMS : virtual public OMDecisionNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlDecisionnode_107InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        class ControlMergenode_116InActivityCarActivityOfTPMS : virtual public OMMergeNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlMergenode_116InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            TPMS* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        CarActivityOfTPMS(TPMS& context);
        
        ////    Framework    ////
        
        TPMS* mContext;
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTPMS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TPMS(void);
    
    //## auto_generated
    virtual ~TPMS(void);
    
    ////    Operations    ////
    
    //## operation accelerate()
    virtual void accelerate(void);
    
    //## operation brake()
    virtual void brake(void);
    
    //## operation closeDoor()
    virtual void closeDoor(void);
    
    //## operation lockCar()
    virtual void lockCar(void);
    
    //## operation openDoor()
    virtual void openDoor(void);
    
    //## operation setPressure1(int)
    virtual void setPressure1(int value);
    
    //## operation setTemperature1(int)
    virtual void setTemperature1(int value);
    
    //## operation turnOffLed1()
    virtual void turnOffLed1(void);
    
    //## operation turnOnLed1()
    virtual void turnOnLed1(void);
    
    //## operation unlockCar()
    virtual void unlockCar(void);
    
//#[ ignore
    virtual OMActivity* createMainActivity(void);
    
    virtual void* getMe(void);
//#]

    //## activity_action CarActivity:ROOT.evntStartCar
    OMList<OMString> delegatedFilterPassableFlowsFromActionEvntStartCarInActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.evntStartCar
    void delegatedAcceptEventDataFromActionEvntStartCarInActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_24
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_24InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_24
    void delegatedInvokeContextMethodFromActionAction_24InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.calloperation_28
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_28InActivityCarActivityOfTPMS(int value);
    
    //## activity_action CarActivity:ROOT.calloperation_28
    void delegatedInvokeContextMethodFromActionCalloperation_28InActivityCarActivityOfTPMS(int value);
    
    //## activity_action CarActivity:ROOT.calloperation_29
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_29InActivityCarActivityOfTPMS(int value);
    
    //## activity_action CarActivity:ROOT.calloperation_29
    void delegatedInvokeContextMethodFromActionCalloperation_29InActivityCarActivityOfTPMS(int value);
    
    //## activity_action CarActivity:ROOT.action_35
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_35InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_35
    void delegatedInvokeContextMethodFromActionAction_35InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_36
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_36InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_36
    void delegatedInvokeContextMethodFromActionAction_36InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.calloperation_37
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_37InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.calloperation_37
    void delegatedInvokeContextMethodFromActionCalloperation_37InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.calloperation_38
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_38InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.calloperation_38
    void delegatedInvokeContextMethodFromActionCalloperation_38InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_39
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_39InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_39
    void delegatedInvokeContextMethodFromActionAction_39InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_40
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_40InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_40
    void delegatedInvokeContextMethodFromActionAction_40InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_41
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_41InActivityCarActivityOfTPMS(void);
    
    //## activity_action CarActivity:ROOT.action_41
    void delegatedInvokeContextMethodFromActionAction_41InActivityCarActivityOfTPMS(void);
    
    //## activity_control CarActivity:ROOT.decisionnode_107
    OMList<OMString> delegatedFilterPassableFlowsFromControlDecisionnode_107InActivityCarActivityOfTPMS(void);
    
    //## activity_control CarActivity:ROOT.mergenode_116
    OMList<OMString> delegatedFilterPassableFlowsFromControlMergenode_116InActivityCarActivityOfTPMS(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const float getAcceleration(void) const;
    
    //## auto_generated
    void setAcceleration(const float p_acceleration);
    
    //## auto_generated
    const bool getCarStarted(void) const;
    
    //## auto_generated
    void setCarStarted(const bool p_carStarted);
    
    //## auto_generated
    const int getHighPressureThreshold(void) const;
    
    //## auto_generated
    void setHighPressureThreshold(const int p_highPressureThreshold);
    
    //## auto_generated
    const int getHighTempThreshold(void) const;
    
    //## auto_generated
    void setHighTempThreshold(const int p_highTempThreshold);
    
    //## auto_generated
    const bool getIssueLed1(void) const;
    
    //## auto_generated
    void setIssueLed1(const bool p_issueLed1);
    
    //## auto_generated
    const int getLowPressureThreshold(void) const;
    
    //## auto_generated
    void setLowPressureThreshold(const int p_lowPressureThreshold);
    
    //## auto_generated
    const int getLowTempThreshold(void) const;
    
    //## auto_generated
    void setLowTempThreshold(const int p_lowTempThreshold);
    
    //## auto_generated
    const RhpString getPlateName(void) const;
    
    //## auto_generated
    void setPlateName(const RhpString p_plateName);
    
    //## auto_generated
    const int getPressureLed1(void) const;
    
    //## auto_generated
    void setPressureLed1(const int p_pressureLed1);
    
    //## auto_generated
    const bool getState(void) const;
    
    //## auto_generated
    void setState(const bool p_state);
    
    //## auto_generated
    const int getTemperatureLed1(void) const;
    
    //## auto_generated
    void setTemperatureLed1(const int p_temperatureLed1);
    
    //## auto_generated
    const Battery* getItsBattery(void) const;
    
    //## auto_generated
    const Engine* getItsEngine(void) const;
    
    //## auto_generated
    const GPS* getItsGPS(void) const;
    
    //## auto_generated
    void setItsGPS(GPS* const p_GPS);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    float acceleration;		//## attribute acceleration
    
    bool carStarted;		//## attribute carStarted
    
    int highPressureThreshold;		//## attribute highPressureThreshold
    
    int highTempThreshold;		//## attribute highTempThreshold
    
    bool issueLed1;		//## attribute issueLed1
    
    int lowPressureThreshold;		//## attribute lowPressureThreshold
    
    int lowTempThreshold;		//## attribute lowTempThreshold
    
    RhpString plateName;		//## attribute plateName
    
    int pressureLed1;		//## attribute pressureLed1
    
    bool state;		//## attribute state
    
    int temperatureLed1;		//## attribute temperatureLed1
    
    ////    Relations and components    ////
    
    Battery itsBattery;		//## classInstance itsBattery
    
    Engine itsEngine;		//## classInstance itsEngine
    
    GPS* itsGPS;		//## link itsGPS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsGPS(GPS* const p_GPS);
    
    //## auto_generated
    void _setItsGPS(GPS* const p_GPS);
    
    //## auto_generated
    void _clearItsGPS(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(Default_TPMS_setPressureLed1_int)

DECLARE_OPERATION_CLASS(Default_TPMS_setTemperatureLed1_int)

//#[ ignore
class OMAnimatedTPMS : virtual public AOMInstance {
    DECLARE_META_OP(Default_TPMS_setPressureLed1_int)
    
    DECLARE_META_OP(Default_TPMS_setTemperatureLed1_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;

    DECLARE_ACTIVITY_META(TPMS, OMAnimatedTPMS)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TPMS.h
*********************************************************************/
