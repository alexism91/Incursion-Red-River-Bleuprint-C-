#pragma once
#include "CoreMinimal.h"
#include "ECameraRigLayer.h"
#include "CameraRigInstanceID.generated.h"

USTRUCT(BlueprintType)
struct FCameraRigInstanceID {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraRigLayer Layer;
    
public:
    GAMEPLAYCAMERAS_API FCameraRigInstanceID();
};

