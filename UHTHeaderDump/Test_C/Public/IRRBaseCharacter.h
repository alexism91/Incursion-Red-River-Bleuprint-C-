#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagAssetInterface -FallbackName=GameplayTagAssetInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAINoiseData -FallbackName=IRRAINoiseData
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRNavTrackingInterface -FallbackName=IRRNavTrackingInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=SensePointData -FallbackName=SensePointData
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=SenseStimulusInterface -FallbackName=SenseStimulusInterface
#include "EIRRAcousticEnvironment.h"
#include "EIRRBodyPart.h"
#include "IRRAcousticEnvironmentInterface.h"
#include "IRRCharacterInterface.h"
#include "IRRDamageData.h"
#include "IRRBaseCharacter.generated.h"

class AActor;
class UAGRAnimMasterComponent;
class UAGR_SoundMaster;
class UAdvancedAkComponent;
class UAdvancedMovementComponent;
class UAkComponent;
class UClothingComponent;
class UEquipmentComponent;
class UEquippableComponent;
class UGameplayAbilityComponent;
class UGameplayTagsComponent;
class UHealthComponent;
class UIRRAIDataComponent;
class UIRRHealthCosmeticsComponent;
class UIRROutfitComponent;
class UIRRSuppressionReceiver;
class UIRRTeamComponent;
class UIRRZoneEffectTrackerComponent;
class ULeanComponent;
class UMontageComponent;
class USenseReceiverComponent;
class USenseStimulusComponent;
class UTacticalComponent;
class UWeaponComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRBaseCharacter : public ACharacter, public IGameplayTagAssetInterface, public ISenseStimulusInterface, public IIRRNavTrackingInterface, public IIRRCharacterInterface, public IIRRAcousticEnvironmentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableUnusedGearOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRSuppressionReceiver* SuppressionReceiverComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRTeamComponent* TeamComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIDataComponent* AIDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRZoneEffectTrackerComponent* ZoneEffectTrackerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRHealthCosmeticsComponent* HealthCosmeticsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USenseStimulusComponent* SenseStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USenseReceiverComponent* SenseReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponComponent* WeaponInHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquippableComponent* EquippableInHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagsComponent* GameplayTagsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayAbilityComponent* GameplayAbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquipmentComponent* EquipmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULeanComponent* LeanComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAGR_SoundMaster* AGRSoundMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAGRAnimMasterComponent* AGRAnimMasterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClothingComponent* ClothingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRROutfitComponent* OutfitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMontageComponent* MontageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTacticalComponent*> ActiveTacticalDevices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAdvancedAkComponent* AcousticEmitter;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrozenSensePointCount;
    
    AIRRBaseCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RefreshTraceIgnoreActors();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerRevive(AActor* RevivedBy);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(FIRRDamageData DamageData);
    
    UFUNCTION(BlueprintCallable)
    void OnEquippableChanged(UEquippableComponent* EquippableComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAcousticallyIndoors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRZoneEffectTrackerComponent* GetZoneEffectTrackerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRTeamComponent* GetTeamComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRSuppressionReceiver* GetSuppressionReceiver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAGR_SoundMaster* GetSoundMasterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USenseStimulusComponent* GetSenseStimulusComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USenseReceiverComponent* GetSenseReceiverComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRROutfitComponent* GetOutfitComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNeutralEyeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNeutralEyeHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMontageComponent* GetMontageComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULeanComponent* GetLeanComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRHealthCosmeticsComponent* GetHealthCosmeticsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHealthComponent* GetHealthComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayTagsComponent* GetGameplayTagsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEyeLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEquipmentComponent* GetEquipmentComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClothingComponent* GetClothingComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FSensePointData> GetBoneSensePoints(FName SensorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBodyPartLocation(const EIRRBodyPart BodyPartType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAGRAnimMasterComponent* GetAnimMasterComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkComponent* GetAkComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAIDataComponent* GetAIDataComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAdvancedMovementComponent* GetAdvancedMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAcousticRoomActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRAcousticEnvironment GetAcousticEnvironment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayAbilityComponent* GetAbilityComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableUnusedGearOverlaps();
    
public:
    UFUNCTION(BlueprintCallable)
    void BroadcastAINoiseBP(const FIRRAINoiseData& Data);
    

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

