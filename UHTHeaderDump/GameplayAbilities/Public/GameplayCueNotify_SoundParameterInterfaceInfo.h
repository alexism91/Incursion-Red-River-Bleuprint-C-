#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_SoundParameterInterfaceInfo.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCueNotify_SoundParameterInterfaceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StopTriggerName;
    
    GAMEPLAYABILITIES_API FGameplayCueNotify_SoundParameterInterfaceInfo();
};

