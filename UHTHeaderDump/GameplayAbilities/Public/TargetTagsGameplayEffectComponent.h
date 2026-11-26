#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "InheritedTagContainer.h"
#include "TargetTagsGameplayEffectComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritedTagContainer InheritableGrantedTagsContainer;
    
public:
    UTargetTagsGameplayEffectComponent();

};

