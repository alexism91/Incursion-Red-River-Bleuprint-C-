#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "IRROperationInterface.generated.h"

UINTERFACE(Blueprintable)
class UIRROperationInterface : public UInterface {
    GENERATED_BODY()
};

class IIRROperationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryRerollOperation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartOperation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOperationActive();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector> GetOperationProbePoints();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanRunOperation();
    
};

