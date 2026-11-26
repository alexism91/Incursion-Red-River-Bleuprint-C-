#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptMergeVertexOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMergeVertexOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyBoundary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowNonBoundaryBowties;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMergeVertexOptions();
};

