#pragma once
#include "CoreMinimal.h"
#include "GameplayTagBlueprintPropertyMapping.h"
#include "GameplayTagBlueprintPropertyMap.generated.h"

USTRUCT(BlueprintType)
struct FGameplayTagBlueprintPropertyMap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagBlueprintPropertyMapping> PropertyMappings;
    
public:
    GAMEPLAYABILITIES_API FGameplayTagBlueprintPropertyMap();
};

