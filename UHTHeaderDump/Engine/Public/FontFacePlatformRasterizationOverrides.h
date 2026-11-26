#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EFontRasterizationMode -FallbackName=EFontRasterizationMode
#include "FontFacePlatformRasterizationOverrides.generated.h"

USTRUCT(BlueprintType)
struct FFontFacePlatformRasterizationOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFontRasterizationMode MsdfOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFontRasterizationMode SdfOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFontRasterizationMode SdfApproximationOverride;
    
    ENGINE_API FFontFacePlatformRasterizationOverrides();
};

