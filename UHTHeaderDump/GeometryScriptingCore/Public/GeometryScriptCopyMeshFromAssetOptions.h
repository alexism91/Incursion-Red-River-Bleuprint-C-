#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptCopyMeshFromAssetOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptCopyMeshFromAssetOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyBuildSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequestTangents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreRemoveDegenerates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBuildScale;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptCopyMeshFromAssetOptions();
};

