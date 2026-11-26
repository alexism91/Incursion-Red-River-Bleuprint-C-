#include "IRRGraphCondition.h"

UIRRGraphCondition::UIRRGraphCondition() {
}

FText UIRRGraphCondition::GetConditionDescription_Implementation() const {
    return FText::GetEmpty();
}

bool UIRRGraphCondition::EvaluateCondition_Implementation(UIRRMissionComponent* MissionComp, UObject* Payload, FText& ErrorMessage) {
    return false;
}


