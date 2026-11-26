#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptGroupLayer.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptGroupLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtendedLayerIndex;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptGroupLayer();
};

