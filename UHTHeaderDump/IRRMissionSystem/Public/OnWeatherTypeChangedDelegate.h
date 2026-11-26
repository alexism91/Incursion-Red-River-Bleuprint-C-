#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "OnWeatherTypeChangedDelegate.generated.h"

class UIRRWeatherSettings;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeatherTypeChanged, UIRRWeatherSettings*, NewWeatherType, FGameplayTag, MapTag);

