#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AICoverSystem -ObjectName=CoverData -FallbackName=CoverData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=EasyBallistics -ObjectName=EFireMode -FallbackName=EFireMode
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ECoverIdleStance.h"
#include "EQUA_PlayerSlots.h"
#include "ERadioMessageType.h"
#include "EquippableViewmodelValues.h"
#include "JumpViewmodelAnimationSettings.h"
#include "QUA_BlendSetting.h"
#include "QuarantineInterface.generated.h"

class AActor;
class AQUA_Weapon;
class UAnimInstance;
class UAnimMontage;
class UMovementManager;

UINTERFACE(Blueprintable, MinimalAPI)
class UQuarantineInterface : public UInterface {
    GENERATED_BODY()
};

class IQuarantineInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateControllerSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerBark(ERadioMessageType RadioMessageType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopMontageNetworked(UAnimMontage* TPMontage, UAnimMontage* FPMontage, UAnimMontage* WeaponMontage, AActor* Weapon, bool All);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCameraFOV(float FOV);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_SwitchFireMode(EFireMode FireMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_ShellInsert();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_ShellChamberInsert();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_MagPutBack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_MagPullOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_MagDrop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_FlyBy(AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_ExecuteChamber();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_EquipEvent(FName SlotName, bool Equip);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_CoverTransitionFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Notify_CheckChamber(FGameplayTag GameplayTagOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MontageNetworked(FName Group, FName MontageSection, UAnimMontage* TPMontage, UAnimMontage* FPMontage, UAnimMontage* WeaponMontage, float PlayRate, FQUA_BlendSetting BlendInSetting, FQUA_BlendSetting BlendOutSetting, bool StopPreviousMontage, bool AdjustWeaponMontagePlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LeaveCover(FCoverData Data, bool Aggressive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDead();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InterruptCover(FCoverData Data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEquippableViewmodelValues GetViewmodelValues();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMovementManager* GetMovementManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMagCapacityPercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetLeanValue();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector2D GetFreeLookOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FJumpViewmodelAnimationSettings GetFPJumpViewmodelValues();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECoverIdleStance GetCoverType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetCharacterName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetBreathingLoop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetBlockAlpha();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimInstance* GetAnimInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAimStamina();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAimOffset();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EQUA_PlayerSlots GetActiveWeaponSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AQUA_Weapon* GetActiveWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnterCover(FCoverData Data);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DealDamage();
    
};

