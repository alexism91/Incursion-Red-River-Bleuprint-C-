#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPolygonFillMode.h"
#include "GeometryScriptConstrainedDelaunayTriangulationOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptConstrainedDelaunayTriangulationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptPolygonFillMode ConstrainedEdgesFillMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidateEdgesInResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveDuplicateVertices;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptConstrainedDelaunayTriangulationOptions();
};

