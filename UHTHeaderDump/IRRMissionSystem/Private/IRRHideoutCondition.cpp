#include "IRRHideoutCondition.h"

UIRRHideoutCondition::UIRRHideoutCondition() {
}

FText UIRRHideoutCondition::GetConditionDescription_Implementation() const {
    return FText::GetEmpty();
}

bool UIRRHideoutCondition::EvaluateCondition_Implementation(UIRRHideoutUnitComponent* Unit) {
    return false;
}

void UIRRHideoutCondition::ClickCondition_Implementation(UIRRHideoutUnitComponent* Unit) {
}


