#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowBaseElement -FallbackName=DataflowBaseElement
#include "DataflowProxyElement.generated.h"

USTRUCT(BlueprintType)
struct FDataflowProxyElement : public FDataflowBaseElement {
    GENERATED_BODY()
public:
    DATAFLOWENGINE_API FDataflowProxyElement();
};

