#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptSculptLayerUpdateOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSculptLayerUpdateOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecomputeNormals;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSculptLayerUpdateOptions();
};

