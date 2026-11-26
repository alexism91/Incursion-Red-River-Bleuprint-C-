#include "GroomSolverComponent.h"

UGroomSolverComponent::UGroomSolverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCanEverAffectNavigation = false;
    this->MeshDeformer = NULL;
    this->DeformerInstance = NULL;
    this->DeformerSettings = NULL;
}

void UGroomSolverComponent::SetDeformerSolver(UMeshDeformer* DeformerSolver) {
}

void UGroomSolverComponent::ResetGroomComponents() {
}

void UGroomSolverComponent::RemoveGroomComponent(UGroomComponent* GroomComponent) {
}

void UGroomSolverComponent::AddGroomComponent(UGroomComponent* GroomComponent) {
}


