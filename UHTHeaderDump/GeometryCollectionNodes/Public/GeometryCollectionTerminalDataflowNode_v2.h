#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowTerminalNode -FallbackName=DataflowTerminalNode
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryCollectionEngine -ObjectName=GeometryCollectionAutoInstanceMesh -FallbackName=GeometryCollectionAutoInstanceMesh
#include "DataflowRootProxyMesh.h"
#include "GeometryCollectionTerminalDataflowNode_v2.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FGeometryCollectionTerminalDataflowNode_v2 : public FDataflowTerminalNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowRootProxyMesh> RootProxyMeshes;
    
public:
    GEOMETRYCOLLECTIONNODES_API FGeometryCollectionTerminalDataflowNode_v2();
};

