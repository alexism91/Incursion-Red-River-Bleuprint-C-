#include "VertexBrushSculptProperties.h"

UVertexBrushSculptProperties::UVertexBrushSculptProperties() {
    this->PrimaryBrushType = EMeshVertexSculptBrushType::Offset;
    this->PrimaryBrushID = 0;
    this->PrimaryFalloffType = EMeshSculptFalloffType::Smooth;
    this->BrushFilter = EMeshVertexSculptBrushFilterType::None;
    this->bFreezeTarget = false;
    this->bCanFreezeTarget = false;
}


