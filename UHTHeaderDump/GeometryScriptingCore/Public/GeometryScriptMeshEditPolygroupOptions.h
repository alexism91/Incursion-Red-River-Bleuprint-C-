#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptMeshEditPolygroupMode.h"
#include "GeometryScriptMeshEditPolygroupOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshEditPolygroupOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptMeshEditPolygroupMode GroupMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConstantGroup;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshEditPolygroupOptions();
};

