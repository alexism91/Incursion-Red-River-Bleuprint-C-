#include "DataflowNodeSphereCoveringDebugDrawSettings.h"

FDataflowNodeSphereCoveringDebugDrawSettings::FDataflowNodeSphereCoveringDebugDrawSettings() {
    this->bDisplaySphereCovering = false;
    this->RenderType = EDataflowDebugDrawRenderType::Wireframe;
    this->bTranslucent = false;
    this->LineWidthMultiplier = 0.00f;
    this->ColorMethod = EDataflowSphereCoveringColorMethod::Single;
    this->ColorRandomSeed = 0;
}

