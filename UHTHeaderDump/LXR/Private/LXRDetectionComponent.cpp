#include "LXRDetectionComponent.h"
#include "Net/UnrealNetwork.h"

ULXRDetectionComponent::ULXRDetectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUserServerAuthority = false;
    this->bUseClientSideCalculation = false;
    this->IntensityUpdateTolerance = 0.10f;
    this->ColorUpdateTolerance = 0.10f;
    this->bDebugOctreeLights = false;
    this->bDebugVectorArray = false;
    this->SocketPreset = ESocketPreset::UE5_Mannequin;
    this->bAddToSourceWhenDetected = false;
    this->RelevancyCheckQuality = ECheckQuality::Medium;
    this->RelevancyTargetType = ETraceTarget::ActorLocation;
    this->RelevancyCheckType = ERelevancyCheckType::Smart;
    this->RelevancySmartDistanceMin = 1000.00f;
    this->RelevancySmartDistanceMax = 2500.00f;
    this->DirectionalLightTraceDistance = 10000.00f;
    this->LuxValueSmoothSpeed = 50.00f;
    this->LuxReturnType = ELuxReturnType::MaxOfPassedTargets;
    this->GetWeightedAverage = false;
    this->WeightToUseAboveMinLuxThreshold = true;
    this->WeightedMinLuxThreshold = 1.00f;
    this->MinLuxThreshold = 1.00f;
    this->MinimumCoveragePercent = 30.00f;
    this->LowCoveragePenaltyMultiplier = 0.50f;
    this->RelevancySmartCheckRateDivider = 1.00f;
    this->RelevancyCheckRate = 0.05f;
    this->RelevancyOctreeCheckBoundsSize = 2000;
    this->RelevancyLightBatchCount = 100;
    this->TargetsRequired = 0.50f;
    this->VisibilityCheckQuality = ECheckQuality::Medium;
    this->VisibilityCheckType = ETaskProcessType::Multithread;
    this->VisibilityTargetType = ETraceTarget::ActorLocation;
    this->VisibilityLightCheckRate = 0.05f;
    this->VisibilityLightBatchCount = 50;
    this->bIgnoreSelfOnVisibilityTraces = true;
    this->TraceChannel = ECC_Visibility;
    this->TracesRequired = 0.50f;
    this->MaxConsecutiveFails = 5.00f;
    this->CombinedLXRIntensity = 0.00f;
    this->Replicated_DetectedLightIntensity = 0.00f;
    this->MemoryComponent = NULL;
    this->LXRSubsystem = NULL;
    this->RealSkeletalMeshComponent = NULL;
}

void ULXRDetectionComponent::OnRep_Replicated_DetectedLightIntensity() {
}

void ULXRDetectionComponent::OnRep_Replicated_DetectedLightColor() {
}

bool ULXRDetectionComponent::IsSocketsEnabled() const {
    return false;
}

TArray<FVector> ULXRDetectionComponent::GetVisibilityTraceTypeTargets() const {
    return TArray<FVector>();
}

int32 ULXRDetectionComponent::GetTraceTargetIndexBySocketName(FName SocketName) const {
    return 0;
}

FName ULXRDetectionComponent::GetSocketNameByTraceTargetIndex(int32 TraceTargetIndex) {
    return NAME_None;
}

TArray<ULXRSourceComponent*> ULXRDetectionComponent::GetPassedLights() const {
    return TArray<ULXRSourceComponent*>();
}

TArray<ULightComponent*> ULXRDetectionComponent::GetPassedLightComponents(ULXRSourceComponent* LightSourceOwner) {
    return TArray<ULightComponent*>();
}

TMap<int32, FLXR> ULXRDetectionComponent::GetIlluminatedTargets() {
    return TMap<int32, FLXR>();
}

void ULXRDetectionComponent::DebugPrintLightRegistryMemory() const {
}

void ULXRDetectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULXRDetectionComponent, Replicated_DetectedLightIntensity);
    DOREPLIFETIME(ULXRDetectionComponent, Replicated_DetectedLightColor);
}


