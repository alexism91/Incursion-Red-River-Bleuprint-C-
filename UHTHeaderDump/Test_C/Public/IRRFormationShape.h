#pragma once
#include "CoreMinimal.h"
#include "IRRFormationSlotDef.h"
#include "IRRFormationShape.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRFormationShape {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRFormationSlotDef> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraMemberSpacing;
    
    FIRRFormationShape();
};

