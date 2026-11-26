#pragma once
#include "CoreMinimal.h"
#include "PredictionKey.h"
#include "GameplayAbilityLocalAnimMontage.generated.h"

class UAnimMontage;
class UGameplayAbility;

USTRUCT(BlueprintType)
struct FGameplayAbilityLocalAnimMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlayInstanceId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPredictionKey PredictionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGameplayAbility> AnimatingAbility;
    
    GAMEPLAYABILITIES_API FGameplayAbilityLocalAnimMontage();
};

