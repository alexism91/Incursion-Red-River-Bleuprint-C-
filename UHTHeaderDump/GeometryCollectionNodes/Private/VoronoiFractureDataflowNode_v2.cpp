#include "VoronoiFractureDataflowNode_v2.h"

FVoronoiFractureDataflowNode_v2::FVoronoiFractureDataflowNode_v2() {
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
}

