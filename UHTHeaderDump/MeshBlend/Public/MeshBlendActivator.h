#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MeshBlendActivator.generated.h"

UCLASS(Blueprintable, NoExport)
class MESHBLEND_API AMeshBlendActivator : public AActor {
    GENERATED_BODY()
public:
    AMeshBlendActivator(const FObjectInitializer& ObjectInitializer);

};

