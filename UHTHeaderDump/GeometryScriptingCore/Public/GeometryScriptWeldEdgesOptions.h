#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptWeldEdgesOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptWeldEdgesOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyUniquePairs;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptWeldEdgesOptions();
};

