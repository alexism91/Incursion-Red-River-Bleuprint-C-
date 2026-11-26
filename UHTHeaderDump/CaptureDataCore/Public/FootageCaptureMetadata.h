#pragma once
#include "CoreMinimal.h"
#include "EFootageDeviceClass.h"
#include "FootageCaptureMetadata.generated.h"

USTRUCT(BlueprintType)
struct CAPTUREDATACORE_API FFootageCaptureMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Height;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFootageDeviceClass DeviceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFootageDeviceClass DeviceModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceModelName;
    
    FFootageCaptureMetadata();
};

