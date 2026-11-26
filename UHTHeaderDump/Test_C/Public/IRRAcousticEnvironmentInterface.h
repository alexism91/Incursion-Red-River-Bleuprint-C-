#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "EIRRAcousticEnvironment.h"
#include "IRRAcousticEnvironmentInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UIRRAcousticEnvironmentInterface : public UInterface {
    GENERATED_BODY()
};

class IIRRAcousticEnvironmentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnAcousticRoomChanged(AActor* RoomActor, EIRRAcousticEnvironment Environment, bool bIsIndoors);
    
};

