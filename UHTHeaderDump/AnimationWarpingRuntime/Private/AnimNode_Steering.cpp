#include "AnimNode_Steering.h"

FAnimNode_Steering::FAnimNode_Steering() {
    this->bMirrored = false;
    this->ProceduralTargetTime = 0.00f;
    this->TargetTime = 0.00f;
    this->AnimatedTargetTime = 0.00f;
    this->RootMotionThreshold = 0.00f;
    this->DisableSteeringBelowSpeed = 0.00f;
    this->DisableAdditiveBelowSpeed = 0.00f;
    this->MinScaleRatio = 0.00f;
    this->MaxScaleRatio = 0.00f;
    this->MirrorDataTable = NULL;
    this->CurrentAnimAsset = NULL;
    this->CurrentAnimAssetTime = 0.00f;
}

