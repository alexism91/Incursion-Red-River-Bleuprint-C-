#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoReceiveInput -FallbackName=EAutoReceiveInput
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "BlueprintCameraEvaluationDataRef.h"
#include "ECameraEvaluationDataCondition.h"
#include "EGameplayCameraComponentActivationMode.h"
#include "GameplayCameraSystemHost.h"
#include "GameplayCameraComponentBase.generated.h"

class APlayerController;
class UCineCameraComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameplayCameraComponentBase : public USceneComponent, public IGameplayCameraSystemHost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAutoReceiveInput::Type> AutoActivateForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetControlRotationWhenViewTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCineCameraComponent* OutputCameraComponent;
    
public:
    UGameplayCameraComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCineCameraComponent* GetOutputCameraComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlueprintCameraEvaluationDataRef GetInitialResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlueprintCameraEvaluationDataRef GetConditionalResult(ECameraEvaluationDataCondition Condition) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateCamera(bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCameraForPlayerIndex(int32 PlayerIndex, bool bSetAsViewTarget, EGameplayCameraComponentActivationMode ActivationMode);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCameraForPlayerController(APlayerController* PlayerController, bool bSetAsViewTarget, EGameplayCameraComponentActivationMode ActivationMode);
    

    // Fix for true pure virtual functions not being implemented
};

