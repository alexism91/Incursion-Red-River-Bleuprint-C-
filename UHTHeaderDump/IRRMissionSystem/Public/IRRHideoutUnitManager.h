#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRHideoutUnitManager.generated.h"

class UIRRHideoutUnitComponent;
class UIRRMissionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRHideoutUnitManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> DefaultHideoutUnitLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRHideoutUnitComponent*> HideoutUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRHideoutUnitComponent* ActiveHideoutUnit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMissionComponent* MissionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitHideoutUnitsDelay;
    
    UIRRHideoutUnitManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCachedHideoutRequirements();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterHideoutUnit(UIRRHideoutUnitComponent* HideoutUnit);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveHideoutUnit(UIRRHideoutUnitComponent* HideoutUnit);
    
    UFUNCTION(BlueprintCallable)
    void RequestSave();
    
    UFUNCTION(BlueprintCallable)
    void RegisterHideoutUnit(UIRRHideoutUnitComponent* HideoutUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpgradeLevelChanged(UIRRHideoutUnitComponent* HideoutUnit, int32 NewLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_InitHideoutUnits();
    
    UFUNCTION(BlueprintCallable)
    void InitHideoutUnits();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetHideoutUnitDisplayNameByTag(FGameplayTag GameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRHideoutUnitComponent* GetHideoutUnitByTag(FGameplayTag GameplayTag) const;
    
};

