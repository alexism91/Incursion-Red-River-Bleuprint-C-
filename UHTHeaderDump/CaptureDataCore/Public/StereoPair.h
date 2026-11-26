#pragma once
#include "CoreMinimal.h"
#include "StereoPair.generated.h"

USTRUCT(BlueprintType)
struct FStereoPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CameraIndex1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CameraIndex2;
    
    CAPTUREDATACORE_API FStereoPair();
};

