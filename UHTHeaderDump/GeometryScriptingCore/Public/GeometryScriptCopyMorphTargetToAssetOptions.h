#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptCopyMorphTargetToAssetOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptCopyMorphTargetToAssetOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwriteExistingTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmitTransaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeferMeshPostEditChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyNormals;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptCopyMorphTargetToAssetOptions();
};

