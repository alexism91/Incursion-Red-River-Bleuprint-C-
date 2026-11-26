#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlueprintCameraDirectorActivateParams.h"
#include "BlueprintCameraDirectorDeactivateParams.h"
#include "BlueprintCameraDirectorEvaluationParams.h"
#include "BlueprintCameraEvaluationDataRef.h"
#include "ECameraEvaluationDataCondition.h"
#include "Templates/SubclassOf.h"
#include "BlueprintCameraDirectorEvaluator.generated.h"

class AActor;
class UCameraRigAsset;
class UCameraRigProxyAsset;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UBlueprintCameraDirectorEvaluator : public UObject {
    GENERATED_BODY()
public:
    UBlueprintCameraDirectorEvaluator();

    UFUNCTION(BlueprintCallable)
    bool RunChildCameraDirector(float DeltaTime, FName ChildSlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RunCameraDirector(float DeltaTime, UObject* EvaluationContextOwner, const FBlueprintCameraDirectorEvaluationParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RemoveChildEvaluationContext(UObject* ChildEvaluationContextOwner, FName ChildSlotName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlueprintCameraEvaluationDataRef GetInitialContextResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlueprintCameraEvaluationDataRef GetConditionalContextResult(ECameraEvaluationDataCondition Condition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* FindEvaluationContextOwnerActor(TSubclassOf<AActor> ActorClass) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePersistentVisualCameraRig(UCameraRigAsset* CameraRigPrefab);
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePersistentGlobalCameraRig(UCameraRigAsset* CameraRigPrefab);
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePersistentBaseCameraRig(UCameraRigAsset* CameraRigPrefab);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DeactivateCameraDirector(UObject* EvaluationContextOwner, const FBlueprintCameraDirectorDeactivateParams& Params);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName AddChildEvaluationContext(UObject* ChildEvaluationContextOwner);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePersistentVisualCameraRig(UCameraRigAsset* CameraRigPrefab);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePersistentGlobalCameraRig(UCameraRigAsset* CameraRigPrefab);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePersistentBaseCameraRig(UCameraRigAsset* CameraRigPrefab);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCameraRigViaProxy(UCameraRigProxyAsset* CameraRigProxy, bool bForceNewInstance);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCameraRig(UCameraRigAsset* CameraRig, bool bForceNewInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateCameraDirector(UObject* EvaluationContextOwner, const FBlueprintCameraDirectorActivateParams& Params);
    
};

