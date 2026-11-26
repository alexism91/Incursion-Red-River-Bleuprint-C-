#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptSpectralConformalUVOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSpectralConformalUVOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreserveIrregularity;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSpectralConformalUVOptions();
};

