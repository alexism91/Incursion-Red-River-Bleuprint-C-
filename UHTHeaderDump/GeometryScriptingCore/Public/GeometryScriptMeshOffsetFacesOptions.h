#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptOffsetFacesType.h"
#include "EGeometryScriptPolyOperationArea.h"
#include "GeometryScriptMeshEditPolygroupOptions.h"
#include "GeometryScriptMeshOffsetFacesOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshOffsetFacesOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptOffsetFacesType OffsetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptPolyOperationArea AreaMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptMeshEditPolygroupOptions GroupOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSolidsToShells;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshOffsetFacesOptions();
};

