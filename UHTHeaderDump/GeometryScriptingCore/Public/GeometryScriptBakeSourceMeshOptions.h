#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeNormalSpace.h"
#include "GeometryScriptBakeSourceMeshOptions.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGeometryScriptBakeSourceMeshOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SourceNormalMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SourceNormalUVLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptBakeNormalSpace SourceNormalSpace;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptBakeSourceMeshOptions();
};

