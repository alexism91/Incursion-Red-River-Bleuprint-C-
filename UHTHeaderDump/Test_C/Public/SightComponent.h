#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WeightedBlendable -FallbackName=WeightedBlendable
#include "AttachmentComponent.h"
#include "DynamicMaterialRuntime.h"
#include "DynamicMaterialSetup.h"
#include "OnMagnificationChangedDelegate.h"
#include "OnSightTriggeredDelegate.h"
#include "SightData.h"
#include "SightComponent.generated.h"

class UCurveFloat;
class UMaterialParameterCollection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API USightComponent : public UAttachmentComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSightData> SightModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDynamicMaterialSetup> LocalMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedBlendable> CameraBlendables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* FieldOfViewMaterialParameterCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldOfViewParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SightTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MagnificationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SightModeKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDynamicMaterialRuntime> LocalMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FLineCurve;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSightTriggered OnSightTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMagnificationChanged OnMagnificationChanged;
    
    USightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TrySwitchMagnificationLevel(bool bIncrement);
    
    UFUNCTION(BlueprintCallable)
    bool TryCycleSightMode();
    
    UFUNCTION(BlueprintCallable)
    void TriggerSight(bool IsEnabled, float TransitionTime);
    
    UFUNCTION(BlueprintCallable)
    void SightTransitionUpdate(float TransitionAlpha);
    
    UFUNCTION(BlueprintCallable)
    void SetSightMode(FName NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetMagnificationLevel(int32 newIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_TriggerSight(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool HasScopeMode();
    
    UFUNCTION(BlueprintCallable)
    void GetTargetFOV(float& CameraFOV, float& HandsFOV, float PlayerCameraFOV);
    
    UFUNCTION(BlueprintCallable)
    FSightData GetSightData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMagnificationLevel();
    
};

