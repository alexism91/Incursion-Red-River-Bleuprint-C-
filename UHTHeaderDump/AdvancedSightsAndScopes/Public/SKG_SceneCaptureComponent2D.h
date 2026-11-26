#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
#include "ESKGScopeAdjustment.h"
#include "OnElevationChangedDelegate.h"
#include "OnWindageChangedDelegate.h"
#include "RenderTargetSize.h"
#include "SKGReticleSettings.h"
#include "SKGSightMagnification.h"
#include "SKGSightOptimization.h"
#include "SKGSightZero.h"
#include "SKG_SceneCaptureComponent2D.generated.h"

class UMeshComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ADVANCEDSIGHTSANDSCOPES_API USKG_SceneCaptureComponent2D : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSKGSightOptimization ScopeOptimization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSKGSightMagnification MagnificationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSKGReticleSettings ReticleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESKGScopeAdjustment TurretAdjustmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderTargetSize RenderTargetSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RenderTargetMaterialVarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScopeComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MilliradianAdjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MOAAdjustment;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnElevationChanged OnElevationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWindageChanged OnWindageChanged;
    
public:
    USKG_SceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ZoomOut();
    
    UFUNCTION(BlueprintCallable)
    void ZoomIn();
    
    UFUNCTION(BlueprintCallable)
    void StopCapture();
    
    UFUNCTION(BlueprintCallable)
    void StartCapture();
    
    UFUNCTION(BlueprintCallable)
    void SetReticle(uint8 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningMesh(UMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    void SetNewZeroWindage();
    
    UFUNCTION(BlueprintCallable)
    void SetNewZeroElevation();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToZeroWindage();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToZeroElevation();
    
    UFUNCTION(BlueprintCallable)
    FVector2D PointOfImpactUp(uint8 Clicks);
    
    UFUNCTION(BlueprintCallable)
    FVector2D PointOfImpactRight(uint8 Clicks);
    
    UFUNCTION(BlueprintCallable)
    FVector2D PointOfImpactLeft(uint8 Clicks);
    
    UFUNCTION(BlueprintCallable)
    FVector2D PointOfImpactDown(uint8 Clicks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSKGSightZero GetSightZero() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMagnificationSensitivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMagnification() const;
    
    UFUNCTION(BlueprintCallable)
    void CycleReticle();
    
};

