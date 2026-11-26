#pragma once
#include "CoreMinimal.h"
#include "LandscapeTextureBackedRenderTargetBase.h"
#include "LandscapeWeightTextureBackedRenderTarget.generated.h"

UCLASS(Blueprintable)
class ULandscapeWeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAlphaChannel;
    
public:
    ULandscapeWeightTextureBackedRenderTarget();

};

