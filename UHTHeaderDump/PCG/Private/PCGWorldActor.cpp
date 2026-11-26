#include "PCGWorldActor.h"
#include "PCGLandscapeCache.h"

APCGWorldActor::APCGWorldActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PartitionGridSize = 25600;
    this->LandscapeCacheObject = CreateDefaultSubobject<UPCGLandscapeCache>(TEXT("LandscapeCache"));
    this->bEnableWorldPartitionGenerationSources = true;
}

int64 APCGWorldActor::BP_GetPCGGridSize() const {
    return 0;
}


