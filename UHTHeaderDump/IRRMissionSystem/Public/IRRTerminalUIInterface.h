#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "IRRTerminalUIInterface.generated.h"

UINTERFACE(Blueprintable)
class UIRRTerminalUIInterface : public UInterface {
    GENERATED_BODY()
};

class IIRRTerminalUIInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SimulateInput(const FText& Input);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SimulateCommit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInputAllowed();
    
};

