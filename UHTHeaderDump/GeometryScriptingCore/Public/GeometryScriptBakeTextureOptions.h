#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeBitDepth.h"
#include "EGeometryScriptBakeFilteringType.h"
#include "EGeometryScriptBakeResolution.h"
#include "EGeometryScriptBakeSamplesPerPixel.h"
#include "GeometryScriptBakeTextureOptions.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FGeometryScriptBakeTextureOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptBakeResolution Resolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptBakeBitDepth BitDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GutterSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptBakeSamplesPerPixel SamplesPerPixel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SampleFilterMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptBakeFilteringType FilteringType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProjectionInWorldSpace;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptBakeTextureOptions();
};

