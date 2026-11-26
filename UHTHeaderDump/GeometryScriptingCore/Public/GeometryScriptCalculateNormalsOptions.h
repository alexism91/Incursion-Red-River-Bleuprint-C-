#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptCalculateNormalsOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptCalculateNormalsOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAngleWeighted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreaWeighted;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptCalculateNormalsOptions();
};

