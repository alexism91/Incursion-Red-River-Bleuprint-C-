#include "PickUpPresentationState.h"

FPickUpPresentationState::FPickUpPresentationState() {
    this->Presentation = EPickUpPresentation::Untouched;
    this->Revision = 0;
    this->PickUpSequence = 0;
    this->Wearer = NULL;
    this->bManagedGear = false;
    this->bStoredHidden = false;
    this->bHideMesh = false;
    this->bHideWhenUnequipped = false;
}

