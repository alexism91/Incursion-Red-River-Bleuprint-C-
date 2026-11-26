#include "LXRSilhouetteDetectionComponent.h"

ULXRSilhouetteDetectionComponent::ULXRSilhouetteDetectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDrawDebug = false;
    this->SilhouetteCheckQuality = ECheckQuality::Medium;
    this->TargetsRequired = 0.50f;
    this->SilhouetteCalculationType = ETaskProcessType::Multithread;
    this->OctreeCheckBoundsSize = 2000;
    this->TraceTargetBatchCount = 30;
    this->TraceTransform = ETraceTransform::None;
    this->TraceAngle = 15.00f;
    this->DetectionComponentUpdateCheckInterval = 3.00f;
    this->TraceChannel = ECC_Visibility;
    this->LXRSubsystem = NULL;
    this->MethodObject = NULL;
}


