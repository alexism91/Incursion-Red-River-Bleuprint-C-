#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeshPlaneSliceOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshPlaneSliceOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillHoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoleFillMaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillSpans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GapWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UVWorldDimension;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshPlaneSliceOptions();
};

