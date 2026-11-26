#include "AnimNode_SequenceEvaluator_Standalone.h"

FAnimNode_SequenceEvaluator_Standalone::FAnimNode_SequenceEvaluator_Standalone() {
    this->GroupRole = EAnimGroupRole::CanBeLeader;
    this->Method = EAnimSyncMethod::DoNotSync;
    this->bIgnoreForRelevancyTest = false;
    this->Sequence = NULL;
    this->ExplicitTime = 0.00f;
    this->bUseExplicitFrame = false;
    this->ExplicitFrame = 0;
    this->bShouldLoop = false;
    this->bTeleportToExplicitTime = false;
    this->ReinitializationBehavior = ESequenceEvalReinit::NoReset;
    this->StartPosition = 0.00f;
}

