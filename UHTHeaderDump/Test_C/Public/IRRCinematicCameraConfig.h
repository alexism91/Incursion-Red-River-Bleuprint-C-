#pragma once
#include "CoreMinimal.h"
#include "IRRCinematicFocusSettings.h"
#include "IRRCinematicLensSettings.h"
#include "IRRCinematicLookSettings.h"
#include "IRRCinematicMovementSettings.h"
#include "IRRCinematicPathSettings.h"
#include "IRRCinematicRenderingSettings.h"
#include "IRRCinematicRotationSettings.h"
#include "IRRCinematicSessionSettings.h"
#include "IRRCinematicTrackingSettings.h"
#include "IRRCinematicCameraConfig.generated.h"

USTRUCT(BlueprintType)
struct FIRRCinematicCameraConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCinematicMovementSettings Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCinematicRotationSettings Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCinematicLensSettings Lens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCinematicFocusSettings Focus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCinematicTrackingSettings Tracking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCinematicPathSettings Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCinematicLookSettings Look;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCinematicRenderingSettings Rendering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCinematicSessionSettings Session;
    
    TEST_C_API FIRRCinematicCameraConfig();
};

