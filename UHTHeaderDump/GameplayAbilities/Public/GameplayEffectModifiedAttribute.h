#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "GameplayEffectModifiedAttribute.generated.h"

USTRUCT(BlueprintType)
struct FGameplayEffectModifiedAttribute {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalMagnitude;
    
    GAMEPLAYABILITIES_API FGameplayEffectModifiedAttribute();
};

