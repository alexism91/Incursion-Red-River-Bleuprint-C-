#include "MeshCutterDataflowNode.h"

FMeshCutterDataflowNode::FMeshCutterDataflowNode() {
    this->CuttingStaticMesh = NULL;
    this->bUseHiRes = false;
    this->LODLevel = 0;
    this->CutDistribution = EMeshCutterCutDistribution::SingleCut;
    this->PerCutMeshSelection = EMeshCutterPerCutMeshSelection::All;
    this->NumberToScatter = 0;
    this->GridX = 0;
    this->GridY = 0;
    this->GridZ = 0;
    this->Variability = 0.00f;
    this->MinScaleFactor = 0.00f;
    this->MaxScaleFactor = 0.00f;
    this->bRandomOrientation = false;
    this->RollRange = 0.00f;
    this->PitchRange = 0.00f;
    this->YawRange = 0.00f;
    this->RandomSeed = 0;
    this->ChanceToFracture = 0.00f;
    this->SplitIslands = false;
    this->AddSamplesForCollision = false;
    this->CollisionSampleSpacing = 0.00f;
}

