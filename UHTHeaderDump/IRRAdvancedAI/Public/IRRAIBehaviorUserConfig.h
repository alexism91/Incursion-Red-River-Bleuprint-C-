#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRAIStatEffect.h"
#include "IRRAIBehaviorUserConfig.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAIBehaviorUserConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIRRAIStatEffect> BehaviorStateEffects;
    
    FIRRAIBehaviorUserConfig();
};

