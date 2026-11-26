#pragma once
#include "CoreMinimal.h"
#include "ValueOrBlackboardKeyBase.h"
#include "ValueOrBBKey_Float.generated.h"

USTRUCT(BlueprintType)
struct FValueOrBBKey_Float : public FValueOrBlackboardKeyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
public:
    AIMODULE_API FValueOrBBKey_Float();
};

