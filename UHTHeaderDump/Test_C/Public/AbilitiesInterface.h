#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=LowPolyShooterPack -ObjectName=LPSPGameAbility -FallbackName=LPSPGameAbility
#include "QUA_Abilities.h"
#include "AbilitiesInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UAbilitiesInterface : public UInterface {
    GENERATED_BODY()
};

class IAbilitiesInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateGameplayTags(const FGameplayTagContainer ToAddAbilities, const FGameplayTagContainer ToRemoveAbilities);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopAbility(FLPSPGameAbility Ability);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartAbility(FLPSPGameAbility Ability);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetCurrentGameplayTags();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FQUA_Abilities GetAbilities();
    
};

