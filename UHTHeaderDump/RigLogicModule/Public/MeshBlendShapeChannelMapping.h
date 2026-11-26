#pragma once
#include "CoreMinimal.h"
#include "MeshBlendShapeChannelMapping.generated.h"

USTRUCT(BlueprintType)
struct FMeshBlendShapeChannelMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MeshIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendShapeChannelIndex;
    
    RIGLOGICMODULE_API FMeshBlendShapeChannelMapping();
};

