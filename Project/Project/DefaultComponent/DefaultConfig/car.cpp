/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: car
//!	Generated Date	: Fri, 10, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\car.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "car.h"
//## link itsGPS
#include "GPS.h"
//#[ ignore
#define Default_car_car_SERIALIZE OM_NO_OP

#define Default_car_accelerate_SERIALIZE OM_NO_OP

#define Default_car_brake_SERIALIZE OM_NO_OP

#define Default_car_closeDoor_SERIALIZE OM_NO_OP

#define Default_car_lockCar_SERIALIZE OM_NO_OP

#define Default_car_openDoor_SERIALIZE OM_NO_OP

#define Default_car_unlockCar_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class car
//#[ ignore
car::CarActivityOfCar::ActionEvntStartCarInActivityCarActivityOfCar::ActionEvntStartCarInActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, IOxfEvent::ID eventId, car& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> car::CarActivityOfCar::ActionEvntStartCarInActivityCarActivityOfCar::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionEvntStartCarInActivityCarActivityOfCar();
}

void car::CarActivityOfCar::ActionEvntStartCarInActivityCarActivityOfCar::acceptEventData(void) {
    mContext->delegatedAcceptEventDataFromActionEvntStartCarInActivityCarActivityOfCar();
}

car::CarActivityOfCar::ActionCalloperation_2InActivityCarActivityOfCar::ActionCalloperation_2InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> car::CarActivityOfCar::ActionCalloperation_2InActivityCarActivityOfCar::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_2InActivityCarActivityOfCar();
}

void car::CarActivityOfCar::ActionCalloperation_2InActivityCarActivityOfCar::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_2InActivityCarActivityOfCar();
}

car::CarActivityOfCar::ActionCalloperation_3InActivityCarActivityOfCar::ActionCalloperation_3InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> car::CarActivityOfCar::ActionCalloperation_3InActivityCarActivityOfCar::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_3InActivityCarActivityOfCar();
}

void car::CarActivityOfCar::ActionCalloperation_3InActivityCarActivityOfCar::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_3InActivityCarActivityOfCar();
}

car::CarActivityOfCar::ActionActivityfinal_7InActivityCarActivityOfCar::ActionActivityfinal_7InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> car::CarActivityOfCar::ActionActivityfinal_7InActivityCarActivityOfCar::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_7InActivityCarActivityOfCar();
}

car::CarActivityOfCar::ActionAction_8InActivityCarActivityOfCar::ActionAction_8InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> car::CarActivityOfCar::ActionAction_8InActivityCarActivityOfCar::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_8InActivityCarActivityOfCar();
}

void car::CarActivityOfCar::ActionAction_8InActivityCarActivityOfCar::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_8InActivityCarActivityOfCar();
}

car::CarActivityOfCar::ActionAction_9InActivityCarActivityOfCar::ActionAction_9InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> car::CarActivityOfCar::ActionAction_9InActivityCarActivityOfCar::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_9InActivityCarActivityOfCar();
}

void car::CarActivityOfCar::ActionAction_9InActivityCarActivityOfCar::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_9InActivityCarActivityOfCar();
}

car::CarActivityOfCar::ActionAction_10InActivityCarActivityOfCar::ActionAction_10InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> car::CarActivityOfCar::ActionAction_10InActivityCarActivityOfCar::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_10InActivityCarActivityOfCar();
}

void car::CarActivityOfCar::ActionAction_10InActivityCarActivityOfCar::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_10InActivityCarActivityOfCar();
}

car::CarActivityOfCar::ControlTestAccInActivityCarActivityOfCar::ControlTestAccInActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context) : OMDecisionNode(id, activity), mContext(&context) {
}

OMList<OMString> car::CarActivityOfCar::ControlTestAccInActivityCarActivityOfCar::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromControlTestAccInActivityCarActivityOfCar();
}

car::CarActivityOfCar::ControlMergenode_16InActivityCarActivityOfCar::ControlMergenode_16InActivityCarActivityOfCar(const OMString& id, CarActivityOfCar& activity, car& context) : OMMergeNode(id, activity), mContext(&context) {
}

OMList<OMString> car::CarActivityOfCar::ControlMergenode_16InActivityCarActivityOfCar::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromControlMergenode_16InActivityCarActivityOfCar();
}

