#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRPossibleRandomVendorItem.generated.h"

USTRUCT(BlueprintType)
struct FIRRPossibleRandomVendorItem : public FTableRowBase {
    GENERATED_BODY()
public:
    TEST_C_API FIRRPossibleRandomVendorItem();
};

