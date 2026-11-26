#pragma once
#include "CoreMinimal.h"
#include "IRRFormationSlotDef.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRFormationSlotDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlongOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LateralOffset;
    
    FIRRFormationSlotDef();
};

