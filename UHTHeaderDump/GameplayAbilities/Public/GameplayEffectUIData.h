#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "GameplayEffectUIData.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UGameplayEffectUIData : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
    UGameplayEffectUIData();

};

