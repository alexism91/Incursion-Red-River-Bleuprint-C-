#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAutoReceiveInput -FallbackName=EAutoReceiveInput
#include "GameplayControlRotationComponent.generated.h"

class APlayerController;
class IGameplayCameraSystemHost;
class UGameplayCameraSystemHost;
class UInputAction;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameplayControlRotationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> AxisActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisActionAngularSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AxisActionMagnitudeThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAutoReceiveInput::Type> AutoActivateForPlayer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGameplayCameraSystemHost> CameraSystemHost;
    
public:
    UGameplayControlRotationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DeactivateControlRotationManagement();
    
    UFUNCTION(BlueprintCallable)
    void ActivateControlRotationManagementForPlayerIndex(int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void ActivateControlRotationManagementForPlayerController(APlayerController* NewPlayerController);
    
};

