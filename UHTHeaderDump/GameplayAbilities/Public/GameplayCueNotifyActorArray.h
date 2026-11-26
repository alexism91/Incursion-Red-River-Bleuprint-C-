#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotifyActorArray.generated.h"

class AGameplayCueNotify_Actor;

USTRUCT(BlueprintType)
struct FGameplayCueNotifyActorArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AGameplayCueNotify_Actor*> Actors;
    
    GAMEPLAYABILITIES_API FGameplayCueNotifyActorArray();
};

