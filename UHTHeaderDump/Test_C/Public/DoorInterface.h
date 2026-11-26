#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "E_InteractionDirection.h"
#include "DoorInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDoorInterface : public UInterface {
    GENERATED_BODY()
};

class IDoorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnlockDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerPeakDoor(bool Open, E_InteractionDirection InteractionDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerOpenDoor(bool Open, E_InteractionDirection InteractionDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveKick(E_InteractionDirection InteractionDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DiscoverDoor();
    
};

