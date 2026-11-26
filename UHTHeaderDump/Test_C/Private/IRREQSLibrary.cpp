#include "IRREQSLibrary.h"

UIRREQSLibrary::UIRREQSLibrary() {
}

UIRRAITargetTracker* UIRREQSLibrary::GetTargetTrackerComponent(UObject* QueryOwner) {
    return NULL;
}

UIRRAITarget* UIRREQSLibrary::GetCurrentTarget(UObject* QueryOwner) {
    return NULL;
}

UIRRAIBehaviorComponent* UIRREQSLibrary::GetBehaviorComponent(UObject* QueryOwner) {
    return NULL;
}

AIRRAIBaseController* UIRREQSLibrary::GetBaseController(UObject* QueryOwner) {
    return NULL;
}

bool UIRREQSLibrary::GetAllTargetsByState(UObject* QueryOwner, TArray<UIRRAITarget*>& Targets, const EIRRAITargetArrayType TargetState) {
    return false;
}


