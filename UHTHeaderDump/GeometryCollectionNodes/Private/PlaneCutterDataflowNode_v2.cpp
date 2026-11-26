#include "PlaneCutterDataflowNode_v2.h"

FPlaneCutterDataflowNode_v2::FPlaneCutterDataflowNode_v2() {
    this->NumPlanes = 0;
    this->RandomSeed = 0;
    this->ChanceToFracture = 0.00f;
    this->SplitIslands = false;
    this->Grout = 0.00f;
    this->Amplitude = 0.00f;
    this->Frequency = 0.00f;
    this->Persistence = 0.00f;
    this->Lacunarity = 0.00f;
    this->OctaveNumber = 0;
    this->PointSpacing = 0.00f;
    this->AddSamplesForCollision = false;
    this->CollisionSampleSpacing = 0.00f;
    this->RenderType = EDataflowDebugDrawRenderType::Wireframe;
    this->PlaneSizeMultiplier = 0.00f;
    this->bTranslucent = false;
    this->bRandomizeColors = false;
    this->ColorRandomSeed = 0;
    this->LineWidthMultiplier = 0.00f;
}

