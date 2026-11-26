#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptConvexDecompositionOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptConvexDecompositionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumHulls;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SearchFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ErrorTolerance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinPartThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimplifyToFaceCount;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptConvexDecompositionOptions();
};

