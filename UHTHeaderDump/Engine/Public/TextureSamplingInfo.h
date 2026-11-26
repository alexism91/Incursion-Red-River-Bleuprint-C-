#pragma once
#include "CoreMinimal.h"
#include "TextureSamplingInfo.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTextureSamplingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    ENGINE_API FTextureSamplingInfo();
};

