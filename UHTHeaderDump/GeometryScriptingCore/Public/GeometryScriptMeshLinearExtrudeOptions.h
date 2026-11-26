#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EGeometryScriptLinearExtrudeDirection.h"
#include "EGeometryScriptPolyOperationArea.h"
#include "GeometryScriptMeshEditPolygroupOptions.h"
#include "GeometryScriptMeshLinearExtrudeOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshLinearExtrudeOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptLinearExtrudeDirection DirectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptPolyOperationArea AreaMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptMeshEditPolygroupOptions GroupOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UVScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSolidsToShells;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshLinearExtrudeOptions();
};

