#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeVertexTopology.h"
#include "GeometryScriptBakeVertexOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptBakeVertexOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptBakeVertexTopology TopologyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitAtNormalSeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitAtUVSeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectionInWorldSpace;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptBakeVertexOptions();
};

