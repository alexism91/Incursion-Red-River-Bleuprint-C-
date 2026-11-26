#pragma once
#include "CoreMinimal.h"
#include "DistortionData.h"
#include "DerivedDistortionData.generated.h"

class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FDerivedDistortionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistortionData DistortionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* UndistortionDisplacementMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* DistortionDisplacementMap;
    
    CAMERACALIBRATIONCORE_API FDerivedDistortionData();
};

