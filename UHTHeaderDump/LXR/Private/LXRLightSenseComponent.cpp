#include "LXRLightSenseComponent.h"

ULXRLightSenseComponent::ULXRLightSenseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SenseTraceTransform = ETraceTransform::None;
    this->SenseCalculationType = ETaskProcessType::Multithread;
    this->SenseCheckQuality = ECheckQuality::Medium;
    this->CheckRate = 0.03f;
    this->TraceTargetBatchCount = 30;
    this->TargetsRequired = 5.00f;
    this->TraceChannel = ECC_Visibility;
    this->CombinedLXRIntensity = 0.00f;
    this->MethodObject = NULL;
}

TArray<AActor*> ULXRLightSenseComponent::GetSensedActors() const {
    return TArray<AActor*>();
}


