#include "IRRSignificanceComponent.h"

UIRRSignificanceComponent::UIRRSignificanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRegister = true;
    this->bUseIsRendered = true;
    this->bUseDistance = true;
}

void UIRRSignificanceComponent::ToggleSignificanceComponent(bool bActivate) {
}

void UIRRSignificanceComponent::SetSignificanceLevels(const TMap<int32, float>& NewLevels) {
}

int32 UIRRSignificanceComponent::GetCurrentSignificanceLevel() const {
    return 0;
}


