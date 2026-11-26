#pragma once
#include "CoreMinimal.h"
#include "GLTFMaterialBakeSize.generated.h"

USTRUCT(BlueprintType)
struct FGLTFMaterialBakeSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoDetect;
    
    GLTFEXPORTER_API FGLTFMaterialBakeSize();
};

