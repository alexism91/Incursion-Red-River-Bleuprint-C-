#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptSimpleCollisionTriangulationOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSimpleCollisionTriangulationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SphereStepsPerSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CapsuleHemisphereSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CapsuleCircleSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApproximateLevelSetsWithCubes;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSimpleCollisionTriangulationOptions();
};

