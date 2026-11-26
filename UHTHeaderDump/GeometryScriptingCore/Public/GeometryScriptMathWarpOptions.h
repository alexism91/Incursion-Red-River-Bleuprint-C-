#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMathWarpOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMathWarpOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrequencyShift;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMathWarpOptions();
};

