#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeshIsoCurveOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshIsoCurveOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveIsoValueSnapTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapToExistingVertexTolerance;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshIsoCurveOptions();
};

