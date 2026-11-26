#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.generated.h"

USTRUCT(BlueprintType)
struct FCameraVariableID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    GAMEPLAYCAMERAS_API FCameraVariableID();
};

