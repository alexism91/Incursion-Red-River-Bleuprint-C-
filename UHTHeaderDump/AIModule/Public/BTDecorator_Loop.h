#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "ValueOrBBKey_Float.h"
#include "ValueOrBBKey_Int32.h"
#include "BTDecorator_Loop.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_Loop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Int32 NumLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float InfiniteLoopTimeoutTime;
    
    UBTDecorator_Loop();

};

