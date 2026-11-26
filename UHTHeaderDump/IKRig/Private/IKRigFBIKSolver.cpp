#include "IKRigFBIKSolver.h"

UIKRigFBIKSolver::UIKRigFBIKSolver() {
    this->Iterations = 20;
    this->SubIterations = 0;
    this->MassMultiplier = 1.00f;
    this->bAllowStretch = false;
    this->RootBehavior = EPBIKRootBehavior::PrePull;
    this->PullChainAlpha = 1.00f;
    this->MaxAngle = 30.00f;
    this->OverRelaxation = 1.30f;
}

TArray<UIKRig_FBIKEffector*> UIKRigFBIKSolver::GetEffectors() {
    return TArray<UIKRig_FBIKEffector*>();
}

TArray<UIKRig_FBIKBoneSettings*> UIKRigFBIKSolver::GetBoneSettings() {
    return TArray<UIKRig_FBIKBoneSettings*>();
}


