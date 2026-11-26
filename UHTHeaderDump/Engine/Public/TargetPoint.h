#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "TargetPoint.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ATargetPoint : public AActor {
    GENERATED_BODY()
public:
    ATargetPoint(const FObjectInitializer& ObjectInitializer);

};

