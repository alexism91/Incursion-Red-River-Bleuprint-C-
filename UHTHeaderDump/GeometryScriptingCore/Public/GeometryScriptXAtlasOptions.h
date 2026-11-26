#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptXAtlasOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptXAtlasOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIterations;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptXAtlasOptions();
};

