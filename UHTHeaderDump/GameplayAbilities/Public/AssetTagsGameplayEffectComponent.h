#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "InheritedTagContainer.h"
#include "AssetTagsGameplayEffectComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInheritedTagContainer InheritableAssetTags;
    
public:
    UAssetTagsGameplayEffectComponent();

};

