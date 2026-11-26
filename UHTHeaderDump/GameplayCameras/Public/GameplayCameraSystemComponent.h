#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoReceiveInput -FallbackName=EAutoReceiveInput
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "CameraRigInstanceID.h"
#include "GameplayCameraSystemHost.h"
#include "GameplayCameraSystemComponent.generated.h"

class AActor;
class APlayerController;
class UCameraRigAsset;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameplayCameraSystemComponent : public USceneComponent, public IGameplayCameraSystemHost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAutoReceiveInput::Type> AutoActivateForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetPlayerControllerRotation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerController> WeakPlayerController;
    
public:
    UGameplayCameraSystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCameraModifierRig(FCameraRigInstanceID InstanceId, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    FCameraRigInstanceID StartVisualCameraModifierRig(const UCameraRigAsset* CameraRig, int32 OrderKey);
    
    UFUNCTION(BlueprintCallable)
    FCameraRigInstanceID StartGlobalCameraModifierRig(const UCameraRigAsset* CameraRig, int32 OrderKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraSystemActiveForPlayController(APlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCameraSystem(AActor* NextViewTarget);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCameraSystemForPlayerIndex(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCameraSystemForPlayerController(APlayerController* PlayerController);
    

    // Fix for true pure virtual functions not being implemented
};

