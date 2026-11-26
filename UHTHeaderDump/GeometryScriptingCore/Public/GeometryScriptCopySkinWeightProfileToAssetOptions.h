#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptCopySkinWeightProfileToAssetOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptCopySkinWeightProfileToAssetOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverwriteExistingProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmitTransaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeferMeshPostEditChange;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptCopySkinWeightProfileToAssetOptions();
};

