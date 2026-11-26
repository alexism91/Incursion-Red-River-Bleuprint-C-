#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptBakeTargetMeshOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptBakeTargetMeshOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetUVLayer;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptBakeTargetMeshOptions();
};

