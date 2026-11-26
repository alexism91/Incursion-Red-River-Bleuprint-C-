#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptGroupLayer.h"
#include "GeometryScriptSplitNormalsOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSplitNormalsOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitByOpeningAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpeningAngleDeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitByFaceGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptGroupLayer GroupLayer;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSplitNormalsOptions();
};

