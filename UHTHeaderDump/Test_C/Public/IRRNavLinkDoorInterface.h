#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "IRRNavLinkDoorInterface.generated.h"

class APawn;

UINTERFACE(Blueprintable, MinimalAPI)
class UIRRNavLinkDoorInterface : public UInterface {
    GENERATED_BODY()
};

class IIRRNavLinkDoorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenDoorForAgent(APawn* Agent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDoorOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseDoor(APawn* LastAgent);
    
};

