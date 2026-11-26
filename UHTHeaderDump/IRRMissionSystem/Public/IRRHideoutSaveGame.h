#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRHideoutUpgradeCached.h"
#include "IRRHideoutSaveGame.generated.h"

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRHideoutSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> HideoutUnitLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> HideoutUnitTracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIRRHideoutUpgradeCached> RequiredItemsForNextUpgrade;
    
    UIRRHideoutSaveGame();

    UFUNCTION(BlueprintCallable)
    void SetRequiredItemsForUnit(FGameplayTag HideoutUnitTag, const TMap<FGameplayTag, int32>& RequiredItems);
    
    UFUNCTION(BlueprintCallable)
    void SetHideoutUnitLevels(const TMap<FGameplayTag, int32>& NewLevels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetRequiredItemsForUnit(FGameplayTag HideoutUnitTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, int32> GetHideoutUnitLevels() const;
    
};

