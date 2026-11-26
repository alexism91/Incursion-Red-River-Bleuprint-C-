#include "MetaHumanDefaultGroomPipeline.h"

UMetaHumanDefaultGroomPipeline::UMetaHumanDefaultGroomPipeline() {
    this->SlotTarget = EMetaHumanRuntimeMaterialParameterSlotTarget::SlotNames;
    this->bSupportsOmbre = true;
    this->bSupportsRegions = true;
    this->bSupportsHightlights = true;
    this->HighlightsRootDistance = 0.00f;
    this->LODTransition = EHairLODTransition::StrandsToCardsToMesh;
    this->GroomTextureMinLOD = 5;
}


