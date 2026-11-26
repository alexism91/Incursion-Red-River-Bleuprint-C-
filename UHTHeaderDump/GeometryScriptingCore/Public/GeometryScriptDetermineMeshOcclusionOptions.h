#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptDetermineMeshOcclusionOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptDetermineMeshOcclusionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SamplingDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoubleSided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSearchDirections;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptDetermineMeshOcclusionOptions();
};

