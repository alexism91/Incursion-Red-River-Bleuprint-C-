#pragma once
#include "CoreMinimal.h"
#include "ValueOrBlackboardKeyBase.h"
#include "ValueOrBBKey_Class.generated.h"

USTRUCT(BlueprintType)
struct FValueOrBBKey_Class : public FValueOrBlackboardKeyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BaseClass;
    
public:
    AIMODULE_API FValueOrBBKey_Class();
};

