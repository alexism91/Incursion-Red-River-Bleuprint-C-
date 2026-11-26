#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "IRRConfigDocumentBase.generated.h"

USTRUCT(BlueprintType)
struct IRRCONFIG_API FIRRConfigDocumentBase : public FTableRowBase {
    GENERATED_BODY()
public:
    FIRRConfigDocumentBase();
};

