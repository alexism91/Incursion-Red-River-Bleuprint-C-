#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4f -FallbackName=Vector4f
#include "EAspectRatioAxisConstraint.h"
#include "ECameraProjectionMode.h"
#include "MinimalViewInfo.h"
#include "PostProcessSettings.h"
#include "SceneComponent.h"
#include "CameraComponent.generated.h"

class IBlendableInterface;
class UBlendableInterface;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCameraComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FirstPersonFieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FirstPersonScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float OrthoWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bAutoCalculateOrthoPlanes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AutoPlaneShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float OrthoNearClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float OrthoFarClipPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bUpdateOrthoPlanes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bUseCameraHeightAsViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bConstrainAspectRatio: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAspectRatioAxisConstraint: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    uint8 bUseFieldOfViewForLOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Overscan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4f AsymmetricOverscan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bScaleResolutionWithOverscan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bCropOverscan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockToHmd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePawnControlRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableFirstPersonFieldOfView: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableFirstPersonScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECameraProjectionMode::Type> ProjectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PostProcessBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    UCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetUseCameraHeightAsViewTarget(bool bInUseCameraHeightAsViewTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateOrthoPlanes(bool bInUpdateOrthoPlanes);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleResolutionWithOverscan(bool bInScaleResolutionWithOverscan);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectionMode(TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
    
    UFUNCTION(BlueprintCallable)
    void SetOverscan(float InOverscan);
    
    UFUNCTION(BlueprintCallable)
    void SetOrthoWidth(float InOrthoWidth);
    
    UFUNCTION(BlueprintCallable)
    void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
    
    UFUNCTION(BlueprintCallable)
    void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstPersonScale(float InFirstPersonScale);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstPersonFieldOfView(float InFirstPersonFieldOfView);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldOfView(float InFieldOfView);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFirstPersonScale(bool bInEnableFirstPersonScale);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableFirstPersonFieldOfView(bool bInEnableFirstPersonFieldOfView);
    
    UFUNCTION(BlueprintCallable)
    void SetCropOverscan(bool bInCropOverscan);
    
    UFUNCTION(BlueprintCallable)
    void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlaneShift(float InAutoPlaneShift);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoCalculateOrthoPlanes(bool bAutoCalculate);
    
    UFUNCTION(BlueprintCallable)
    void SetAsymmetricOverscan(const FVector4f& InAsymmetricOverscan);
    
    UFUNCTION(BlueprintCallable)
    void SetAspectRatioAxisConstraint(TEnumAsByte<EAspectRatioAxisConstraint> InAspectRatioAxisConstraint);
    
    UFUNCTION(BlueprintCallable)
    void SetAspectRatio(float InAspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCameraMeshHiddenChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView);
    
    UFUNCTION(BlueprintCallable)
    void AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight);
    
};

