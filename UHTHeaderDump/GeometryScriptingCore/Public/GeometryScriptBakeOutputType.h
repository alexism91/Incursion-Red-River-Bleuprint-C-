#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptBakeOutputMode.h"
#include "GeometryScriptBakeTypeOptions.h"
#include "GeometryScriptBakeOutputType.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptBakeOutputType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptBakeOutputMode OutputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptBakeTypeOptions RGBA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptBakeTypeOptions R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptBakeTypeOptions G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptBakeTypeOptions B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptBakeTypeOptions A;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptBakeOutputType();
};

