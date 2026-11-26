#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BlueprintCameraEvaluationDataRef.h"
#include "CameraRigParameterInterop.generated.h"

class UCameraRigAsset;

UCLASS(Blueprintable, MinimalAPI)
class UCameraRigParameterInterop : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraRigParameterInterop();

    UFUNCTION(BlueprintCallable)
    static void SetCameraParameter(const FBlueprintCameraEvaluationDataRef& CameraData, UCameraRigAsset* CameraRig, FName ParameterName, const int32& NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void GetCameraParameter(const FBlueprintCameraEvaluationDataRef& CameraData, UCameraRigAsset* CameraRig, FName ParameterName, int32& ReturnValue);
    
};

