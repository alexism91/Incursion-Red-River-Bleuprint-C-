#include "MeshBlendWorldPartitionRuntimeCellTransformer.h"
#include "MeshBlendProcessor.h"

UMeshBlendWorldPartitionRuntimeCellTransformer::UMeshBlendWorldPartitionRuntimeCellTransformer() {
    this->MeshBlendProcessor = CreateDefaultSubobject<UMeshBlendProcessor>(TEXT("MeshBlendProcessor"));
}


