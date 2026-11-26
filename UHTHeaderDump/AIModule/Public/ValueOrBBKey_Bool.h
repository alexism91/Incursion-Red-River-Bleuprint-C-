#pragma once
#include "CoreMinimal.h"
#include "ValueOrBlackboardKeyBase.h"
#include "ValueOrBBKey_Bool.generated.h"

USTRUCT(BlueprintType)
struct FValueOrBBKey_Bool : public FValueOrBlackboardKeyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultValue;
    
public:
    AIMODULE_API FValueOrBBKey_Bool();
};

