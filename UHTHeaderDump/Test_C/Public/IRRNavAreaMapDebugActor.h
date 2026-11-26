#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "IRRNavAreaMapDebugActor.generated.h"

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRNavAreaMapDebugActor : public AActor {
    GENERATED_BODY()
public:
    AIRRNavAreaMapDebugActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegenerateNavAreaMap();
    
};

