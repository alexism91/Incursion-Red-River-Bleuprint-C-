#pragma once
#include "CoreMinimal.h"
#include "LPSPDirectionTransform.h"
#include "LPSPLagValues.generated.h"

USTRUCT(BlueprintType)
struct LOWPOLYSHOOTERPACK_API FLPSPLagValues {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPDirectionTransform Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPDirectionTransform Look;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damping;
    
public:
    FLPSPLagValues();
};

