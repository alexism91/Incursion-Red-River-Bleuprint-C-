#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptPolygroupSimplifyOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPolygroupSimplifyOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCompact;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPolygroupSimplifyOptions();
};

