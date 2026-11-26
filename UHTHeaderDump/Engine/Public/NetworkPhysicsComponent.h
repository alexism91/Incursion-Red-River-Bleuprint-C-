#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "NetworkPhysicsRewindDataDeltaSourceInputProxy.h"
#include "NetworkPhysicsRewindDataDeltaSourceStateProxy.h"
#include "NetworkPhysicsRewindDataImportantInputProxy.h"
#include "NetworkPhysicsRewindDataImportantStateProxy.h"
#include "NetworkPhysicsRewindDataInputProxy.h"
#include "NetworkPhysicsRewindDataRemoteInputProxy.h"
#include "NetworkPhysicsRewindDataStateProxy.h"
#include "NetworkPhysicsComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNetworkPhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetReplicatedDeltaSourceInput, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsRewindDataDeltaSourceInputProxy ReplicatedDeltaSourceInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetReplicatedDeltaSourceState, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsRewindDataDeltaSourceStateProxy ReplicatedDeltaSourceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsRewindDataImportantInputProxy ReplicatedImportantInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsRewindDataImportantStateProxy ReplicatedImportantState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetReplicatedInputs, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsRewindDataInputProxy ReplicatedInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetReplicatedRemoteInputs, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsRewindDataRemoteInputProxy ReplicatedRemoteInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SetReplicatedStates, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsRewindDataStateProxy ReplicatedStates;
    
private:
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint16 InputsToNetwork_Owner;
    
public:
    UNetworkPhysicsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerReceiveInputData(const FNetworkPhysicsRewindDataInputProxy& ClientInputs);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReceiveImportantInputData(const FNetworkPhysicsRewindDataImportantInputProxy& ClientInputs);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReceiveDeltaSourceStateFrame(const int32 Frame);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReceiveDeltaSourceInputFrame(const int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetReplicatedStates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetReplicatedRemoteInputs();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetReplicatedInputs();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetReplicatedDeltaSourceState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SetReplicatedDeltaSourceInput();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReceiveImportantStateData(const FNetworkPhysicsRewindDataImportantStateProxy& ServerStates);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReceiveImportantInputData(const FNetworkPhysicsRewindDataImportantInputProxy& ServerInputs);
    
};

