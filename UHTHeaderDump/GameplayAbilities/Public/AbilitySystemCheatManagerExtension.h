#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManagerExtension -FallbackName=CheatManagerExtension
#include "AbilitySystemCheatManagerExtension.generated.h"

UCLASS(Blueprintable)
class UAbilitySystemCheatManagerExtension : public UCheatManagerExtension {
    GENERATED_BODY()
public:
    UAbilitySystemCheatManagerExtension();

    UFUNCTION(BlueprintCallable, Exec)
    void EffectRemove(const FString& NameOrHandle) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void EffectListActive() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void EffectApply(const FString& PartialName, float EffectLevel) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AbilityListGranted() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AbilityGrant(const FString& AssetSearchString) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AbilityCancel(const FString& PartialName) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void AbilityActivate(const FString& PartialName) const;
    
};

