#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptExpMapUVOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptExpMapUVOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NormalSmoothingRounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalSmoothingAlpha;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptExpMapUVOptions();
};

