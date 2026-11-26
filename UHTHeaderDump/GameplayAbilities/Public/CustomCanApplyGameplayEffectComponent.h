#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectComponent.h"
#include "Templates/SubclassOf.h"
#include "CustomCanApplyGameplayEffectComponent.generated.h"

class UGameplayEffectCustomApplicationRequirement;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffectCustomApplicationRequirement>> ApplicationRequirements;
    
    UCustomCanApplyGameplayEffectComponent();

};

