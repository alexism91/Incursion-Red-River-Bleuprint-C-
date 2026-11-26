#pragma once
#include "CoreMinimal.h"
#include "CameraParameterClamping.generated.h"

USTRUCT(BlueprintType)
struct FCameraParameterClamping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampMax;
    
    GAMEPLAYCAMERAS_API FCameraParameterClamping();
};

