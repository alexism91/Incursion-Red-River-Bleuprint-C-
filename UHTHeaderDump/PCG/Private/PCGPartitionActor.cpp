#include "PCGPartitionActor.h"

APCGPartitionActor::APCGPartitionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PCGGridSize = 0;
    this->bUse2DGrid = false;
    this->RuntimeGridDescriptorHash = 0;
}

UPCGComponent* APCGPartitionActor::GetOriginalComponent(const UPCGComponent* LocalComponent) const {
    return NULL;
}

UPCGComponent* APCGPartitionActor::GetLocalComponent(const UPCGComponent* OriginalComponent) const {
    return NULL;
}

int64 APCGPartitionActor::BP_GetPCGGridSize() const {
    return 0;
}


