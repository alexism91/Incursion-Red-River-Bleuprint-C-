#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "CameraAnimationHandle.h"
#include "CameraAnimationParams.h"
#include "EngineCamerasSubsystem.generated.h"

class APlayerController;
class UCameraAnimationSequence;

UCLASS(Blueprintable, MinimalAPI)
class UEngineCamerasSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UEngineCamerasSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopCameraAnimation(APlayerController* PlayerController, const FCameraAnimationHandle& Handle, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraAnimationsOf(APlayerController* PlayerController, UCameraAnimationSequence* Sequence, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    void StopAllCameraAnimations(APlayerController* PlayerController, bool bImmediate);
    
    UFUNCTION(BlueprintCallable)
    FCameraAnimationHandle PlayCameraAnimation(APlayerController* PlayerController, UCameraAnimationSequence* Sequence, FCameraAnimationParams Params);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCameraAnimationActive(APlayerController* PlayerController, const FCameraAnimationHandle& Handle) const;
    
};

