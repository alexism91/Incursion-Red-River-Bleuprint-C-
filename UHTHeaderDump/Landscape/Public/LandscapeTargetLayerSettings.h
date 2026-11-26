#pragma once
#include "CoreMinimal.h"
#include "LandscapeTargetLayerSettings.generated.h"

class ULandscapeLayerInfoObject;

USTRUCT(BlueprintType)
struct FLandscapeTargetLayerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeLayerInfoObject* LayerInfoObj;
    
    LANDSCAPE_API FLandscapeTargetLayerSettings();
};

