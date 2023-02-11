/********************************************************************
	Rhapsody	: 9.0 
	Login		: rogar
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TPMS
//!	Generated Date	: Sat, 11, Feb 2023  
	File Path	: DefaultComponent\DefaultConfig\TPMS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TPMS.h"
//## link itsGPS
#include "GPS.h"
//#[ ignore
#define Default_TPMS_TPMS_SERIALIZE OM_NO_OP

#define Default_TPMS_accelerate_SERIALIZE OM_NO_OP

#define Default_TPMS_brake_SERIALIZE OM_NO_OP

#define Default_TPMS_closeDoor_SERIALIZE OM_NO_OP

#define Default_TPMS_lockCar_SERIALIZE OM_NO_OP

#define Default_TPMS_openDoor_SERIALIZE OM_NO_OP

#define Default_TPMS_setPressure1_SERIALIZE aomsmethod->addAttribute("value", x2String(value));

#define Default_TPMS_setTemperature1_SERIALIZE aomsmethod->addAttribute("value", x2String(value));

#define Default_TPMS_turnOffLed1_SERIALIZE OM_NO_OP

#define Default_TPMS_turnOnLed1_SERIALIZE OM_NO_OP

#define Default_TPMS_unlockCar_SERIALIZE OM_NO_OP

#define OMAnim_Default_TPMS_setPressureLed1_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_pressureLed1)

#define OMAnim_Default_TPMS_setPressureLed1_int_SERIALIZE_RET_VAL

#define OMAnim_Default_TPMS_setTemperatureLed1_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_temperatureLed1)

#define OMAnim_Default_TPMS_setTemperatureLed1_int_SERIALIZE_RET_VAL
//#]

//## package Default

//## class TPMS
//#[ ignore
TPMS::CarActivityOfTPMS::ActionEvntStartCarInActivityCarActivityOfTPMS::ActionEvntStartCarInActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, IOxfEvent::ID eventId, TPMS& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionEvntStartCarInActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionEvntStartCarInActivityCarActivityOfTPMS();
}

void TPMS::CarActivityOfTPMS::ActionEvntStartCarInActivityCarActivityOfTPMS::acceptEventData(void) {
    mContext->delegatedAcceptEventDataFromActionEvntStartCarInActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::ActionAction_24InActivityCarActivityOfTPMS::ActionAction_24InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionAction_24InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_24InActivityCarActivityOfTPMS();
}

void TPMS::CarActivityOfTPMS::ActionAction_24InActivityCarActivityOfTPMS::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_24InActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::ActionCalloperation_28InActivityCarActivityOfTPMS::ActionCalloperation_28InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionCalloperation_28InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_28InActivityCarActivityOfTPMS(value);
}

void TPMS::CarActivityOfTPMS::ActionCalloperation_28InActivityCarActivityOfTPMS::setValue(int value) {
    this->value = value;
}

void TPMS::CarActivityOfTPMS::ActionCalloperation_28InActivityCarActivityOfTPMS::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("value", x2String(value));
}

void TPMS::CarActivityOfTPMS::ActionCalloperation_28InActivityCarActivityOfTPMS::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_28InActivityCarActivityOfTPMS(value);
}

TPMS::CarActivityOfTPMS::ActionCalloperation_29InActivityCarActivityOfTPMS::ActionCalloperation_29InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionCalloperation_29InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_29InActivityCarActivityOfTPMS(value);
}

void TPMS::CarActivityOfTPMS::ActionCalloperation_29InActivityCarActivityOfTPMS::setValue(int value) {
    this->value = value;
}

void TPMS::CarActivityOfTPMS::ActionCalloperation_29InActivityCarActivityOfTPMS::serializeTokens(AOMSAttributes& tokens) {
    tokens.setCount(1);
    tokens.addAttribute("value", x2String(value));
}

void TPMS::CarActivityOfTPMS::ActionCalloperation_29InActivityCarActivityOfTPMS::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_29InActivityCarActivityOfTPMS(value);
}

TPMS::CarActivityOfTPMS::ActionAction_35InActivityCarActivityOfTPMS::ActionAction_35InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionAction_35InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_35InActivityCarActivityOfTPMS();
}

void TPMS::CarActivityOfTPMS::ActionAction_35InActivityCarActivityOfTPMS::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_35InActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::ActionAction_36InActivityCarActivityOfTPMS::ActionAction_36InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionAction_36InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_36InActivityCarActivityOfTPMS();
}

void TPMS::CarActivityOfTPMS::ActionAction_36InActivityCarActivityOfTPMS::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_36InActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::ActionCalloperation_37InActivityCarActivityOfTPMS::ActionCalloperation_37InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionCalloperation_37InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_37InActivityCarActivityOfTPMS();
}

void TPMS::CarActivityOfTPMS::ActionCalloperation_37InActivityCarActivityOfTPMS::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_37InActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::ActionCalloperation_38InActivityCarActivityOfTPMS::ActionCalloperation_38InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionCalloperation_38InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionCalloperation_38InActivityCarActivityOfTPMS();
}

void TPMS::CarActivityOfTPMS::ActionCalloperation_38InActivityCarActivityOfTPMS::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionCalloperation_38InActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::ActionAction_39InActivityCarActivityOfTPMS::ActionAction_39InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionAction_39InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_39InActivityCarActivityOfTPMS();
}

void TPMS::CarActivityOfTPMS::ActionAction_39InActivityCarActivityOfTPMS::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_39InActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::ActionAction_40InActivityCarActivityOfTPMS::ActionAction_40InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionAction_40InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_40InActivityCarActivityOfTPMS();
}

void TPMS::CarActivityOfTPMS::ActionAction_40InActivityCarActivityOfTPMS::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_40InActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::ActionAction_41InActivityCarActivityOfTPMS::ActionAction_41InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ActionAction_41InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromActionAction_41InActivityCarActivityOfTPMS();
}

void TPMS::CarActivityOfTPMS::ActionAction_41InActivityCarActivityOfTPMS::invokeContextMethod(void) {
    mContext->delegatedInvokeContextMethodFromActionAction_41InActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::ControlDecisionnode_107InActivityCarActivityOfTPMS::ControlDecisionnode_107InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMDecisionNode(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ControlDecisionnode_107InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromControlDecisionnode_107InActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::ControlMergenode_116InActivityCarActivityOfTPMS::ControlMergenode_116InActivityCarActivityOfTPMS(const OMString& id, CarActivityOfTPMS& activity, TPMS& context) : OMMergeNode(id, activity), mContext(&context) {
}

OMList<OMString> TPMS::CarActivityOfTPMS::ControlMergenode_116InActivityCarActivityOfTPMS::filterPassableFlows(void) {
    return mContext->delegatedFilterPassableFlowsFromControlMergenode_116InActivityCarActivityOfTPMS();
}

TPMS::CarActivityOfTPMS::CarActivityOfTPMS(TPMS& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionEvntStartCarInActivityCarActivityOfTPMS* varEvntStartCar = new ActionEvntStartCarInActivityCarActivityOfTPMS("CarActivity:ROOT.evntStartCar", *this, evntStartCar_Default_id, *mContext);
    ActionAction_24InActivityCarActivityOfTPMS* varAction_24 = new ActionAction_24InActivityCarActivityOfTPMS("CarActivity:ROOT.action_24", *this, *mContext);
    ActionCalloperation_28InActivityCarActivityOfTPMS* varCalloperation_28 = new ActionCalloperation_28InActivityCarActivityOfTPMS("CarActivity:ROOT.calloperation_28", *this, *mContext);
    ActionCalloperation_29InActivityCarActivityOfTPMS* varCalloperation_29 = new ActionCalloperation_29InActivityCarActivityOfTPMS("CarActivity:ROOT.calloperation_29", *this, *mContext);
    ActionAction_35InActivityCarActivityOfTPMS* varAction_35 = new ActionAction_35InActivityCarActivityOfTPMS("CarActivity:ROOT.action_35", *this, *mContext);
    ActionAction_36InActivityCarActivityOfTPMS* varAction_36 = new ActionAction_36InActivityCarActivityOfTPMS("CarActivity:ROOT.action_36", *this, *mContext);
    ActionCalloperation_37InActivityCarActivityOfTPMS* varCalloperation_37 = new ActionCalloperation_37InActivityCarActivityOfTPMS("CarActivity:ROOT.calloperation_37", *this, *mContext);
    ActionCalloperation_38InActivityCarActivityOfTPMS* varCalloperation_38 = new ActionCalloperation_38InActivityCarActivityOfTPMS("CarActivity:ROOT.calloperation_38", *this, *mContext);
    ActionAction_39InActivityCarActivityOfTPMS* varAction_39 = new ActionAction_39InActivityCarActivityOfTPMS("CarActivity:ROOT.action_39", *this, *mContext);
    ActionAction_40InActivityCarActivityOfTPMS* varAction_40 = new ActionAction_40InActivityCarActivityOfTPMS("CarActivity:ROOT.action_40", *this, *mContext);
    ActionAction_41InActivityCarActivityOfTPMS* varAction_41 = new ActionAction_41InActivityCarActivityOfTPMS("CarActivity:ROOT.action_41", *this, *mContext);
    ControlDecisionnode_107InActivityCarActivityOfTPMS* varDecisionnode_107 = new ControlDecisionnode_107InActivityCarActivityOfTPMS("CarActivity:ROOT.decisionnode_107", *this, *mContext);
    ControlMergenode_116InActivityCarActivityOfTPMS* varMergenode_116 = new ControlMergenode_116InActivityCarActivityOfTPMS("CarActivity:ROOT.mergenode_116", *this, *mContext);
    OMInitialAction* varInitialNode11 = new OMInitialAction("CarActivity:11", *this);
    
    // Setup flows
    new OMControlFlow("CarActivity:0", *this, *varAction_24, *varCalloperation_28);
    new OMControlFlow("CarActivity:1", *this, *varAction_24, *varCalloperation_29);
    new OMControlFlow("CarActivity:2", *this, *varDecisionnode_107, *varAction_35);
    new OMControlFlow("CarActivity:3", *this, *varDecisionnode_107, *varAction_36);
    new OMControlFlow("CarActivity:4", *this, *varMergenode_116, *varAction_24);
    new OMControlFlow("CarActivity:5", *this, *varAction_35, *varCalloperation_37);
    new OMControlFlow("CarActivity:6", *this, *varAction_36, *varCalloperation_38);
    new OMControlFlow("CarActivity:7", *this, *varCalloperation_37, *varMergenode_116);
    new OMControlFlow("CarActivity:8", *this, *varCalloperation_29, *varAction_39);
    new OMControlFlow("CarActivity:9", *this, *varAction_39, *varDecisionnode_107);
    new OMControlFlow("CarActivity:10", *this, *varCalloperation_28, *varAction_39);
    new OMControlFlow("CarActivity:11", *this, *varInitialNode11, *varAction_40);
    new OMControlFlow("CarActivity:12", *this, *varAction_40, *varEvntStartCar);
    new OMControlFlow("CarActivity:13", *this, *varEvntStartCar, *varAction_41);
    new OMControlFlow("CarActivity:14", *this, *varAction_41, *varAction_24);
}
//#]

TPMS::TPMS(void) : acceleration(0.0), carStarted(false), highPressureThreshold(30), highTempThreshold(50), issueLed1(false), lowPressureThreshold(20), lowTempThreshold(15), pressureLed1(25), state(false), temperatureLed1(25), itsGPS(NULL) {
    NOTIFY_ACTIVITY_CONSTRUCTOR(TPMS, TPMS(), 0, Default_TPMS_TPMS_SERIALIZE);
}

TPMS::~TPMS(void) {
    NOTIFY_DESTRUCTOR(~TPMS, true);
    cleanUpRelations();
}

void TPMS::accelerate(void) {
    NOTIFY_OPERATION(accelerate, accelerate(), 0, Default_TPMS_accelerate_SERIALIZE);
    //#[ operation accelerate()
    std::cout<<"Car : Accelerate()\n";
    //issueLed1 = true;
    //pressureLed1 += 5;
    //#]
}

void TPMS::brake(void) {
    NOTIFY_OPERATION(brake, brake(), 0, Default_TPMS_brake_SERIALIZE);
    //#[ operation brake()
    std::cout<<"Car : Brake()\n";
    //#]
}

void TPMS::closeDoor(void) {
    NOTIFY_OPERATION(closeDoor, closeDoor(), 0, Default_TPMS_closeDoor_SERIALIZE);
    //#[ operation closeDoor()
    //#]
}

void TPMS::lockCar(void) {
    NOTIFY_OPERATION(lockCar, lockCar(), 0, Default_TPMS_lockCar_SERIALIZE);
    //#[ operation lockCar()
    //#]
}

void TPMS::openDoor(void) {
    NOTIFY_OPERATION(openDoor, openDoor(), 0, Default_TPMS_openDoor_SERIALIZE);
    //#[ operation openDoor()
    //#]
}

void TPMS::setPressure1(int value) {
    NOTIFY_OPERATION(setPressure1, setPressure1(int), 1, Default_TPMS_setPressure1_SERIALIZE);
    //#[ operation setPressure1(int)
    pressureLed1 = value;
    //#]
}

void TPMS::setTemperature1(int value) {
    NOTIFY_OPERATION(setTemperature1, setTemperature1(int), 1, Default_TPMS_setTemperature1_SERIALIZE);
    //#[ operation setTemperature1(int)
    temperatureLed1 = value;
    //#]
}

void TPMS::turnOffLed1(void) {
    NOTIFY_OPERATION(turnOffLed1, turnOffLed1(), 0, Default_TPMS_turnOffLed1_SERIALIZE);
    //#[ operation turnOffLed1()
    issueLed1 = false;
    //#]
}

void TPMS::turnOnLed1(void) {
    NOTIFY_OPERATION(turnOnLed1, turnOnLed1(), 0, Default_TPMS_turnOnLed1_SERIALIZE);
    //#[ operation turnOnLed1()
    issueLed1 = true;
    //#]
}

void TPMS::unlockCar(void) {
    NOTIFY_OPERATION(unlockCar, unlockCar(), 0, Default_TPMS_unlockCar_SERIALIZE);
    //#[ operation unlockCar()
    //#]
}

//#[ ignore
OMActivity* TPMS::createMainActivity(void) {
    return new CarActivityOfTPMS(*this);
}

void* TPMS::getMe(void) {
    return this;
}
//#]

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionEvntStartCarInActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.evntStartCar
    OMList<OMString> ans;
    ans.add("CarActivity:13");
    return ans;
    //#]
}

void TPMS::delegatedAcceptEventDataFromActionEvntStartCarInActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.evntStartCar
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionAction_24InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_24
    OMList<OMString> ans;
    ans.add("CarActivity:0");
    ans.add("CarActivity:1");
    return ans;
    //#]
}

void TPMS::delegatedInvokeContextMethodFromActionAction_24InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_24
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionCalloperation_28InActivityCarActivityOfTPMS(int value) {
    //#[ activity_action CarActivity:ROOT.calloperation_28
    OMList<OMString> ans;
    ans.add("CarActivity:10");
    return ans;
    //#]
}

void TPMS::delegatedInvokeContextMethodFromActionCalloperation_28InActivityCarActivityOfTPMS(int value) {
    //#[ activity_action CarActivity:ROOT.calloperation_28
    setPressure1(value);
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionCalloperation_29InActivityCarActivityOfTPMS(int value) {
    //#[ activity_action CarActivity:ROOT.calloperation_29
    OMList<OMString> ans;
    ans.add("CarActivity:8");
    return ans;
    //#]
}

void TPMS::delegatedInvokeContextMethodFromActionCalloperation_29InActivityCarActivityOfTPMS(int value) {
    //#[ activity_action CarActivity:ROOT.calloperation_29
    setTemperature1(value);
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionAction_35InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_35
    OMList<OMString> ans;
    ans.add("CarActivity:5");
    return ans;
    //#]
}

void TPMS::delegatedInvokeContextMethodFromActionAction_35InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_35
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionAction_36InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_36
    OMList<OMString> ans;
    ans.add("CarActivity:6");
    return ans;
    //#]
}

void TPMS::delegatedInvokeContextMethodFromActionAction_36InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_36
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionCalloperation_37InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.calloperation_37
    OMList<OMString> ans;
    ans.add("CarActivity:7");
    return ans;
    //#]
}

void TPMS::delegatedInvokeContextMethodFromActionCalloperation_37InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.calloperation_37
    turnOnLed1();
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionCalloperation_38InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.calloperation_38
    OMList<OMString> ans;
    return ans;
    //#]
}

void TPMS::delegatedInvokeContextMethodFromActionCalloperation_38InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.calloperation_38
    turnOffLed1();
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionAction_39InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_39
    OMList<OMString> ans;
    ans.add("CarActivity:9");
    return ans;
    //#]
}

void TPMS::delegatedInvokeContextMethodFromActionAction_39InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_39
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionAction_40InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_40
    OMList<OMString> ans;
    ans.add("CarActivity:12");
    return ans;
    //#]
}

void TPMS::delegatedInvokeContextMethodFromActionAction_40InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_40
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromActionAction_41InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_41
    OMList<OMString> ans;
    ans.add("CarActivity:14");
    return ans;
    //#]
}

void TPMS::delegatedInvokeContextMethodFromActionAction_41InActivityCarActivityOfTPMS(void) {
    //#[ activity_action CarActivity:ROOT.action_41
    carStarted = true;
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromControlDecisionnode_107InActivityCarActivityOfTPMS(void) {
    //#[ activity_control CarActivity:ROOT.decisionnode_107
    OMList<OMString> ans;
    if ((pressureLed1 < lowPressureThreshold || pressureLed1 > highPressureThreshold) || (temperatureLed1 < lowTempThreshold || temperatureLed1 > highTempThreshold)) { ans.add("CarActivity:2"); }
    else { ans.add("CarActivity:3"); }
    return ans;
    //#]
}

OMList<OMString> TPMS::delegatedFilterPassableFlowsFromControlMergenode_116InActivityCarActivityOfTPMS(void) {
    //#[ activity_control CarActivity:ROOT.mergenode_116
    OMList<OMString> ans;
    ans.add("CarActivity:4");
    return ans;
    //#]
}

const float TPMS::getAcceleration(void) const {
    return acceleration;
}

void TPMS::setAcceleration(const float p_acceleration) {
    acceleration = p_acceleration;
}

const bool TPMS::getCarStarted(void) const {
    return carStarted;
}

void TPMS::setCarStarted(const bool p_carStarted) {
    carStarted = p_carStarted;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getHighPressureThreshold(void) const {
    return highPressureThreshold;
}

void TPMS::setHighPressureThreshold(const int p_highPressureThreshold) {
    highPressureThreshold = p_highPressureThreshold;
}

const int TPMS::getHighTempThreshold(void) const {
    return highTempThreshold;
}

void TPMS::setHighTempThreshold(const int p_highTempThreshold) {
    highTempThreshold = p_highTempThreshold;
}

const bool TPMS::getIssueLed1(void) const {
    return issueLed1;
}

void TPMS::setIssueLed1(const bool p_issueLed1) {
    issueLed1 = p_issueLed1;
    NOTIFY_SET_OPERATION;
}

const int TPMS::getLowPressureThreshold(void) const {
    return lowPressureThreshold;
}

void TPMS::setLowPressureThreshold(const int p_lowPressureThreshold) {
    lowPressureThreshold = p_lowPressureThreshold;
}

const int TPMS::getLowTempThreshold(void) const {
    return lowTempThreshold;
}

void TPMS::setLowTempThreshold(const int p_lowTempThreshold) {
    lowTempThreshold = p_lowTempThreshold;
}

const RhpString TPMS::getPlateName(void) const {
    return plateName;
}

void TPMS::setPlateName(const RhpString p_plateName) {
    plateName = p_plateName;
}

const int TPMS::getPressureLed1(void) const {
    return pressureLed1;
}

void TPMS::setPressureLed1(const int p_pressureLed1) {
    pressureLed1 = p_pressureLed1;
    NOTIFY_SET_OPERATION;
}

const bool TPMS::getState(void) const {
    return state;
}

void TPMS::setState(const bool p_state) {
    state = p_state;
}

const int TPMS::getTemperatureLed1(void) const {
    return temperatureLed1;
}

void TPMS::setTemperatureLed1(const int p_temperatureLed1) {
    temperatureLed1 = p_temperatureLed1;
    NOTIFY_SET_OPERATION;
}

const Battery* TPMS::getItsBattery(void) const {
    return &itsBattery;
}

const Engine* TPMS::getItsEngine(void) const {
    return &itsEngine;
}

const GPS* TPMS::getItsGPS(void) const {
    return itsGPS;
}

void TPMS::setItsGPS(GPS* const p_GPS) {
    if(p_GPS != NULL)
        {
            p_GPS->_setItsTPMS(this);
        }
    _setItsGPS(p_GPS);
}

bool TPMS::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = OMActivityContext::startBehavior();
        }
    return done;
}

void TPMS::cleanUpRelations(void) {
    if(itsGPS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGPS");
            const TPMS* p_TPMS = itsGPS->getItsTPMS();
            if(p_TPMS != NULL)
                {
                    itsGPS->__setItsTPMS(NULL);
                }
            itsGPS = NULL;
        }
}

void TPMS::__setItsGPS(GPS* const p_GPS) {
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

void TPMS::_setItsGPS(GPS* const p_GPS) {
    if(itsGPS != NULL)
        {
            itsGPS->__setItsTPMS(NULL);
        }
    __setItsGPS(p_GPS);
}

void TPMS::_clearItsGPS(void) {
    NOTIFY_RELATION_CLEARED("itsGPS");
    itsGPS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTPMS::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("state", x2String(myReal->state));
    aomsAttributes->addAttribute("plateName", x2String(myReal->plateName));
    aomsAttributes->addAttribute("acceleration", x2String(myReal->acceleration));
    aomsAttributes->addAttribute("issueLed1", x2String(myReal->issueLed1));
    aomsAttributes->addAttribute("temperatureLed1", x2String(myReal->temperatureLed1));
    aomsAttributes->addAttribute("pressureLed1", x2String(myReal->pressureLed1));
    aomsAttributes->addAttribute("lowTempThreshold", x2String(myReal->lowTempThreshold));
    aomsAttributes->addAttribute("highTempThreshold", x2String(myReal->highTempThreshold));
    aomsAttributes->addAttribute("lowPressureThreshold", x2String(myReal->lowPressureThreshold));
    aomsAttributes->addAttribute("highPressureThreshold", x2String(myReal->highPressureThreshold));
    aomsAttributes->addAttribute("carStarted", x2String(myReal->carStarted));
}

void OMAnimatedTPMS::serializeRelations(AOMSRelations* aomsRelations) const {
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

IMPLEMENT_ACTIVITY_META_P(TPMS, Default, Default, false, OMAnimatedTPMS)

IMPLEMENT_META_OP(OMAnimatedTPMS, Default_TPMS_setPressureLed1_int, "setPressureLed1", FALSE, "setPressureLed1(int)", 1)

IMPLEMENT_OP_CALL(Default_TPMS_setPressureLed1_int, TPMS, setPressureLed1(p_pressureLed1), NO_OP())

IMPLEMENT_META_OP(OMAnimatedTPMS, Default_TPMS_setTemperatureLed1_int, "setTemperatureLed1", FALSE, "setTemperatureLed1(int)", 1)

IMPLEMENT_OP_CALL(Default_TPMS_setTemperatureLed1_int, TPMS, setTemperatureLed1(p_temperatureLed1), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TPMS.cpp
*********************************************************************/
