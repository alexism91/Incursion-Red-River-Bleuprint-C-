#pragma once
#include "CoreMinimal.h"
#include "ValueOrBlackboardKeyBase.h"
#include "ValueOrBBKey_Name.generated.h"

USTRUCT(BlueprintType)
struct FValueOrBBKey_Name : public FValueOrBlackboardKeyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultValue;
    
public:
    AIMODULE_API FValueOrBBKey_Name();
};

