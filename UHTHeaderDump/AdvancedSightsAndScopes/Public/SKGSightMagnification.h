#pragma once
#include "CoreMinimal.h"
#include "SKGSightZoomSettings.h"
#include "SKGSightMagnification.generated.h"

USTRUCT(BlueprintType)
struct FSKGSightMagnification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Magnifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstFocalPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeboxShrinkOnZoomAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseReticleScaleAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSKGSightZoomSettings ZoomSettings;
    
    ADVANCEDSIGHTSANDSCOPES_API FSKGSightMagnification();
};

