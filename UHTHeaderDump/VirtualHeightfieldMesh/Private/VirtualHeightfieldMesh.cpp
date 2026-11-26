#include "VirtualHeightfieldMesh.h"
#include "VirtualHeightfieldMeshComponent.h"

AVirtualHeightfieldMesh::AVirtualHeightfieldMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UVirtualHeightfieldMeshComponent>(TEXT("VirtualHeightfieldMeshComponent"));
    this->VirtualHeightfieldMeshComponent = (UVirtualHeightfieldMeshComponent*)RootComponent;
}


