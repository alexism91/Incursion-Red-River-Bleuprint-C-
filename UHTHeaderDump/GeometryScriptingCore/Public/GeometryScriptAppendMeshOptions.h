#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptCombineAttributesMode.h"
#include "GeometryScriptAppendMeshOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptAppendMeshOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptCombineAttributesMode CombineMode;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptAppendMeshOptions();
};

