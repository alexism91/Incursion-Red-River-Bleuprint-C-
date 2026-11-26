#include "IRRAISolverTestActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AIRRAISolverTestActor::AIRRAISolverTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Kind = EIRRSolverTestKind::PeekPoint;
    this->bDrawEnabled = true;
    this->bAutoSolveOnMove = true;
    this->AutoSolveMinInterval = 0.20f;
    this->ResolveInterval = 0.00f;
    this->SolveTimeout = 3.00f;
    this->LabelledCandidates = 5;
    this->EyeHeight = 160.00f;
    this->bSnapToNavmesh = true;
    this->WeaponHeight = 150.00f;
    this->bAutoGatherDummies = true;
    this->NewDummyRole = EIRRTestDummyRole::Target;
    this->NewDummyDistance = 800.00f;
    this->TargetEyeHeight = 165.00f;
    this->FriendlyCapsuleRadius = 34.00f;
    this->FriendlyCapsuleHalfHeight = 90.00f;
    this->TraceChannel = ECC_GameTraceChannel2;
    this->NavFilterClass = NULL;
    this->PeekMaxBackoffDistance = 500.00f;
    this->PeekSpaceBetween = 75.00f;
    this->PeekBackoffHalfWidth = 150.00f;
    this->PeekMinBackoffRows = 3;
    this->PeekMinCostOriginDistance = 100.00f;
    this->PeekMaxCostOriginDistance = 500.00f;
    this->PeekPreferredStandoff = 250.00f;
    this->PeekStandoffWeight = 1.00f;
    this->PeekCornerHeightOffset = 120.00f;
    this->PeekMinDistanceToFriendly = 150.00f;
    this->PeekFriendlyFireLaneRadius = 30.00f;
    this->PeekedCornerTolerance = 100.00f;
    this->bSolveSliceStep = true;
    this->SliceProbeDepth = 600.00f;
    this->SliceProbeHalfWidth = 400.00f;
    this->SliceProbeSpaceBetween = 150.00f;
    this->SliceStepAngle = 25.00f;
    this->MinSliceStepDistance = 75.00f;
    this->MaxSliceStepDistance = 400.00f;
    this->SliceSpaceBetween = 75.00f;
    this->bMaintainSliceStandoff = true;
    this->MaxSliceCandidatesTested = 6;
    this->MinNewlyRevealed = 1;
    this->GoodEnoughRevealed = 4;
    this->FireGridHalfSize = 350.00f;
    this->FireSpaceBetween = 50.00f;
    this->FireMinRepositionDistance = 100.00f;
    this->FireSameDirRejectCos = 0.87f;
    this->FireFriendlyFireLaneRadius = 30.00f;
    this->StrafeGridHalfSize = 350.00f;
    this->StrafeSpaceBetween = 75.00f;
    this->StrafeMinRepositionDistance = 100.00f;
    this->StrafeMinDistanceToFriendly = 75.00f;
    this->StrafeWidthOffset = 40.00f;
    this->StrafePreferredSideSign = 0.00f;
    this->StrafeLateralWeight = 1.00f;
    this->StrafeSideBiasWeight = 0.35f;
    this->StrafeClosenessWeight = 0.75f;
    this->StrafePathCostWeight = 0.50f;
    this->StrafeMaxTraces = 600;
    this->StrafeThreatWeight = 1.00f;
    this->SpawnGridRadius = 1500.00f;
    this->SpawnGridSpacing = 200.00f;
    this->SpawnMinDistance = 1000.00f;
    this->SpawnCapsuleHalfHeight = 90.00f;
    this->SpawnCapsuleRadius = 34.00f;
    this->SpawnNearDistance = 5000.00f;
    this->SpawnNearTraceCount = 10;
    this->SpawnFarDistance = 15000.00f;
    this->SpawnFarTraceCount = 3;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->Billboard->SetupAttachment(RootComponent);
}

void AIRRAISolverTestActor::SpawnTestDummy() {
}

void AIRRAISolverTestActor::Solve() {
}


