#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameplayCameraActorBase.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AGameplayCameraActorBase : public AActor {
    GENERATED_BODY()
public:
    AGameplayCameraActorBase(const FObjectInitializer& ObjectInitializer);

};

