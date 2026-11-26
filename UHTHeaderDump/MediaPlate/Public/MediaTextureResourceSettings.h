#pragma once
#include "CoreMinimal.h"
#include "MediaTextureResourceSettings.generated.h"

USTRUCT(BlueprintType)
struct FMediaTextureResourceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGenMips;
    
    MEDIAPLATE_API FMediaTextureResourceSettings();
};

