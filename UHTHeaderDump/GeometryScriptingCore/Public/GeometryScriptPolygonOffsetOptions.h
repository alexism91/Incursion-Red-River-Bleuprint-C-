#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPolyOffsetJoinType.h"
#include "GeometryScriptPolygonOffsetOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPolygonOffsetOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptPolyOffsetJoinType JoinType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MiterLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOffsetBothSides;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StepsPerRadianScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaximumStepsPerRadian;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPolygonOffsetOptions();
};

