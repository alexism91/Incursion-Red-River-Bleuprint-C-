#pragma once
#include "CoreMinimal.h"
#include "GeometryScriptBlurMeshVertexColorsOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptBlurMeshVertexColorsOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Green;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Blue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Alpha;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptBlurMeshVertexColorsOptions();
};

