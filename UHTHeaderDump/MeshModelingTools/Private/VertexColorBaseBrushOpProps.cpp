#include "VertexColorBaseBrushOpProps.h"

UVertexColorBaseBrushOpProps::UVertexColorBaseBrushOpProps() {
    this->Strength = 0.50f;
    this->Falloff = 1.00f;
    this->BlendMode = EVertexColorPaintBrushOpBlendMode::Mix;
    this->bApplyFalloff = true;
}


