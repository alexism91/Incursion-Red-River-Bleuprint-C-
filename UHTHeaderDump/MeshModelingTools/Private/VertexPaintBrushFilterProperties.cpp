#include "VertexPaintBrushFilterProperties.h"

UVertexPaintBrushFilterProperties::UVertexPaintBrushFilterProperties() {
    this->BrushAreaMode = EMeshVertexPaintBrushAreaType::Connected;
    this->AngleThreshold = 180.00f;
    this->bUVSeams = false;
    this->bNormalSeams = false;
    this->VisibilityFilter = EMeshVertexPaintVisibilityType::None;
    this->bIsolateGeometrySelection = false;
    this->bToolHasSelection = false;
    this->MinTriVertCount = 1;
    this->MaterialMode = EMeshVertexPaintMaterialMode::UnlitVertexColor;
    this->bShowHitColor = false;
    this->CurrentSubToolType = EMeshVertexPaintInteractionType::Brush;
}


