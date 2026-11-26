#include "RadialScatterPointsDataflowNode_v2.h"

FRadialScatterPointsDataflowNode_v2::FRadialScatterPointsDataflowNode_v2() {
    this->RandomSeed = 0;
    this->AngularSteps = 0;
    this->AngleOffset = 0.00f;
    this->AngularNoise = 0.00f;
    this->Radius = 0.00f;
    this->RadialSteps = 0;
    this->RadialStepExponent = 0.00f;
    this->RadialMinStep = 0.00f;
    this->RadialNoise = 0.00f;
    this->RadialVariability = 0.00f;
    this->AngularVariability = 0.00f;
    this->AxialVariability = 0.00f;
}

