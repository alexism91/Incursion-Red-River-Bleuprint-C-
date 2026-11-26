#include "WorldPartitionStandaloneHLOD.h"
#include "LevelInstanceComponent.h"

AWorldPartitionStandaloneHLOD::AWorldPartitionStandaloneHLOD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<ULevelInstanceComponent>(TEXT("Root"));
}


