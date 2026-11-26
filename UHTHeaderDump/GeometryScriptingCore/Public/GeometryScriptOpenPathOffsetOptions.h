#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPathOffsetEndType.h"
#include "EGeometryScriptPolyOffsetJoinType.h"
#include "GeometryScriptOpenPathOffsetOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptOpenPathOffsetOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptPolyOffsetJoinType JoinType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MiterLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptPathOffsetEndType EndType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StepsPerRadianScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaximumStepsPerRadian;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptOpenPathOffsetOptions();
};

