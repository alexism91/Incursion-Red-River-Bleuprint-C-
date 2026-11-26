#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ExtendedLensFile.h"
#include "StereoPair.h"
#include "CameraCalibration.generated.h"

UCLASS(Blueprintable)
class CAPTUREDATACORE_API UCameraCalibration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FExtendedLensFile> CameraCalibrations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStereoPair> StereoPairs;
    
    UCameraCalibration();

};

