#pragma once
#include "CoreMinimal.h"
#include "ValueOrBlackboardKeyBase.h"
#include "ValueOrBBKey_Int32.generated.h"

USTRUCT(BlueprintType)
struct FValueOrBBKey_Int32 : public FValueOrBlackboardKeyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
public:
    AIMODULE_API FValueOrBBKey_Int32();
};

