#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptSnapBoundariesOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSnapBoundariesOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapToEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIterations;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSnapBoundariesOptions();
};

