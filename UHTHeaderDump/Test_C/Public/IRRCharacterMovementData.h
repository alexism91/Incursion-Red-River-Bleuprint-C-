#pragma once
#include "CoreMinimal.h"
#include "EIRRMovementState.h"
#include "IRRCharacterMovementData.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRCharacterMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastSprintTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRMovementState MovementState;
    
    FIRRCharacterMovementData();
};

