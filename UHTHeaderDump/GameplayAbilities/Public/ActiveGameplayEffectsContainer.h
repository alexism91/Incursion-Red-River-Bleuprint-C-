#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "ActiveGameplayEffect.h"
#include "ActiveGameplayEffectsContainer.generated.h"

USTRUCT(BlueprintType)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffect> GameplayEffects_Internal;
    
public:
    GAMEPLAYABILITIES_API FActiveGameplayEffectsContainer();
};

