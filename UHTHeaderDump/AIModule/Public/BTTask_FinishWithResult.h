#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "ValueOrBBKey_Enum.h"
#include "BTTask_FinishWithResult.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTTask_FinishWithResult : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Enum Result;
    
public:
    UBTTask_FinishWithResult();

};