car::CarActivityOfCar::CarActivityOfCar(car& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionEvntStartCarInActivityCarActivityOfCar* varEvntStartCar = new ActionEvntStartCarInActivityCarActivityOfCar("CarActivity:ROOT.evntStartCar", *this, evntStartCar_Default_id, *mContext);
    ActionCalloperation_2InActivityCarActivityOfCar* varCalloperation_2 = new ActionCalloperation_2InActivityCarActivityOfCar("CarActivity:ROOT.calloperation_2", *this, *mContext);
    ActionCalloperation_3InActivityCarActivityOfCar* varCalloperation_3 = new ActionCalloperation_3InActivityCarActivityOfCar("CarActivity:ROOT.calloperation_3", *this, *mContext);
    ActionActivityfinal_7InActivityCarActivityOfCar* varActivityfinal_7 = new ActionActivityfinal_7InActivityCarActivityOfCar("CarActivity:ROOT.activityfinal_7", *this, *mContext);
    ActionAction_8InActivityCarActivityOfCar* varAction_8 = new ActionAction_8InActivityCarActivityOfCar("CarActivity:ROOT.action_8", *this, *mContext);
    ActionAction_9InActivityCarActivityOfCar* varAction_9 = new ActionAction_9InActivityCarActivityOfCar("CarActivity:ROOT.action_9", *this, *mContext);
    ActionAction_10InActivityCarActivityOfCar* varAction_10 = new ActionAction_10InActivityCarActivityOfCar("CarActivity:ROOT.action_10", *this, *mContext);
    ControlTestAccInActivityCarActivityOfCar* varTestAcc = new ControlTestAccInActivityCarActivityOfCar("CarActivity:ROOT.TestAcc", *this, *mContext);
    ControlMergenode_16InActivityCarActivityOfCar* varMergenode_16 = new ControlMergenode_16InActivityCarActivityOfCar("CarActivity:ROOT.mergenode_16", *this, *mContext);
    OMInitialAction* varInitialNode8 = new OMInitialAction("CarActivity:8", *this);
    
    // Setup flows
    new OMControlFlow("CarActivity:0", *this, *varEvntStartCar, *varCalloperation_2);
    new OMControlFlow("CarActivity:1", *this, *varCalloperation_2, *varCalloperation_3);
    new OMControlFlow("CarActivity:2", *this, *varCalloperation_3, *varTestAcc);
    new OMControlFlow("CarActivity:3", *this, *varTestAcc, *varAction_9);
    new OMControlFlow("CarActivity:4", *this, *varTestAcc, *varAction_10);
    new OMControlFlow("CarActivity:5", *this, *varAction_10, *varMergenode_16);
    new OMControlFlow("CarActivity:6", *this, *varAction_9, *varMergenode_16);
    new OMControlFlow("CarActivity:7", *this, *varMergenode_16, *varActivityfinal_7);
    new OMControlFlow("CarActivity:8", *this, *varInitialNode8, *varAction_8);
    new OMControlFlow("CarActivity:9", *this, *varAction_8, *varEvntStartCar);
}
//#]

car::car(void) : acceleration(0.0), state(false), itsGPS(NULL) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(car, car(), 0, Default_car_car_SERIALIZE);
}

car::~car(void) {
    NOTIFY_DESTRUCTOR(~car, true);
    cleanUpRelations();
}

void car::accelerate(void) {
    NOTIFY_OPERATION(accelerate, accelerate(), 0, Default_car_accelerate_SERIALIZE);
    //#[ operation accelerate()
    std::cout<<"Car : Accelerate()\n";
    //#]
}

void car::brake(void) {
    NOTIFY_OPERATION(brake, brake(), 0, Default_car_brake_SERIALIZE);
    //#[ operation brake()
    std::cout<<"Car : Brake()\n";
    //#]
}

void car::closeDoor(void) {
    NOTIFY_OPERATION(closeDoor, closeDoor(), 0, Default_car_closeDoor_SERIALIZE);
    //#[ operation closeDoor()
    //#]
}

void car::lockCar(void) {
    NOTIFY_OPERATION(lockCar, lockCar(), 0, Default_car_lockCar_SERIALIZE);
    //#[ operation lockCar()
    //#]
}

void car::openDoor(void) {
    NOTIFY_OPERATION(openDoor, openDoor(), 0, Default_car_openDoor_SERIALIZE);
    //#[ operation openDoor()
    //#]
}

void car::unlockCar(void) {
    NOTIFY_OPERATION(unlockCar, unlockCar(), 0, Default_car_unlockCar_SERIALIZE);
    //#[ operation unlockCar()
    //#]
}

//#[ ignore
OMActivity* car::createMainActivity(void) {
    return new CarActivityOfCar(*this);
}

void* car::getMe(void) {
    return this;
}
//#]

OMList<OMString> car::delegatedFilterPassableFlowsFromActionEvntStartCarInActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.evntStartCar
    OMList<OMString> ans;
    ans.add("CarActivity:0");
    return ans;
    //#]
}

void car::delegatedAcceptEventDataFromActionEvntStartCarInActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.evntStartCar
    //#]
}

OMList<OMString> car::delegatedFilterPassableFlowsFromActionCalloperation_2InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.calloperation_2
    OMList<OMString> ans;
    ans.add("CarActivity:1");
    return ans;
    //#]
}

