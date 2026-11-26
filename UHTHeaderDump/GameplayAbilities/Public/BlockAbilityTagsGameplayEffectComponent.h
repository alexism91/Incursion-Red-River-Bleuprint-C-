#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "InheritedTagContainer.h"
#include "BlockAbilityTagsGameplayEffectComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritedTagContainer InheritableBlockedAbilityTagsContainer;
    
public:
    UBlockAbilityTagsGameplayEffectComponent();

};

