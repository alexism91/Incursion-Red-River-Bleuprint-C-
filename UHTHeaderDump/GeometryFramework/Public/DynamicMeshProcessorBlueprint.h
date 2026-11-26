#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DynamicMeshProcessorBlueprint.generated.h"

class UDynamicMesh;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UDynamicMeshProcessorBlueprint : public UObject {
    GENERATED_BODY()
public:
    UDynamicMeshProcessorBlueprint();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessDynamicMesh(UDynamicMesh* TargetMesh, bool& bFailed);
    
};

