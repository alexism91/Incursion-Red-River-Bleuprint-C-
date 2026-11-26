#include "LPSPCrosshair.h"

ULPSPCrosshair::ULPSPCrosshair() : UUserWidget(FObjectInitializer::Get()) {
}

ESlateVisibility ULPSPCrosshair::GetSlateVisibility() {
    return ESlateVisibility::Visible;
}


