#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "ValueOrBBKey_Float.h"
#include "BTTask_Wait.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_Wait : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float RandomDeviation;
    
    UBTTask_Wait();

};

