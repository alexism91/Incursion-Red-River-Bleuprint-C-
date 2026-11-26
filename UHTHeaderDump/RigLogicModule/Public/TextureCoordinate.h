#pragma once
#include "CoreMinimal.h"
#include "TextureCoordinate.generated.h"

USTRUCT(BlueprintType)
struct FTextureCoordinate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float U;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float V;
    
    RIGLOGICMODULE_API FTextureCoordinate();
};

