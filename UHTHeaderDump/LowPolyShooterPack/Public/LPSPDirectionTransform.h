#pragma once
#include "CoreMinimal.h"
#include "LPSPDirectionVectors.h"
#include "LPSPDirectionTransform.generated.h"

USTRUCT(BlueprintType)
struct LOWPOLYSHOOTERPACK_API FLPSPDirectionTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPDirectionVectors Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPDirectionVectors Rotation;
    
    FLPSPDirectionTransform();
};

