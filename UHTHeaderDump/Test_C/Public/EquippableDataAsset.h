#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CharacterMontageSet.h"
#include "EquipMontageSet.h"
#include "EquippableBaseAnimationSettings.h"
#include "EquippableDataAsset.generated.h"

class UAkSwitchValue;
class UAnimSequence;
class UEquippableViewmodelSettings;

UCLASS(Blueprintable)
class TEST_C_API UEquippableDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquippableBaseAnimationSettings BaseAnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquipMontageSet> EquipMontageSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquippableViewmodelSettings* ViewmodelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet InspectMontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* WeaponTypeSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimStaminaDrainMultiplier;
    
    UEquippableDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetOverlayPoseTag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetLinkedAnimGraph();
    
    UFUNCTION(BlueprintCallable)
    FCharacterMontageSet GetInspectMontageSet();
    
    UFUNCTION(BlueprintCallable)
    UAnimSequence* GetIdleAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEquippedSocketName();
    
    UFUNCTION(BlueprintCallable)
    FEquipMontageSet GetEquipMontageSet(FGameplayTag Slot);
    
};

