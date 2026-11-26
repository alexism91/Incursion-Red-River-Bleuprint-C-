#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "GameplayEffectAttributeCaptureSpec.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectAttributeCaptureSpec {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectAttributeCaptureDefinition BackingDefinition;
    
public:
    GAMEPLAYABILITIES_API FGameplayEffectAttributeCaptureSpec();
};

