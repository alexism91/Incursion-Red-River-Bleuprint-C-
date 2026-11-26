#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "EComponentPhysicsStateChange.h"
#include "NetworkPhysicsSettings.h"
#include "NetworkPhysicsSettingsDefaultReplication.h"
#include "NetworkPhysicsSettingsNetworkPhysicsComponent.h"
#include "NetworkPhysicsSettingsPredictiveInterpolation.h"
#include "NetworkPhysicsSettingsResimulation.h"
#include "NetworkPhysicsSettingsComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNetworkPhysicsSettingsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsSettings GeneralSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsSettingsDefaultReplication DefaultReplicationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsSettingsPredictiveInterpolation PredictiveInterpolationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsSettingsResimulation ResimulationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkPhysicsSettingsNetworkPhysicsComponent NetworkPhysicsComponentSettings;
    
    UNetworkPhysicsSettingsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnComponentPhysicsStateChanged(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);
    
};

