#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRNightVision -ObjectName=IRRNightVision_Interface -FallbackName=IRRNightVision_Interface
#include "AttachmentComponent.h"
#include "EIRRTacticalDeviceState.h"
#include "OnTacticalDeviceStateUpdatedDelegate.h"
#include "TacticalComponent.generated.h"

class APlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UTacticalComponent : public UAttachmentComponent, public IIRRNightVision_Interface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCallForceNetUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasInfraredMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMakeNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoiseFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NoiseTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTacticalDeviceStateUpdated OnTacticalDeviceStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* LocalPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DeviceInfraredOn, meta=(AllowPrivateAccess=true))
    bool bDeviceInfraredOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DeviceState, meta=(AllowPrivateAccess=true))
    EIRRTacticalDeviceState DeviceState;
    
    UTacticalComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDevice();
    
    UFUNCTION(BlueprintCallable)
    void ToggleInfraredMode();
    
    UFUNCTION(BlueprintCallable)
    void ToggleDeviceState();
    
    UFUNCTION(BlueprintCallable)
    void SetInfraredMode(bool InfraredModeOn);
    
    UFUNCTION(BlueprintCallable)
    void SetDeviceState(EIRRTacticalDeviceState NewDeviceState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetInfraredMode(bool bInfraredOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDeviceState(EIRRTacticalDeviceState NewDeviceState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DeviceState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DeviceInfraredOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_UpdateDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInInfraredMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeviceActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRTacticalDeviceState GetDeviceState() const;
    

    // Fix for true pure virtual functions not being implemented
};

