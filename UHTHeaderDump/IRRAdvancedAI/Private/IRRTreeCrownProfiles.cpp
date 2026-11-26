#include "IRRTreeCrownProfiles.h"

UIRRTreeCrownProfiles::UIRRTreeCrownProfiles() {
    this->DefaultDensity = 0.12f;
    this->DefaultCrownBottom = 0.45f;
    this->DefaultCrownTop = 0.95f;
    this->DefaultRadiusScale = 0.80f;
    this->HiddenBelowTransmittance = 0.50f;
    this->EndpointClearance = 50.00f;
    this->MinTreeHeight = 400.00f;
    this->ExcludedNameKeywords.AddDefaulted(6);
    this->LeafMaterialKeywords.AddDefaulted(8);
    this->KeepMaterialKeywords.AddDefaulted(5);
    this->bTreatMaskedSectionsAsLeaves = true;
}


