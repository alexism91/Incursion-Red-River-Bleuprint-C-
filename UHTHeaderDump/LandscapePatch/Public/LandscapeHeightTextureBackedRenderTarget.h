#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "LandscapeHeightPatchConvertToNativeParams.h"
#include "LandscapeTextureBackedRenderTargetBase.h"
#include "LandscapeHeightTextureBackedRenderTarget.generated.h"

UCLASS(Blueprintable)
class ULandscapeHeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLandscapeHeightPatchConvertToNativeParams ConversionParams;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextureRenderTargetFormat> RenderTargetFormat;
    
public:
    ULandscapeHeightTextureBackedRenderTarget();

};

