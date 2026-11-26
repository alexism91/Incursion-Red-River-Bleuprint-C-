#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptEmptySelectionBehavior.h"
#include "GeometryScriptPerlinNoiseLayerOptions.h"
#include "GeometryScriptPerlinNoiseOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPerlinNoiseOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptPerlinNoiseLayerOptions BaseLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyAlongNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptEmptySelectionBehavior EmptyBehavior;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPerlinNoiseOptions();
};

