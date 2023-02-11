/*********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: car
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\car.h
*********************************************************************/

#ifndef car_H
#define car_H

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

//## package Default

//## class car
class car : virtual public OMActivityContext {
public :

    //## auto_generated
    class CarActivityOfCar;
    
//#[ ignore
    class CarActivityOfCar : virtual public OMActivity {
    public :
    
        class ActionEvntStartCarInActivityCarActivityOfCar : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionEvntStartCarInActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, IOxfEvent::ID eventId, car& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void acceptEventData(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            car* mContext;
        };
        
        class ActionCalloperation_2InActivityCarActivityOfCar : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_2InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            car* mContext;
        };
        
        class ActionCalloperation_3InActivityCarActivityOfCar : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_3InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            car* mContext;
        };
        
        class ActionActivityfinal_7InActivityCarActivityOfCar : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_7InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            car* mContext;
        };
        
        class ActionAction_8InActivityCarActivityOfCar : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_8InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            car* mContext;
        };
        
        class ActionAction_9InActivityCarActivityOfCar : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_9InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            car* mContext;
        };
        
        class ActionAction_10InActivityCarActivityOfCar : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_10InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            car* mContext;
        };
        
        class ControlTestAccInActivityCarActivityOfCar : virtual public OMDecisionNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlTestAccInActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            car* mContext;
        };
        
        class ControlMergenode_16InActivityCarActivityOfCar : virtual public OMMergeNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlMergenode_16InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            car* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        CarActivityOfCar(car& context);
        
        ////    Framework    ////
        
        car* mContext;
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedcar;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    car(void);
    
    //## auto_generated
    virtual ~car(void);
    
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
    
    //## operation unlockCar()
    virtual void unlockCar(void);
    
//#[ ignore
    virtual OMActivity* createMainActivity(void);
    
    virtual void* getMe(void);
//#]

    //## activity_action CarActivity:ROOT.evntStartCar
    OMList<OMString> delegatedFilterPassableFlowsFromActionEvntStartCarInActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.evntStartCar
    void delegatedAcceptEventDataFromActionEvntStartCarInActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.calloperation_2
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_2InActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.calloperation_2
    void delegatedInvokeContextMethodFromActionCalloperation_2InActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.calloperation_3
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_3InActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.calloperation_3
    void delegatedInvokeContextMethodFromActionCalloperation_3InActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.activityfinal_7
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_7InActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.action_8
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_8InActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.action_8
    void delegatedInvokeContextMethodFromActionAction_8InActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.action_9
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_9InActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.action_9
    void delegatedInvokeContextMethodFromActionAction_9InActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.action_10
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_10InActivityCarActivityOfCar(void);
    
    //## activity_action CarActivity:ROOT.action_10
    void delegatedInvokeContextMethodFromActionAction_10InActivityCarActivityOfCar(void);
    
    //## activity_control CarActivity:ROOT.TestAcc
    OMList<OMString> delegatedFilterPassableFlowsFromControlTestAccInActivityCarActivityOfCar(void);
    
    //## activity_control CarActivity:ROOT.mergenode_16
    OMList<OMString> delegatedFilterPassableFlowsFromControlMergenode_16InActivityCarActivityOfCar(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const float getAcceleration(void) const;
    
    //## auto_generated
    void setAcceleration(const float p_acceleration);
    
    //## auto_generated
    const RhpString getPlateName(void) const;
    
    //## auto_generated
    void setPlateName(const RhpString p_plateName);
    
    //## auto_generated
    const bool getState(void) const;
    
    //## auto_generated
    void setState(const bool p_state);
    
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
    
    RhpString plateName;		//## attribute plateName
    
    bool state;		//## attribute state
    
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
//#[ ignore
class OMAnimatedcar : virtual public AOMInstance {
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;

    DECLARE_ACTIVITY_META(car, OMAnimatedcar)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\car.h
*********************************************************************/
