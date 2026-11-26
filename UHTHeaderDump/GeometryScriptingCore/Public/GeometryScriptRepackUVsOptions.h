#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptRepackUVsOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptRepackUVsOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetImageWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptimizeIslandRotation;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptRepackUVsOptions();
};

