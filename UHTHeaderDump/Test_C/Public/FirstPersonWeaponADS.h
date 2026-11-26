#pragma once
#include "CoreMinimal.h"
#include "EAimTransitionSource.h"
#include "EAimTransitionState.h"
#include "FirstPersonWeaponSubObject.h"
#include "GlobalMaterialParameter.h"
#include "IRRGameplaySettings.h"
#include "OnTransitionStartedDelegate.h"
#include "FirstPersonWeaponADS.generated.h"

class UAkAudioEvent;
class UCurveFloat;
class UMaterialParameterCollection;
class USightComponent;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonWeaponADS : public UFirstPersonWeaponSubObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FLineAimTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultAimTransitionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* FieldOfViewMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldOfViewParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FLineFOVTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* AimAlphaMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimAlphaParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FLineAimAlphaTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAimTransitionState AimTransitionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAimMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USightComponent* TargetSightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USightComponent* OldTargetSightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPointSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGlobalMaterialParameter> DefaultGlobalMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGlobalMaterialParameter> BaseGlobalMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGlobalMaterialParameter> CurrentGlobalMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGlobalMaterialParameter> TargetGlobalMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAimTransitionSource, float> CameraFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAimTransitionSource, float> HandsFOV;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransitionStarted OnTransitionStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FLineCurve;
    
    UFirstPersonWeaponADS();

    UFUNCTION(BlueprintCallable)
    void UpdateMaterialParameters();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAim();
    
    UFUNCTION(BlueprintCallable)
    void TriggerPointSight();
    
    UFUNCTION(BlueprintCallable)
    void TriggerAim(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void StartTransition(bool bin);
    
    UFUNCTION(BlueprintCallable)
    bool RetargetSight();
    
    UFUNCTION(BlueprintCallable)
    void OnFirstPersonControllerSettingsChanged(FIRRGameplaySettings NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void OnAimTransitionUpdate(float NewAimAlpha);
    
    UFUNCTION(BlueprintCallable)
    void OnAimTransitionStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnAimTransitionMultiplierUpdated(float NewAimMultiplier);
    
    UFUNCTION(BlueprintCallable)
    FGlobalMaterialParameter LerpGlobalMaterialParameters(FGlobalMaterialParameter From, FGlobalMaterialParameter To, float Alpha);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAimTransitionUpdate(float NewAimAlpha, EAimTransitionState NewAimTransitionState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAimTransitionStarted();
    
    UFUNCTION(BlueprintCallable)
    float GetAimAlpha();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSight();
    
};

