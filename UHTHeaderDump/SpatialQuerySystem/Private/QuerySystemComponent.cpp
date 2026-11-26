#include "QuerySystemComponent.h"

UQuerySystemComponent::UQuerySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ThisOwner = NULL;
    this->bEnable = true;
    this->QueryComponentType = EQueryCollectorType::QCT_Action;
    this->ActionSpatialAccelerator = EQueryEngineType::QE_BVH;
    this->ActionMode = EQueryActionMode::GAM_AllTick;
    this->PeriodTime = 5.00f;
    this->MinPeriodTime = 1.00f;
    this->MaxPeriodTime = 5.00f;
    this->MinScaleFactor = 0.01f;
    this->MaxScaleFactor = 1.00f;
    this->ScanPeriodTime = 2.00f;
    this->ScanMode = EActionScanMode::MinToMax;
    this->ActionType = EQueryActionType::GAT_All;
    this->NumToFind = 1;
    this->bCombineOverlaps = true;
    this->bAllowShareActionEvents = true;
    this->QueryActorMovementState = EQueryActorMovementState::All;
    this->QueryActorContactPoint = EQueryTargetPoint::Center;
    this->QueryActorShapeType = EActorFilterShapeType::Any;
    this->IgnoreSelf = true;
    this->SpatialAccelerator = EQueryEngineType::QE_BVH;
    this->MovementState = EQueryMovementState::Dynamic;
    this->NetMode = EQueryNetMode::QNM_Both;
    this->QueryManager = NULL;
    this->IDMask = -1;
    this->ProcessedOverlapShapeCount = 0;
    this->ProcessedOverlapActionCount = 0;
    this->NumOfSphereActionShape = 0;
    this->bAutoResetTrigger = false;
    this->bTriggerState = false;
    this->CurrentTime = 0.00f;
    this->bResetNextTickRadius = false;
    this->bPingPongSwitch = true;
}

void UQuerySystemComponent::StartActionTrigger(bool bAutoReset) {
}

void UQuerySystemComponent::SetEnableQuerySystemComponent() {
}

void UQuerySystemComponent::SetDisableQuerySystemComponent(const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void UQuerySystemComponent::ResetActionTrigger() {
}


