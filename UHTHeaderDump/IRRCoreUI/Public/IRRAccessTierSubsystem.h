#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "IRRAccessTierSubsystem.generated.h"

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRAccessTierSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIRRAccessTierSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetShowAllGated(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetGrantedTiers(const FGameplayTagContainer& InTiers);
    
    UFUNCTION(BlueprintCallable)
    void RevokeTier(FGameplayTag Tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowAllGated() const;
    
    UFUNCTION(BlueprintCallable)
    void GrantTier(FGameplayTag Tier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetGrantedTiers() const;
    
};

