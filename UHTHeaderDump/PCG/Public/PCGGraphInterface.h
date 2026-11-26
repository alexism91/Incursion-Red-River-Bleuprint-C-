#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PCGGraphInterface.generated.h"

class UPCGGraph;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGGraphInterface : public UObject {
    GENERATED_BODY()
public:
    UPCGGraphInterface();

    UFUNCTION(BlueprintCallable)
    UPCGGraph* GetMutablePCGGraph();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGGraph* GetConstPCGGraph() const;
    
};

