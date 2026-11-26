#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "IRRSpawnPointBase.generated.h"

UCLASS(Blueprintable, NoExport)
class IRRADVANCEDAI_API AIRRSpawnPointBase : public AActor {
    GENERATED_BODY()
public:
    AIRRSpawnPointBase(const FObjectInitializer& ObjectInitializer);

};

