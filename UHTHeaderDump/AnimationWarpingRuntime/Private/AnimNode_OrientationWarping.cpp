#include "AnimNode_OrientationWarping.h"

FAnimNode_OrientationWarping::FAnimNode_OrientationWarping() {
    this->Mode = EWarpingEvaluationMode::Manual;
    this->TargetTime = 0.00f;
    this->OrientationAngle = 0.00f;
    this->LocomotionAngle = 0.00f;
    this->MinRootMotionSpeedThreshold = 0.00f;
    this->LocomotionAngleDeltaThreshold = 0.00f;
    this->CurrentAnimAsset = NULL;
    this->CurrentAnimAssetTime = 0.00f;
    this->RotationAxis = EAxis::None;
    this->DistributedBoneOrientationAlpha = 0.00f;
    this->RotationInterpSpeed = 0.00f;
    this->CounterCompensateInterpSpeed = 0.00f;
    this->MaxCorrectionDegrees = 0.00f;
    this->MaxRootMotionDeltaToCompensateDegrees = 0.00f;
    this->bCounterCompenstateInterpolationByRootMotion = false;
    this->bScaleByGlobalBlendWeight = false;
    this->bUseManualRootMotionVelocity = false;
    this->WarpingSpace = EOrientationWarpingSpace::ComponentTransform;
}

