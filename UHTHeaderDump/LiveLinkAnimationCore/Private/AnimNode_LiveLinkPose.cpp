#include "AnimNode_LiveLinkPose.h"

FAnimNode_LiveLinkPose::FAnimNode_LiveLinkPose() {
    this->bDoLiveLinkEvaluation = false;
    this->RetargetAsset = NULL;
    this->CurrentRetargetAsset = NULL;
}

