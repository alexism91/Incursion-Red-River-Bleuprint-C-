#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptFlareType.h"
#include "GeometryScriptFlareWarpOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptFlareWarpOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSymmetricExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowerExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptFlareType FlareType;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptFlareWarpOptions();
};

