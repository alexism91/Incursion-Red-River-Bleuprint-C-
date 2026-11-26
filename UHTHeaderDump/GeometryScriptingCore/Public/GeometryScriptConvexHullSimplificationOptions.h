#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptConvexHullSimplifyMethod.h"
#include "GeometryScriptConvexHullSimplificationOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptConvexHullSimplificationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptConvexHullSimplifyMethod SimplificationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimplificationDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimplificationAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTargetFaceCount;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptConvexHullSimplificationOptions();
};

