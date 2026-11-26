#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "LensCalibrationCameraNode.generated.h"

class ULensFile;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULensCalibrationCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULensFile* LensFile;
    
    ULensCalibrationCameraNode();

};

