#pragma once
#include "CoreMinimal.h"
#include "LandscapeTexturePatchEncodingSettings.generated.h"

USTRUCT(BlueprintType)
struct FLandscapeTexturePatchEncodingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ZeroInEncoding;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double WorldSpaceEncodingScale;
    
    LANDSCAPEPATCH_API FLandscapeTexturePatchEncodingSettings();
};

