#pragma once
#include "CoreMinimal.h"
#include "EFollicleMaskChannel.h"
#include "FollicleMaskOptions.generated.h"

class UGroomAsset;

USTRUCT(BlueprintType)
struct FFollicleMaskOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroomAsset* Groom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFollicleMaskChannel Channel;
    
    HAIRSTRANDSCORE_API FFollicleMaskOptions();
};

