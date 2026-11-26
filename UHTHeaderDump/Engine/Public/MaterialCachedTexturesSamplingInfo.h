#pragma once
#include "CoreMinimal.h"
#include "TextureSamplingInfo.h"
#include "MaterialCachedTexturesSamplingInfo.generated.h"

USTRUCT(BlueprintType)
struct FMaterialCachedTexturesSamplingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureSamplingInfo> TextureSamplingInfos;
    
    ENGINE_API FMaterialCachedTexturesSamplingInfo();
};

