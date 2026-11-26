#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "Templates/SubclassOf.h"
#include "MeshProcessorDataflowNodeBase.generated.h"

class UDynamicMeshProcessorBlueprint;
class UObject;

USTRUCT(BlueprintType)
struct FMeshProcessorDataflowNodeBase : public FDataflowNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDynamicMeshProcessorBlueprint> MeshProcessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UDynamicMeshProcessorBlueprint* MeshProcessorInstance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* OwningObject;
    
public:
    GEOMETRYCOLLECTIONNODES_API FMeshProcessorDataflowNodeBase();
};

