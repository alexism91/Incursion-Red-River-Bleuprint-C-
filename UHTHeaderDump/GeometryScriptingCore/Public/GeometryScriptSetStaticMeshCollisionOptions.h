#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptSetStaticMeshCollisionOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptSetStaticMeshCollisionOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMarkAsCustomized;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptSetStaticMeshCollisionOptions();
};

