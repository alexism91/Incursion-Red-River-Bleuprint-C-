#include "IRRHeadlampComponent.h"
#include "Net/UnrealNetwork.h"

UIRRHeadlampComponent::UIRRHeadlampComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MountSocket = TEXT("Camera");
    this->bAutoFitToHeadgear = true;
    this->MountElevationDegrees = 25.00f;
    this->MountStandoff = 2.00f;
    this->HeadgearSearchRadius = 35.00f;
    this->HeadgearMaxRadius = 45.00f;
    this->DefaultHeadRadius = 11.00f;
    this->BeamIntensity = 200.00f;
    this->BeamIntensityUnits = ELightUnits::Lumens;
    this->InnerConeAngle = 16.00f;
    this->OuterConeAngle = 36.00f;
    this->AttenuationRadius = 2500.00f;
    this->bCastShadows = false;
    this->LightMaxDrawDistance = 8000.00f;
    this->LightFadeRange = 2500.00f;
    this->bHeadlampOn = false;
    this->Beam = NULL;
    this->SenseSource = NULL;
    this->SourceGlow = NULL;
}

void UIRRHeadlampComponent::SetHeadlampOn(bool bOn) {
}

void UIRRHeadlampComponent::OnRep_HeadlampOn() {
}

bool UIRRHeadlampComponent::IsHeadlampOn() const {
    return false;
}

USpotLightComponent* UIRRHeadlampComponent::GetBeam() const {
    return NULL;
}

void UIRRHeadlampComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRHeadlampComponent, bHeadlampOn);
}


