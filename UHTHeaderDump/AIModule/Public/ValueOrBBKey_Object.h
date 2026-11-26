#pragma once
#include "CoreMinimal.h"
#include "ValueOrBlackboardKeyBase.h"
#include "ValueOrBBKey_Object.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FValueOrBBKey_Object : public FValueOrBlackboardKeyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BaseClass;
    
public:
    AIMODULE_API FValueOrBBKey_Object();
};

