#include "IRRAIVisibilityTestActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AIRRAIVisibilityTestActor::AIRRAIVisibilityTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Mode = EIRRVisTestMode::Both;
    this->bDrawEnabled = true;
    this->RefreshInterval = 0.00f;
    this->EyeHeight = 165.00f;
    this->GridRadius = 2000.00f;
    this->GridSpacing = 200.00f;
    this->ProbeHeightSteps.AddDefaulted(3);
    this->ProbeChannel = ECC_GameTraceChannel2;
    this->ProbeMaxRange = 5000.00f;
    this->bProjectProbesToNavmesh = true;
    this->bCompareGroundTruth = true;
    this->bDrawSightlines = false;
    this->MaxProbes = 1024;
    this->BotSource = EIRRVisTestBotSource::NearestBot;
    this->ExplicitBot = NULL;
    this->bDrawHostileSightlines = true;
    this->bUsePhantomObservers = false;
    this->RingPhantomCount = 4;
    this->RingPhantomRadius = 1500.00f;
    this->RingPhantomStartAngle = 0.00f;
    this->PhantomEyeHeight = 165.00f;
    this->bProjectPhantomsToNavmesh = true;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->Billboard->SetupAttachment(RootComponent);
}

void AIRRAIVisibilityTestActor::Refresh() {
}


