#include "MetaHumanDefaultGroomPipelineMaterialParameters.h"

UMetaHumanDefaultGroomPipelineMaterialParameters::UMetaHumanDefaultGroomPipelineMaterialParameters() {
    this->Melanin = 0.16f;
    this->Redness = 0.00f;
    this->Roughness = 0.25f;
    this->Whiteness = 0.00f;
    this->Lightness = 0.00f;
    this->bUseOmbre = false;
    this->OmbreU = 0.00f;
    this->OmbreV = 0.00f;
    this->OmbreShift = 0.00f;
    this->OmbreContrast = 0.00f;
    this->OmbreIntensity = 0.00f;
    this->bUseRegions = false;
    this->RegionsU = 0.00f;
    this->RegionsV = 0.00f;
    this->bUseHighlights = false;
    this->HighlightsU = 0.00f;
    this->HighlightsV = 0.00f;
    this->HighlightsBlending = 0.00f;
    this->HighlightsIntensity = 0.00f;
    this->HighlightsVariation = 0.00f;
}


