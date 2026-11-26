#include "GameplayCameraComponentBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CineCameraComponent -FallbackName=CineCameraComponent

UGameplayCameraComponentBase::UGameplayCameraComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->AutoActivateForPlayer = EAutoReceiveInput::Disabled;
    this->bSetControlRotationWhenViewTarget = false;
    this->OutputCameraComponent = CreateDefaultSubobject<UCineCameraComponent>(TEXT("OutputCameraComponent"));
}

UCineCameraComponent* UGameplayCameraComponentBase::GetOutputCameraComponent() const {
    return NULL;
}

FBlueprintCameraEvaluationDataRef UGameplayCameraComponentBase::GetInitialResult() const {
    return FBlueprintCameraEvaluationDataRef{};
}

FBlueprintCameraEvaluationDataRef UGameplayCameraComponentBase::GetConditionalResult(ECameraEvaluationDataCondition Condition) const {
    return FBlueprintCameraEvaluationDataRef{};
}

void UGameplayCameraComponentBase::DeactivateCamera(bool bImmediately) {
}

void UGameplayCameraComponentBase::ActivateCameraForPlayerIndex(int32 PlayerIndex, bool bSetAsViewTarget, EGameplayCameraComponentActivationMode ActivationMode) {
}

void UGameplayCameraComponentBase::ActivateCameraForPlayerController(APlayerController* PlayerController, bool bSetAsViewTarget, EGameplayCameraComponentActivationMode ActivationMode) {
}


