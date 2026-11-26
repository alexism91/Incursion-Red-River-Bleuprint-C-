#include "AIOptimizationData.h"

FAIOptimizationData::FAIOptimizationData() {
    this->bHidden = false;
    this->AlwaysCheckFloor = false;
    this->EnablePhysicsInteraction = false;
    this->MaxSimulationTimeStep = 0.00f;
    this->MaxSimulationIterations = 0;
    this->MovementMode = MOVE_None;
    this->AnimBudgetSignificance = 0.00f;
    this->bAnimBudgetNeverSkip = false;
    this->RunPhysicsWithNoController = false;
    this->SweepWhileNavWalking = false;
    this->FootstepSoundCheck = false;
    this->AvoidanceMode = EIRRAvoidanceMode::None;
    this->CrowdAvoidanceQuality = EIRRCrowdAvoidanceQuality::Low;
    this->bRenderStatic = false;
    this->bCastShadow = false;
    this->SmallGearShadowRadius = 0.00f;
    this->MinGroomLOD = 0;
    this->bEnableAk = false;
    this->bDisableAI = false;
    this->bDisableMovement = false;
    this->bDisableSense = false;
    this->BrainComponentTickInterval = 0.00f;
    this->SenseReceiverTickInterval = 0.00f;
    this->AISenseTickInterval = 0.00f;
    this->MovementCompTickInterval = 0.00f;
    this->ElementMovementTickInterval = 0.00f;
    this->DisableMorphTarget = false;
    this->AnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
    this->SkipKinematicUpdateWhenInterpolating = false;
    this->SkipBoundsUpdateWhenInterpolating = false;
    this->AllowRigidBodyAnimNode = false;
    this->GenerateOverlapEvents = false;
    this->FocusType = EIRRAIFocusType::Simple;
    this->bAllowFullProxySimulation = false;
    this->bEnableLightSense = false;
}

