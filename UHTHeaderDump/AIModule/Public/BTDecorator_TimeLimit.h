#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "ValueOrBBKey_Float.h"
#include "BTDecorator_TimeLimit.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_TimeLimit : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float TimeLimit;
    
    UBTDecorator_TimeLimit();

};

