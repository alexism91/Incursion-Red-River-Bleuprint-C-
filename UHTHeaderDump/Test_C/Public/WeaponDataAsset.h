#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CharacterMontageSet.h"
#include "EquippableDataAsset.h"
#include "MagMontageSet.h"
#include "MailFunctionAnimSet.h"
#include "NoMagMontageSet.h"
#include "ReloadMagMontageSet.h"
#include "ReloadManualMontageSet.h"
#include "SwitchFireModeMontageSet.h"
#include "WeaponAudioSettings.h"
#include "WeaponDataAsset.generated.h"

class UWeaponDataAsset;
class UWeaponRecoilSettings;

UCLASS(Blueprintable)
class TEST_C_API UWeaponDataAsset : public UEquippableDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponDataAsset* ParentDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet StandingFireMontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet AimingFireMontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireMontageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireMontageAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet EmptyFireMontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet EmptyInspectMontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet EmptyChamberMontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet FireChamberMontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMailFunctionAnimSet MalfunctionAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoMagMontageSet NoMagMontageSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMagMontageSet> MagMontageSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwitchFireModeMontageSet> SwitchFireModeMontageSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimReloadInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PointAimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAimDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponRecoilSettings* RecoilSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponSetRateOfFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponSetTailPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponSetTailVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAudioSettings UnSuppressedAudioSettings_FP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAudioSettings SuppressedAudioSettings_FP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAudioSettings UnSuppressedAudioSettings_TP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponAudioSettings SuppressedAudioSettings_TP;
    
    UWeaponDataAsset();

    UFUNCTION(BlueprintCallable)
    FSwitchFireModeMontageSet GetSwitchFireModeMontageSet(FGameplayTag FromFireModeTag, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    FCharacterMontageSet GetStandardCheckMagMontageSet(FGameplayTag Mag);
    
    UFUNCTION(BlueprintCallable)
    FNoMagMontageSet GetNoMagMontageSet();
    
    UFUNCTION(BlueprintCallable)
    FReloadManualMontageSet GetManualReloadMontageSet(FGameplayTag Mag, FGameplayTag ReloadTag, bool& bFound);
    
    UFUNCTION(BlueprintCallable)
    FMailFunctionAnimSet GetMalfunctionMontageSet();
    
    UFUNCTION(BlueprintCallable)
    FReloadMagMontageSet GetMagReloadMontageSet(FGameplayTag Mag, FGameplayTag ReloadTag);
    
    UFUNCTION(BlueprintCallable)
    FMagMontageSet GetMagMontageSet(FGameplayTag Mag);
    
    UFUNCTION(BlueprintCallable)
    FCharacterMontageSet GetEmptyInspectMontageSet();
    
    UFUNCTION(BlueprintCallable)
    FCharacterMontageSet GetChamberOpenCheckMagMontageSet(FGameplayTag Mag);
    
    UFUNCTION(BlueprintCallable)
    FCharacterMontageSet GetChamberMontageSet(bool bManual);
    
};

