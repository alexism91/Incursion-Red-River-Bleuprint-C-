#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "GameplayAbilityTargetData.h"
#include "GameplayAbilityTargetData_SingleTargetHit.generated.h"

USTRUCT(BlueprintType)
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bHitReplaced;
    
    GAMEPLAYABILITIES_API FGameplayAbilityTargetData_SingleTargetHit();
};

