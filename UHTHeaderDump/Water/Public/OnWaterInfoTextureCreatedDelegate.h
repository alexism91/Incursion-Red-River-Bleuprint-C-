#pragma once
#include "CoreMinimal.h"
#include "OnWaterInfoTextureCreatedDelegate.generated.h"

class UTextureRenderTarget2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaterInfoTextureCreated, const UTextureRenderTarget2D*, WaterInfoTexture);

