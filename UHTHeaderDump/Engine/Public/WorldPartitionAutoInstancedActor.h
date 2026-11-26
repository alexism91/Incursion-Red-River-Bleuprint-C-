#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "WorldPartitionAutoInstancedActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport, NotPlaceable)
class AWorldPartitionAutoInstancedActor : public AActor {
    GENERATED_BODY()
public:
    AWorldPartitionAutoInstancedActor(const FObjectInitializer& ObjectInitializer);

};

