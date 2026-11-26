#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CameraCalibrationCore -ObjectName=LensDistortionState -FallbackName=LensDistortionState
//CROSS-MODULE INCLUDE V2: -ModuleName=CameraCalibrationCore -ObjectName=LensFileEvaluationInputs -FallbackName=LensFileEvaluationInputs
//CROSS-MODULE INCLUDE V2: -ModuleName=CameraCalibrationCore -ObjectName=LensFilePicker -FallbackName=LensFilePicker
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CameraFilmbackSettings -FallbackName=CameraFilmbackSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ComponentReference -FallbackName=ComponentReference
#include "EDistortionRenderingMode.h"
#include "EDistortionSource.h"
#include "EFIZEvaluationMode.h"
#include "EFilmbackOverrideSource.h"
#include "Templates/SubclassOf.h"
#include "LensComponent.generated.h"

class UCineCameraComponent;
class ULensDistortionModelHandlerBase;
class ULensFile;
class ULensModel;
class UMaterialInstanceDynamic;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LENSCOMPONENT_API ULensComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLensFilePicker LensFilePicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFIZEvaluationMode EvaluationMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference TargetCameraComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLensFileEvaluationInputs EvalInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDistortionSource DistortionStateSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyDistortion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDistortionRenderingMode DistortionRenderingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCameraOverscan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULensModel> LensModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLensDistortionState DistortionState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleOverscan;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverscanMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFilmbackOverrideSource FilmbackOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFilmbackSettings CroppedFilmback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyNodalOffsetOnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector OriginalTrackedComponentLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector OriginalTrackedComponentRotation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform OriginalTrackedComponentTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDistortionSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LastDistortionMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCineCameraComponent* LastCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ULensModel>, ULensDistortionModelHandlerBase*> LensDistortionHandlerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> TrackedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TrackedComponentName;
    
public:
    ULensComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasNodalOffsetAppliedThisTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasDistortionEvaluated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldApplyNodalOffsetOnTick() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldApplyDistortion() const;
    
    UFUNCTION(BlueprintCallable)
    void SetOverscanMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetLensModel(TSubclassOf<ULensModel> Model);
    
    UFUNCTION(BlueprintCallable)
    void SetLensFilePicker(FLensFilePicker LensFile);
    
    UFUNCTION(BlueprintCallable)
    void SetLensFileEvaluationInputs(float InFocus, float InZoom);
    
    UFUNCTION(BlueprintCallable)
    void SetLensFile(ULensFile* LensFile);
    
    UFUNCTION(BlueprintCallable)
    void SetFIZEvaluationMode(EFIZEvaluationMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmbackOverrideSetting(EFilmbackOverrideSource Setting);
    
    UFUNCTION(BlueprintCallable)
    void SetDistortionState(FLensDistortionState State);
    
    UFUNCTION(BlueprintCallable)
    void SetDistortionSource(EDistortionSource Source);
    
    UFUNCTION(BlueprintCallable)
    void SetCroppedFilmback(FCameraFilmbackSettings Filmback);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyNodalOffsetOnTick(bool bApplyNodalOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetApplyDistortion(bool bApply);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverscanMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOriginalFocalLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ULensModel> GetLensModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLensFilePicker GetLensFilePicker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLensFileEvaluationInputs GetLensFileEvaluationInputs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULensFile* GetLensFile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULensDistortionModelHandlerBase* GetLensDistortionHandler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFIZEvaluationMode GetFIZEvaluationMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFilmbackOverrideSource GetFilmbackOverrideSetting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLensDistortionState GetDistortionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDistortionSource GetDistortionSource() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCameraFilmbackSettings GetCroppedFilmback() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearDistortionState();
    
    UFUNCTION(BlueprintCallable)
    void ApplyNodalOffset(USceneComponent* ComponentToOffset, bool bUseManualInputs, float ManualFocusInput, float ManualZoomInput);
    
};

