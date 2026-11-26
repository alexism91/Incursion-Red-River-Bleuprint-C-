#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptPNTessellateOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPNTessellateOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecomputeNormals;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPNTessellateOptions();
};

