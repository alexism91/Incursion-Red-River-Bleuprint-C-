#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMeasureMeshDistanceOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeasureMeshDistanceOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSymmetric;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeasureMeshDistanceOptions();
};

