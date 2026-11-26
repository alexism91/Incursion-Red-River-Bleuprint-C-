#include "IRRAIBaseControllerComponent.h"

UIRRAIBaseControllerComponent::UIRRAIBaseControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UIRRAITargetTracker* UIRRAIBaseControllerComponent::GetTargetTracker() const {
    return NULL;
}

UIRRAITarget* UIRRAIBaseControllerComponent::GetCurrentTarget() const {
    return NULL;
}

AIRRAIBaseController* UIRRAIBaseControllerComponent::GetAIController() const {
    return NULL;
}

UGameplayAbilityComponent* UIRRAIBaseControllerComponent::GetAbilityComponent() const {
    return NULL;
}


