#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptTexelDensityMode.h"
#include "GeometryScriptUVTexelDensityOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptUVTexelDensityOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptTexelDensityMode TexelDensityMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWorldUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetPixelCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TextureResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableUDIMLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> UDIMResolutions;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptUVTexelDensityOptions();
};

