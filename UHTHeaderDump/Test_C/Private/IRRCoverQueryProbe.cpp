#include "IRRCoverQueryProbe.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "IRRCoverQueryProbeRenderingComponent.h"

AIRRCoverQueryProbe::AIRRCoverQueryProbe(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Target = NULL;
    this->CombatVectorFrom = NULL;
    this->Post = NULL;
    this->AdvanceDestination = NULL;
    this->bTargetSearchActive = false;
    this->ThreatEyeHeight = 160.00f;
    this->ScopeRadius = 0.00f;
    this->bAutoUpdate = true;
    this->bDrawOnlyWhenSelected = false;
    this->bDrawRejectedCovers = true;
    this->bDrawRejectLabels = true;
    this->RenderingComponent = CreateDefaultSubobject<UIRRCoverQueryProbeRenderingComponent>(TEXT("Rendering"));
    this->RenderingComponent->SetupAttachment(RootComponent);
}

void AIRRCoverQueryProbe::RunQuery() {
}

void AIRRCoverQueryProbe::ReloadCovers() {
}


