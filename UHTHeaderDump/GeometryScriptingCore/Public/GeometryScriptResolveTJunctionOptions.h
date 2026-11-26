#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptResolveTJunctionOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptResolveTJunctionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tolerance;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptResolveTJunctionOptions();
};

