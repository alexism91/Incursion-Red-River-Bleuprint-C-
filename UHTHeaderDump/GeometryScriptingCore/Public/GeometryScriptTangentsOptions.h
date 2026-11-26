#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptTangentTypes.h"
#include "GeometryScriptTangentsOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptTangentsOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptTangentTypes Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UVLayer;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptTangentsOptions();
};

