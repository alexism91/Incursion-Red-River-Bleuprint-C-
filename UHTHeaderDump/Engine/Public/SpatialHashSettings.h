#pragma once
#include "CoreMinimal.h"
#include "SpatialHashSettings.generated.h"

USTRUCT(BlueprintType)
struct FSpatialHashSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAlignedGridLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSnapNonAlignedGridLevelsToLowerLevels;
    
    ENGINE_API FSpatialHashSettings();
};

