#include "DataflowNodeDebugDrawSettings.h"

FDataflowNodeDebugDrawSettings::FDataflowNodeDebugDrawSettings() {
    this->RenderType = EDataflowDebugDrawRenderType::Wireframe;
    this->bTranslucent = false;
    this->LineWidthMultiplier = 0.00f;
}

