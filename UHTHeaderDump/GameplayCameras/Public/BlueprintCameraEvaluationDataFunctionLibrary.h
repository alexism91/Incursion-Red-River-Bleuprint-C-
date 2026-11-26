#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BlueprintCameraEvaluationDataRef.h"
#include "BlueprintCameraPose.h"
#include "BlueprintCameraEvaluationDataFunctionLibrary.generated.h"

class UCameraRigAsset;

UCLASS(Blueprintable)
class UBlueprintCameraEvaluationDataFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintCameraEvaluationDataFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetDefaultCameraRigParameters(const FBlueprintCameraEvaluationDataRef& CameraData, const UCameraRigAsset* CameraRig);
    
    UFUNCTION(BlueprintCallable)
    static void SetCameraPose(const FBlueprintCameraEvaluationDataRef& CameraData, const FBlueprintCameraPose& CameraPose);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBlueprintCameraEvaluationDataRef MakeCameraEvaluationData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBlueprintCameraPose GetCameraPose(const FBlueprintCameraEvaluationDataRef& CameraData);
    
    UFUNCTION(BlueprintCallable)
    static void BlendCameraEvaluationData(const FBlueprintCameraEvaluationDataRef& FromCameraData, const FBlueprintCameraEvaluationDataRef& ToCameraData, float Factor);
    
};

