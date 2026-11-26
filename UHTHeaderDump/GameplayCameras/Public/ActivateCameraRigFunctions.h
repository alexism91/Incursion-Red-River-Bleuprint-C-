#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ActivateCameraRigFunctions.generated.h"

class APlayerController;
class UCameraRigAsset;
class UObject;

UCLASS(Blueprintable)
class UActivateCameraRigFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActivateCameraRigFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivatePersistentVisualCameraRig(UObject* WorldContextObject, APlayerController* PlayerController, UCameraRigAsset* CameraRig);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivatePersistentGlobalCameraRig(UObject* WorldContextObject, APlayerController* PlayerController, UCameraRigAsset* CameraRig);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivatePersistentBaseCameraRig(UObject* WorldContextObject, APlayerController* PlayerController, UCameraRigAsset* CameraRig);
    
};