void car::delegatedInvokeContextMethodFromActionCalloperation_2InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.calloperation_2
    accelerate();
    //#]
}

OMList<OMString> car::delegatedFilterPassableFlowsFromActionCalloperation_3InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.calloperation_3
    OMList<OMString> ans;
    ans.add("CarActivity:2");
    return ans;
    //#]
}

void car::delegatedInvokeContextMethodFromActionCalloperation_3InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.calloperation_3
    brake();
    //#]
}

OMList<OMString> car::delegatedFilterPassableFlowsFromActionActivityfinal_7InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.activityfinal_7
    OMList<OMString> ans;
    return ans;
    //#]
}

OMList<OMString> car::delegatedFilterPassableFlowsFromActionAction_8InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.action_8
    OMList<OMString> ans;
    ans.add("CarActivity:9");
    return ans;
    //#]
}

void car::delegatedInvokeContextMethodFromActionAction_8InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.action_8
    //#]
}

OMList<OMString> car::delegatedFilterPassableFlowsFromActionAction_9InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.action_9
    OMList<OMString> ans;
    ans.add("CarActivity:6");
    return ans;
    //#]
}

void car::delegatedInvokeContextMethodFromActionAction_9InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.action_9
    //#]
}

OMList<OMString> car::delegatedFilterPassableFlowsFromActionAction_10InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.action_10
    OMList<OMString> ans;
    ans.add("CarActivity:5");
    return ans;
    //#]
}

void car::delegatedInvokeContextMethodFromActionAction_10InActivityCarActivityOfCar(void) {
    //#[ activity_action CarActivity:ROOT.action_10
    //#]
}

OMList<OMString> car::delegatedFilterPassableFlowsFromControlTestAccInActivityCarActivityOfCar(void) {
    //#[ activity_control CarActivity:ROOT.TestAcc
    OMList<OMString> ans;
    if (acceleration <= 0.0) { ans.add("CarActivity:3"); }
    else { ans.add("CarActivity:4"); }
    return ans;
    //#]
}

OMList<OMString> car::delegatedFilterPassableFlowsFromControlMergenode_16InActivityCarActivityOfCar(void) {
    //#[ activity_control CarActivity:ROOT.mergenode_16
    OMList<OMString> ans;
    ans.add("CarActivity:7");
    return ans;
    //#]
}

const float car::getAcceleration(void) const {
    return acceleration;
}

void car::setAcceleration(const float p_acceleration) {
    acceleration = p_acceleration;
}

const RhpString car::getPlateName(void) const {
    return plateName;
}

void car::setPlateName(const RhpString p_plateName) {
    plateName = p_plateName;
}

const bool car::getState(void) const {
    return state;
}

void car::setState(const bool p_state) {
    state = p_state;
}

const Battery* car::getItsBattery(void) const {
    return &itsBattery;
}

const Engine* car::getItsEngine(void) const {
    return &itsEngine;
}

const GPS* car::getItsGPS(void) const {
    return itsGPS;
}

void car::setItsGPS(GPS* const p_GPS) {
    if(p_GPS != NULL)
        {
            p_GPS->_setItsCar(this);
        }
    _setItsGPS(p_GPS);
}

bool car::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = OMActivityContext::startBehavior();
        }
    return done;
}

void car::cleanUpRelations(void) {
    if(itsGPS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGPS");
            const car* p_car = itsGPS->getItsCar();
            if(p_car != NULL)
                {
                    itsGPS->__setItsCar(NULL);
                }
            itsGPS = NULL;
        }
}

void car::__setItsGPS(GPS* const p_GPS) {
    itsGPS = p_GPS;
    if(p_GPS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGPS", p_GPS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGPS");
        }
}

void car::_setItsGPS(GPS* const p_GPS) {
    if(itsGPS != NULL)
        {
            itsGPS->__setItsCar(NULL);
        }
    __setItsGPS(p_GPS);
}

void car::_clearItsGPS(void) {
    NOTIFY_RELATION_CLEARED("itsGPS");
    itsGPS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedcar::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("state", x2String(myReal->state));
    aomsAttributes->addAttribute("plateName", x2String(myReal->plateName));
    aomsAttributes->addAttribute("acceleration", x2String(myReal->acceleration));
}

void OMAnimatedcar::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEngine", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsEngine);
    aomsRelations->addRelation("itsBattery", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsBattery);
    aomsRelations->addRelation("itsGPS", false, true);
    if(myReal->itsGPS)
        {
            aomsRelations->ADD_ITEM(myReal->itsGPS);
        }
}
//#]

IMPLEMENT_ACTIVITY_META_P(car, Default, Default, false, OMAnimatedcar)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\car.cpp
*********************************************************************/
