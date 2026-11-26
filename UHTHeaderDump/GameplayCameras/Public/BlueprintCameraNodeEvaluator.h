#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlueprintCameraEvaluationDataRef.h"
#include "BlueprintCameraPose.h"
#include "Templates/SubclassOf.h"
#include "BlueprintCameraNodeEvaluator.generated.h"

class AActor;
class APlayerController;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UBlueprintCameraNodeEvaluator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EvaluationContextOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintCameraEvaluationDataRef CameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintCameraPose CameraPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintCameraEvaluationDataRef VariableTable;
    
public:
    UBlueprintCameraNodeEvaluator();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickCameraNode(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDefaultOwningCameraRigParameters(FBlueprintCameraEvaluationDataRef TargetCameraData) const;
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCameraPose(const FBlueprintCameraPose& NewCameraPose);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPose(const FBlueprintCameraPose& InCameraPose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeCameraNode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlueprintCameraPose GetCurrentCameraPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlueprintCameraPose GetCameraPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* FindEvaluationContextOwnerActor(TSubclassOf<AActor> ActorClass) const;
    
};

