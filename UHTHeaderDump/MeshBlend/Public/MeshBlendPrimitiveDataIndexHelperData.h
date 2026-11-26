#pragma once
#include "CoreMinimal.h"
#include "MeshBlendPrimitiveDataIndexHelperData.generated.h"

USTRUCT(BlueprintType)
struct MESHBLEND_API FMeshBlendPrimitiveDataIndexHelperData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimitiveDataIndex;
    
    FMeshBlendPrimitiveDataIndexHelperData();
};

