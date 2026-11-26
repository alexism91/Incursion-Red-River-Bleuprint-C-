#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptSmoothBoneWeightsType.h"
#include "GeometryScriptSmoothBoneWeightsOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSmoothBoneWeightsOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptSmoothBoneWeightsType DistanceWeighingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInfluences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoxelResolution;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSmoothBoneWeightsOptions();
};

