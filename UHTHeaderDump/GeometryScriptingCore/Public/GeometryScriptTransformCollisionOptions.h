#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptTransformCollisionOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptTransformCollisionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnOnInvalidTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCenterTransformPivotPerShape;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptTransformCollisionOptions();
};

