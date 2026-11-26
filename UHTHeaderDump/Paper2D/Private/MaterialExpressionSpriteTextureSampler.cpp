#include "MaterialExpressionSpriteTextureSampler.h"

UMaterialExpressionSpriteTextureSampler::UMaterialExpressionSpriteTextureSampler() {
    this->MenuCategories.AddDefaulted(2);
    this->ParameterName = TEXT("SpriteTexture");
    this->bSampleAdditionalTextures = false;
    this->AdditionalSlotIndex = 0;
}


