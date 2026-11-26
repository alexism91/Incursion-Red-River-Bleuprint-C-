#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpecContainer.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpec> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* Owner;
    
    GAMEPLAYABILITIES_API FGameplayAbilitySpecContainer();
};

