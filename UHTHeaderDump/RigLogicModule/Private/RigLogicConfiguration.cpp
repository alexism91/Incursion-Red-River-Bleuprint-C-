#include "RigLogicConfiguration.h"

FRigLogicConfiguration::FRigLogicConfiguration() {
    this->CalculationType = ERigLogicCalculationType::Scalar;
    this->LoadJoints = false;
    this->LoadBlendShapes = false;
    this->LoadAnimatedMaps = false;
    this->LoadMachineLearnedBehavior = false;
    this->LoadRBFBehavior = false;
    this->LoadTwistSwingBehavior = false;
    this->TranslationType = ERigLogicTranslationType::None;
    this->RotationType = ERigLogicRotationType::None;
    this->RotationOrder = ERigLogicRotationOrder::XYZ;
    this->ScaleType = ERigLogicScaleType::None;
    this->TranslationPruningThreshold = 0.00f;
    this->RotationPruningThreshold = 0.00f;
    this->ScalePruningThreshold = 0.00f;
}

