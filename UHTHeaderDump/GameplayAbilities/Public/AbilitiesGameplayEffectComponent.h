#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpecConfig.h"
#include "GameplayEffectComponent.h"
#include "AbilitiesGameplayEffectComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAbilitiesGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpecConfig> GrantAbilityConfigs;
    
public:
    UAbilitiesGameplayEffectComponent();

};

