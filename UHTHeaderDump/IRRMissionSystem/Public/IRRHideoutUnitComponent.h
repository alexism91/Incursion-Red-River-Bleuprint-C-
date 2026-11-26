#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRHideoutUpgradeLevel.h"
#include "IRRHideoutUpgradeRequirements.h"
#include "OnHideoutUnitLevelChangedDelegate.h"
#include "IRRHideoutUnitComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRHideoutUnitComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HideoutUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRHideoutUpgradeLevel> UpgradeLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> RequiredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTracked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHideoutUnitLevelChanged OnHideoutUnitLevelChanged;
    
    UIRRHideoutUnitComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SubmitRequiredItem(FGameplayTag ItemTag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetTracked(bool bNewTracked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleUpgradeHideoutUnit(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTracked() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasAllRequiredItems();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleUpgradeHideoutUnit(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, int32> GetRequiredItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetHideoutUnitTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHideoutUnitLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHideoutUnitDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteUpgradeHideoutUnit(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    bool EvaluateRequirements(FIRRHideoutUpgradeRequirements Requirements);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanUpgradeHideoutUnit(int32 NewLevel);
    
};

