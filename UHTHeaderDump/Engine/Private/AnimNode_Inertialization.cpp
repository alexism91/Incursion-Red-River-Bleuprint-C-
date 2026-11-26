#include "AnimNode_Inertialization.h"

FAnimNode_Inertialization::FAnimNode_Inertialization() {
    this->DefaultBlendProfile = NULL;
    this->bResetOnBecomingRelevant = false;
    this->bForwardRequestsThroughSkippedCachedPoseNodes = false;
    this->InertializationRequestAnimInstance = NULL;
}

