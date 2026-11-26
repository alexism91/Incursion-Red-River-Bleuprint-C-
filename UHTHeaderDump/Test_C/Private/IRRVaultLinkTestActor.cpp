#include "IRRVaultLinkTestActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AIRRVaultLinkTestActor::AIRRVaultLinkTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bDrawEnabled = true;
    this->bAutoSolveOnMove = true;
    this->AutoSolveMinInterval = 0.35f;
    this->SolveTimeout = 10.00f;
    this->SearchDistance = 2500.00f;
    this->NavFilterClass = NULL;
    this->EdgeSampleStep = 100.00f;
    this->EdgeEndInset = 30.00f;
    this->ProbeInset = 20.00f;
    this->TraceChannel = ECC_GameTraceChannel5;
    this->AgentRadius = 34.00f;
    this->AgentHalfHeight = 90.00f;
    this->ClearanceAbove = 60.00f;
    this->MinObstacleHeight = 40.00f;
    this->MaxObstacleHeight = 130.00f;
    this->MaxVaultDepth = 120.00f;
    this->DepthStep = 15.00f;
    this->MaxLandingDrop = 200.00f;
    this->MaxLandingRise = 60.00f;
    this->StandOffDistance = 60.00f;
    this->MergeDistance = 150.00f;
    this->bDrawEdges = false;
    this->bDrawAccepted = true;
    this->bDrawAcceptedLabels = true;
    this->bDrawRejects = true;
    this->bDrawRejectLabels = false;
    this->MaxDrawnRejects = 400;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->Billboard->SetupAttachment(RootComponent);
}

void AIRRVaultLinkTestActor::Solve() {
}


