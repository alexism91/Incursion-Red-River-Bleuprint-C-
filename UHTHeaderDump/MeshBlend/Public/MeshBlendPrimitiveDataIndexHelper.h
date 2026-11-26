#pragma once
#include "CoreMinimal.h"
#include "MeshBlendPrimitiveDataIndexHelperData.h"
#include "MeshBlendPrimitiveDataIndexHelper.generated.h"

class UMaterialInterface;
class UStaticMesh;

USTRUCT(BlueprintType)
struct MESHBLEND_API FMeshBlendPrimitiveDataIndexHelper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UStaticMesh>, FMeshBlendPrimitiveDataIndexHelperData> CachedMeshIndexes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UMaterialInterface>, int32> CachedMaterialIndexes;
    
    FMeshBlendPrimitiveDataIndexHelper();
};

