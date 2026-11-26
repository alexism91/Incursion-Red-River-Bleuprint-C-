#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "SimpleGameplayAbility_Toggleable.h"
#include "Templates/SubclassOf.h"
#include "SimpleGameplayAbility_Aim.generated.h"

class USimpleGameplayEffect;

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_Aim : public USimpleGameplayAbility_Toggleable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USimpleGameplayEffect> AimingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InterruptAbilitiesOnFinishWithTags;
    
    USimpleGameplayAbility_Aim();

private:
    UFUNCTION(BlueprintCallable)
    void OnOwnedTagsUpdated(FGameplayTagContainer Tags);
    
};

