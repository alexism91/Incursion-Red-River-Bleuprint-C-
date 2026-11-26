#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "QUA_RecoilStates.generated.h"

USTRUCT(BlueprintType)
struct FQUA_RecoilStates : public FTableRowBase {
    GENERATED_BODY()
public:
    TEST_C_API FQUA_RecoilStates();
};

