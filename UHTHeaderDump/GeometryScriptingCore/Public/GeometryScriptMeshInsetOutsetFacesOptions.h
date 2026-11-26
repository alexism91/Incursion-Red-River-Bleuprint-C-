#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPolyOperationArea.h"
#include "GeometryScriptMeshEditPolygroupOptions.h"
#include "GeometryScriptMeshInsetOutsetFacesOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshInsetOutsetFacesOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReproject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBoundaryOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Softness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptPolyOperationArea AreaMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptMeshEditPolygroupOptions GroupOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UVScale;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshInsetOutsetFacesOptions();
};

