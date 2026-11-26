#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptUVFlattenMethod.h"
#include "EGeometryScriptUVIslandSource.h"
#include "GeometryScriptExpMapUVOptions.h"
#include "GeometryScriptGroupLayer.h"
#include "GeometryScriptSpectralConformalUVOptions.h"
#include "GeometryScriptRecomputeUVsOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptRecomputeUVsOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptUVFlattenMethod Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptUVIslandSource IslandSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptExpMapUVOptions ExpMapOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptSpectralConformalUVOptions SpectralConformalOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptGroupLayer GroupLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAlignIslandsWithAxes;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptRecomputeUVsOptions();
};

