#include "UniformFractureDataflowNode.h"

FUniformFractureDataflowNode::FUniformFractureDataflowNode() {
    this->MinVoronoiSites = 0;
    this->MaxVoronoiSites = 0;
    this->InternalMaterialID = 0;
    this->RandomSeed = 0;
    this->ChanceToFracture = 0.00f;
    this->GroupFracture = false;
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

