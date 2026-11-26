#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "FirstPersonCustomTickSubObject.generated.h"

USTRUCT(BlueprintType)
struct FFirstPersonCustomTickSubObject : public FTableRowBase {
    GENERATED_BODY()
public:
    TEST_C_API FFirstPersonCustomTickSubObject();
};

