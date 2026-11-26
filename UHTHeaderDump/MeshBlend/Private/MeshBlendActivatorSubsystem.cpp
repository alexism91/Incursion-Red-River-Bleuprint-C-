#include "MeshBlendActivatorSubsystem.h"

UMeshBlendActivatorSubsystem::UMeshBlendActivatorSubsystem() {
    this->MeshBlendActivatorLogic = NULL;
    this->CachedCVarMeshBlendEnable = true;
}

void UMeshBlendActivatorSubsystem::RefreshActor(AActor* Actor, bool bSoftReset) {
}

UMeshBlendActivatorSubsystem* UMeshBlendActivatorSubsystem::GetInstance(const UWorld* World) {
    return NULL;
}


