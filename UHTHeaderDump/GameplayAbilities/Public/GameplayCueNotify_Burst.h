#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_BurstEffects.h"
#include "GameplayCueNotify_PlacementInfo.h"
#include "GameplayCueNotify_SpawnCondition.h"
#include "GameplayCueNotify_SpawnResult.h"
#include "GameplayCueNotify_Static.h"
#include "GameplayCueParameters.h"
#include "GameplayCueNotify_Burst.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_SpawnCondition DefaultSpawnCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_PlacementInfo DefaultPlacementInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_BurstEffects BurstEffects;
    
public:
    UGameplayCueNotify_Burst();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBurst(AActor* Target, const FGameplayCueParameters& Parameters, const FGameplayCueNotify_SpawnResult& SpawnResults) const;
    
};

