#pragma once
#include "CoreMinimal.h"
#include "CameraRigInputSlotParameters.generated.h"

USTRUCT(BlueprintType)
struct FCameraRigInputSlotParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAccumulated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreBlended;
    
    GAMEPLAYCAMERAS_API FCameraRigInputSlotParameters();
};

