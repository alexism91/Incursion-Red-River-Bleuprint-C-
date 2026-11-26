#pragma once
#include "CoreMinimal.h"
#include "IRRRowSlotSpec.h"
#include "IRRRowLayout.generated.h"

USTRUCT(BlueprintType)
struct FIRRRowLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRRowSlotSpec> Slots;
    
    IRRCOREUI_API FIRRRowLayout();
};

