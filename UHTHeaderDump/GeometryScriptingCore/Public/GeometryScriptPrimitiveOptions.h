#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPrimitivePolygroupMode.h"
#include "EGeometryScriptPrimitiveUVMode.h"
#include "GeometryScriptPrimitiveOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPrimitiveOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptPrimitivePolygroupMode PolygroupMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptPrimitiveUVMode UVMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialID;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPrimitiveOptions();
};

