#pragma once
#include "CoreMinimal.h"
#include "EPCGHiGenGrid.h"
#include "PCGVirtualTexturePrimingInfo.generated.h"

class URuntimeVirtualTexture;

USTRUCT(BlueprintType)
struct FPCGVirtualTexturePrimingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URuntimeVirtualTexture> VirtualTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGHiGenGrid Grid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldTexelSize;
    
    PCG_API FPCGVirtualTexturePrimingInfo();
};

