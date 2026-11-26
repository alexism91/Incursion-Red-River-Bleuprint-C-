#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBooleanOutputSpace.h"
#include "GeometryScriptMeshBooleanOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshBooleanOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillHoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimplifyOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimplifyPlanarTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowEmptyResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptBooleanOutputSpace OutputTransformSpace;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshBooleanOptions();
};

