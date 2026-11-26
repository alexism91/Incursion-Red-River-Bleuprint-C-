#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayCueNotify_InputDevicePropertyInfo.generated.h"

class UInputDeviceProperty;

USTRUCT(BlueprintType)
struct FGameplayCueNotify_InputDevicePropertyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UInputDeviceProperty>> DeviceProperties;
    
    GAMEPLAYABILITIES_API FGameplayCueNotify_InputDevicePropertyInfo();
};

