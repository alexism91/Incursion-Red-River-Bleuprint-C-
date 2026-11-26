#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowAllTypes -FallbackName=DataflowAllTypes
#include "DataflowDynamicConnections.generated.h"

USTRUCT(BlueprintType)
struct FDataflowDynamicConnections {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataflowAllTypes> DynamicProperties;
    
public:
    DATAFLOWENGINE_API FDataflowDynamicConnections();
};

