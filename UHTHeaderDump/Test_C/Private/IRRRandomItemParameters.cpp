#include "IRRRandomItemParameters.h"

FIRRRandomItemParameters::FIRRRandomItemParameters() {
    this->MinItemsToAdd = 0;
    this->MaxItemsToAdd = 0;
    this->MinValue = 0.00f;
    this->MaxValue = 0.00f;
    this->bCanAddSameItem = false;
    this->bForceMatchRarity = false;
    this->bForceVitalParts = false;
    this->AttachmentMinDepth = 0;
    this->AttachmentMaxDepth = 0;
    this->BackpackMinItems = 0;
    this->BackpackMaxItems = 0;
}

