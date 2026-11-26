#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "SplitDataflowMeshDataflowNode.generated.h"

class UDataflowMesh;
class UDynamicMesh;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FSplitDataflowMeshDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataflowMesh* InMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MaterialArray;
    
public:
    GEOMETRYCOLLECTIONNODES_API FSplitDataflowMeshDataflowNode();
};

