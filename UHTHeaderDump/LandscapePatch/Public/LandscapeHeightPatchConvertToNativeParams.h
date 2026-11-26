#pragma once
#include "CoreMinimal.h"
#include "LandscapeHeightPatchConvertToNativeParams.generated.h"

USTRUCT(BlueprintType)
struct FLandscapeHeightPatchConvertToNativeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZeroInEncoding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffset;
    
    LANDSCAPEPATCH_API FLandscapeHeightPatchConvertToNativeParams();
};

