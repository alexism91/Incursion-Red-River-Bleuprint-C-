#pragma once
#include "CoreMinimal.h"
#include "CameraFramingZone.h"
#include "CameraVariableID.h"
#include "CameraFramingZoneParameter.generated.h"

USTRUCT(BlueprintType)
struct FCameraFramingZoneParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraFramingZone Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    GAMEPLAYCAMERAS_API FCameraFramingZoneParameter();
};

