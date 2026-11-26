#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "CameraRigInstanceID.h"
#include "EGameplayCamerasViewRotationMode.h"
#include "GameplayCameraSystemHost.h"
#include "GameplayCamerasPlayerCameraManager.generated.h"

class APlayerController;
class UCameraRigAsset;

UCLASS(Blueprintable, MinimalAPI, NoExport, NonTransient)
class AGameplayCamerasPlayerCameraManager : public APlayerCameraManager, public IGameplayCameraSystemHost {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayCamerasViewRotationMode ViewRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideViewRotationMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCameraManager* OriginalCameraManager;
    
public:
    AGameplayCamerasPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCameraModifierRig(FCameraRigInstanceID InstanceId, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StealPlayerController(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    FCameraRigInstanceID StartVisualCameraModifierRig(const UCameraRigAsset* CameraRig, int32 OrderKey);
    
    UFUNCTION(BlueprintCallable)
    FCameraRigInstanceID StartGlobalCameraModifierRig(const UCameraRigAsset* CameraRig, int32 OrderKey);
    
    UFUNCTION(BlueprintCallable)
    void ReleasePlayerController();
    

    // Fix for true pure virtual functions not being implemented
};

