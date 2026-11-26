#pragma once
#include "CoreMinimal.h"
#include "CameraParameterNormalization.generated.h"

USTRUCT(BlueprintType)
struct FCameraParameterNormalization {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNormalize;
    
    GAMEPLAYCAMERAS_API FCameraParameterNormalization();
};

