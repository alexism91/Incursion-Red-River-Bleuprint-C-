#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameplayEffectComponent.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, Const, DefaultToInstanced, EditInlineNew, MinimalAPI, Within=GameplayEffect)
class UGameplayEffectComponent : public UObject {
    GENERATED_BODY()
public:
    UGameplayEffectComponent();

};

