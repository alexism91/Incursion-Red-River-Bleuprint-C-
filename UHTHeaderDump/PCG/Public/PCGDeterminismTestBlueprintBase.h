#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DeterminismTestResult.h"
#include "PCGDeterminismTestBlueprintBase.generated.h"

class UPCGNode;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGDeterminismTestBlueprintBase : public UObject {
    GENERATED_BODY()
public:
    UPCGDeterminismTestBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void ExecuteTest(const UPCGNode* InPCGNode, UPARAM(Ref) FDeterminismTestResult& InOutTestResult);
    
};

