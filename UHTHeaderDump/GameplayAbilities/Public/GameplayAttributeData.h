#pragma once
#include "CoreMinimal.h"
#include "GameplayAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAttributeData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
public:
    GAMEPLAYABILITIES_API FGameplayAttributeData();
};

