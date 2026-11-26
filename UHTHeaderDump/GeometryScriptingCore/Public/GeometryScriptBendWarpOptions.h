#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptBendWarpOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptBendWarpOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSymmetricExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBidirectional;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptBendWarpOptions();
};

