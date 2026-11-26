#include "BaseBoat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRSignificanceSystem -ObjectName=IRRSignificanceComponent -FallbackName=IRRSignificanceComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Water -ObjectName=BuoyancyComponent -FallbackName=BuoyancyComponent

ABaseBoat::ABaseBoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoatMesh"));
    this->BoatMesh = (UStaticMeshComponent*)RootComponent;
    this->Buoyancy = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("Buoyancy"));
    this->Significance = CreateDefaultSubobject<UIRRSignificanceComponent>(TEXT("Significance"));
    this->bAutoFitBuoyancy = true;
    this->Draft = 0.00f;
    this->PontoonRadiusFraction = 0.25f;
    this->HeaveDampingRatio = 1.00f;
    this->SettleTime = 5.00f;
}

void ABaseBoat::OnBoatSignificanceChanged(int32 NewLevel, bool bIsHidden) {
}


