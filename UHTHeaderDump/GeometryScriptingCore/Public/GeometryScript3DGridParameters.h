#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptGridSizingMethod.h"
#include "GeometryScript3DGridParameters.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScript3DGridParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptGridSizingMethod SizeMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GridCellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridResolution;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScript3DGridParameters();
};

