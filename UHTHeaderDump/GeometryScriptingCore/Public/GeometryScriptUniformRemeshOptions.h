#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptUniformRemeshTargetType.h"
#include "GeometryScriptUniformRemeshOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptUniformRemeshOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptUniformRemeshTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetTriangleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetEdgeLength;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptUniformRemeshOptions();
};

