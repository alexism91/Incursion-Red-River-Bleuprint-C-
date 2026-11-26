#include "LightWeightInstanceStaticMeshManager.h"
#include "InstancedStaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ALightWeightInstanceStaticMeshManager::ALightWeightInstanceStaticMeshManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("ISMComponent0"));
    this->ISMComponent = (UInstancedStaticMeshComponent*)RootComponent;
}

void ALightWeightInstanceStaticMeshManager::OnRep_StaticMesh() {
}

void ALightWeightInstanceStaticMeshManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALightWeightInstanceStaticMeshManager, StaticMesh);
    DOREPLIFETIME(ALightWeightInstanceStaticMeshManager, RenderingIndicesToDataIndices);
    DOREPLIFETIME(ALightWeightInstanceStaticMeshManager, DataIndicesToRenderingIndices);
}


