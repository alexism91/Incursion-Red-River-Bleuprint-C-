#include "VertexPaintBasicProperties.h"

UVertexPaintBasicProperties::UVertexPaintBasicProperties() {
    this->PrimaryBrushType = EMeshVertexPaintBrushType::Paint;
    this->SubToolType = EMeshVertexPaintInteractionType::Brush;
    this->bIsPaintPressureEnabled = true;
    this->BlendMode = EMeshVertexPaintColorBlendMode::Lerp;
    this->SecondaryActionType = EMeshVertexPaintSecondaryActionType::Erase;
    this->bIsErasePressureEnabled = true;
    this->SmoothStrength = 0.25f;
    this->bHardEdges = false;
}


