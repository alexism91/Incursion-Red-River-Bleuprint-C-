#include "AdvancedAkAcousticPortal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRSignificanceSystem -ObjectName=IRRBrushSignificanceComponent -FallbackName=IRRBrushSignificanceComponent

AAdvancedAkAcousticPortal::AAdvancedAkAcousticPortal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseOptimization = true;
    this->bUseAutoCurve = true;
    this->ToggleDelaySeconds = 1.00f;
    this->SignificanceComponent = CreateDefaultSubobject<UIRRBrushSignificanceComponent>(TEXT("SignificanceComponent"));
}

void AAdvancedAkAcousticPortal::TogglePortal(bool bEnable) {
}

void AAdvancedAkAcousticPortal::OnSignificanceChanged_Implementation(int32 Level, bool bNewHidden) {
}


