#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeshPlaneCutOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshPlaneCutOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillHoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoleFillMaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillSpans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipCutSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UVWorldDimension;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshPlaneCutOptions();
};

