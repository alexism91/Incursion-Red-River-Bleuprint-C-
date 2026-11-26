#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptPolygonsTriangulationOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPolygonsTriangulationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStillAppendOnTriangulationError;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPolygonsTriangulationOptions();
};

