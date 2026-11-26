#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryCollectionEngine -ObjectName=GeometryCollectionAutoInstanceMesh -FallbackName=GeometryCollectionAutoInstanceMesh
#include "DataflowRootProxyMesh.h"
#include "GeometryCollectionToCollectionDataflowNode_v2.generated.h"

class UGeometryCollection;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FGeometryCollectionToCollectionDataflowNode_v2 : public FDataflowNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCollection* GeometryCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedArrayCollection Collection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGeometryCollectionAutoInstanceMesh> InstancedMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowRootProxyMesh> RootProxyMeshes;
    
public:
    GEOMETRYCOLLECTIONNODES_API FGeometryCollectionToCollectionDataflowNode_v2();
};

