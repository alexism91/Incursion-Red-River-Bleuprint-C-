#pragma once
#include "CoreMinimal.h"
#include "CameraContextDataID.generated.h"

USTRUCT(BlueprintType)
struct FCameraContextDataID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    GAMEPLAYCAMERAS_API FCameraContextDataID();
};

