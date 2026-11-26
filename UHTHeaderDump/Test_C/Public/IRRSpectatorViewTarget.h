#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "IRRSpectatorViewTarget.generated.h"

UCLASS(Blueprintable, NoExport, NotPlaceable, Transient)
class TEST_C_API AIRRSpectatorViewTarget : public AActor {
    GENERATED_BODY()
public:
    AIRRSpectatorViewTarget(const FObjectInitializer& ObjectInitializer);

};

