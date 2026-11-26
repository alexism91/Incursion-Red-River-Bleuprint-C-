#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "IRRInputActionDescriptor.h"
#include "IRRInputActionInterface.generated.h"

UINTERFACE(Blueprintable)
class UIRRInputActionInterface : public UInterface {
    GENERATED_BODY()
};

class IIRRInputActionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInputActionInfo(const FIRRInputActionDescriptor& ActionDescriptor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReceiveInput(FKey Key);
    
};

