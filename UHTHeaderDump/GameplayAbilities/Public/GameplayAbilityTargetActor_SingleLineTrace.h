#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetActor_Trace.h"
#include "GameplayAbilityTargetActor_SingleLineTrace.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace {
    GENERATED_BODY()
public:
    AGameplayAbilityTargetActor_SingleLineTrace(const FObjectInitializer& ObjectInitializer);

};

