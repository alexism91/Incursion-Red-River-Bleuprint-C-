#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "ScalableFloat.h"
#include "ChanceToApplyGameplayEffectComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ChanceToApplyToTarget;
    
public:
    UChanceToApplyGameplayEffectComponent();

};

