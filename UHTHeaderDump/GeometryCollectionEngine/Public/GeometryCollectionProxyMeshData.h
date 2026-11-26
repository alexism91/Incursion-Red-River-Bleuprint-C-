#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform3f -FallbackName=Transform3f
#include "GeometryCollectionProxyMeshData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FGeometryCollectionProxyMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> ProxyMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform3f> MeshTransforms;
    
    GEOMETRYCOLLECTIONENGINE_API FGeometryCollectionProxyMeshData();
};

