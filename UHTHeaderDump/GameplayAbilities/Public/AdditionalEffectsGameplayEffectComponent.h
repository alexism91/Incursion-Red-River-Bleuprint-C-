#pragma once
#include "CoreMinimal.h"
#include "ConditionalGameplayEffect.h"
#include "GameplayEffectComponent.h"
#include "Templates/SubclassOf.h"
#include "AdditionalEffectsGameplayEffectComponent.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnApplicationCopyDataFromOriginalSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionalGameplayEffect> OnApplicationGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> OnCompleteAlways;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> OnCompleteNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> OnCompletePrematurely;
    
    UAdditionalEffectsGameplayEffectComponent();

};

