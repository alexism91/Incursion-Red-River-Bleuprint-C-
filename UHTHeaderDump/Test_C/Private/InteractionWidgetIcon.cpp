#include "InteractionWidgetIcon.h"

UInteractionWidgetIcon::UInteractionWidgetIcon() : UUserWidget(FObjectInitializer::Get()) {
    this->ContentBox = NULL;
    this->OpacityInterpSpeed = 8.00f;
    this->OpacityAlpha = 0.00f;
    this->Progress = 0.00f;
}


