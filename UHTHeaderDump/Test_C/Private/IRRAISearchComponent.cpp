#include "IRRAISearchComponent.h"

UIRRAISearchComponent::UIRRAISearchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSearchActive = false;
}

void UIRRAISearchComponent::OnBatchTraceComplete(const TArray<FBatchTraceResult>& Results, int32 ID) {
}

bool UIRRAISearchComponent::GetIsSearchActive() const {
    return false;
}


