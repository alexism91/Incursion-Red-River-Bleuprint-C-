#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EGameplayCueEvent.h"
#include "GameplayCueParameters.h"
#include "MovieSceneGameplayCueEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FMovieSceneGameplayCueEvent, AActor*, Target, FGameplayTag, GameplayTag, const FGameplayCueParameters&, Parameters, TEnumAsByte<EGameplayCueEvent::Type>, Event);

