#pragma once
#include "CoreMinimal.h"
#include "ActorComponent.h"
#include "ETemperatureSeverityType.h"
#include "ApplicationLifecycleComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UApplicationLifecycleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTemperatureChangeDelegate, ETemperatureSeverityType, Severity);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLowPowerModeDelegate, bool, bInLowPowerMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FApplicationStartupArgumentsDelegate, const TArray<FString>&, StartupArguments);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FApplicationLifetimeDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationWillDeactivateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationHasReactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationWillEnterBackgroundDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationHasEnteredForegroundDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationWillTerminateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationLifetimeDelegate ApplicationShouldUnloadResourcesDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationStartupArgumentsDelegate ApplicationReceivedStartupArgumentsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTemperatureChangeDelegate OnTemperatureChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLowPowerModeDelegate OnLowPowerModeDelegate;
    
    UApplicationLifecycleComponent(const FObjectInitializer& ObjectInitializer);

};

