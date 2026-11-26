#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectGrantedAbilityRemovePolicy.h"
#include "ScalableFloat.h"
#include "Templates/SubclassOf.h"
#include "GameplayAbilitySpecConfig.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FGameplayAbilitySpecConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LevelScalableFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;
    
    GAMEPLAYABILITIES_API FGameplayAbilitySpecConfig();
};

