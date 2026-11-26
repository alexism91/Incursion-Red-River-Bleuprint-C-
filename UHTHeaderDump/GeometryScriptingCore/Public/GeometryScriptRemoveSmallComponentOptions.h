#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptRemoveSmallComponentOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptRemoveSmallComponentOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinTriangleCount;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptRemoveSmallComponentOptions();
};

