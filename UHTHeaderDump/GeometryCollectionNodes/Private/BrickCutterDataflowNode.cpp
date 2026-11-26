#include "BrickCutterDataflowNode.h"

FBrickCutterDataflowNode::FBrickCutterDataflowNode() {
    this->Bond = EFractureBrickBondEnum::Dataflow_FractureBrickBond_Stretcher;
    this->BrickLength = 0.00f;
    this->BrickHeight = 0.00f;
    this->BrickDepth = 0.00f;
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

