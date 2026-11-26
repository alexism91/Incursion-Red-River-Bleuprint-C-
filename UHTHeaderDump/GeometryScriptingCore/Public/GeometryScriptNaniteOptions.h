#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptNaniteOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptNaniteOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackPercentTriangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackRelativeError;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptNaniteOptions();
};

