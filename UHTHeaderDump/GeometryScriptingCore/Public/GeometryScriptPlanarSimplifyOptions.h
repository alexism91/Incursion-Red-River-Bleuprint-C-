#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptPlanarSimplifyOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPlanarSimplifyOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCompact;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPlanarSimplifyOptions();
};

