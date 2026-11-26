#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptConvexHullApproximationOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptConvexHullApproximationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFitSpheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFitBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFitCapsules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumeDiffThreshold_Fraction;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptConvexHullApproximationOptions();
};

