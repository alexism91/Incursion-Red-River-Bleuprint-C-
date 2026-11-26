#pragma once
#include "CoreMinimal.h"
#include "OnWaterInfoTextureArrayCreatedDelegate.generated.h"

class UTextureRenderTarget2DArray;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWaterInfoTextureArrayCreated, const UTextureRenderTarget2DArray*, WaterInfoTextureArray);

