#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamId -FallbackName=GenericTeamId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRNavDataInterface -FallbackName=IRRNavDataInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=PatrolActionSystem -ObjectName=UPSGroupMovementAIController -FallbackName=UPSGroupMovementAIController
#include "AIInterface.h"
#include "IRRCharacterInterface.h"
#include "IRRDamageData.h"
#include "IRRVisionConeSet.h"
#include "IRRAIBaseController.generated.h"

class AActor;
class AIRRAIBaseCharacter;
class APawn;
class UHTN;
class UHTNComponent;
class UIRRAIAimComponent;
class UIRRAIBarkController;
class UIRRAIBehaviorComponent;
class UIRRAIBossComponent;
class UIRRAICoverComponent;
class UIRRAIFocusComponent;
class UIRRAIGrenadeThrowComponent;
class UIRRAIGroupComponent;
class UIRRAIHealthStateManager;
class UIRRAIReloadComponent;
class UIRRAISearchComponent;
class UIRRAIStanceComponent;
class UIRRAITarget;
class UIRRAITargetTracker;
class UIRRAIWeaponManager;
class UIRRAIWeaponSelector;
class UIRRMoraleComponent;
class UIRRStatEffectComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRAIBaseController : public AUPSGroupMovementAIController, public IGameplayTagAssetInterface, public IAIInterface, public IIRRNavDataInterface, public IIRRCharacterInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTN* HTNAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxControlRotationPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHTNComponent* HTNComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAITargetTracker* TargetTrackerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIGroupComponent* GroupComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIBehaviorComponent* BehaviorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIWeaponManager* WeaponManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIReloadComponent* ReloadComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIWeaponSelector* WeaponSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIGrenadeThrowComponent* GrenadeThrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIBarkController* BarkController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIAimComponent* AimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIBossComponent* BossComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAISearchComponent* SearchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAICoverComponent* AICoverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRStatEffectComponent* StatEffectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRMoraleComponent* MoraleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIStanceComponent* StanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIHealthStateManager* HealthStateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIFocusComponent* FocusComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggressivenessMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AggressivenessVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllegianceAggressivenessMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggressivenessRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionTimeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AppliedLoadoutId;
    
    AIRRAIBaseController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAI();
    
    UFUNCTION(BlueprintCallable)
    void Replan();
    
    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FGameplayTag& Tag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnOwnerRevived(AActor* RevivedBy);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(FIRRDamageData DamageData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInVisionCone(const FVector& Location, bool bApplyModifiers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInGroup(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasResolvedLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIWeaponSelector* GetWeaponSelector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIWeaponManager* GetWeaponManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVisionCones(FIRRVisionConeSet& OutCones, bool bApplyModifiers) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAITargetTracker* GetTargetTracker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAITarget* GetTarget(const APawn* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRStatEffectComponent* GetStatEffectComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIStanceComponent* GetStanceComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpawnIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIReloadComponent* GetReloadComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReactionTimeMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPawnNeutralEyeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPawnEyeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRMoraleComponent* GetMoraleComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTNComponent* GetHTNComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIHealthStateManager* GetHealthStateManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIGroupComponent* GetGroupComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIGrenadeThrowComponent* GetGrenadeThrowComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEyeHeightOffsetVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEyeHeightOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIBossComponent* GetBossComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIBehaviorComponent* GetBehaviorComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIRRAIBaseCharacter* GetBaseCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIBarkController* GetBarkController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAISearchComponent* GetAISearchComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIAimComponent* GetAimComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAICoverComponent* GetAICoverComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAggressiveness() const;
    
    UFUNCTION(BlueprintCallable)
    void AddTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void ActivateHTN();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
protected:
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer BP_GetOwnedGameplayTags() const override PURE_VIRTUAL(BP_GetOwnedGameplayTags, return FGameplayTagContainer{};);
    
};

