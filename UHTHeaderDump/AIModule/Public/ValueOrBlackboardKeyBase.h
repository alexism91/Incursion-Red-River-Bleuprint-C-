#pragma once
#include "CoreMinimal.h"
#include "ValueOrBlackboardKeyBase.generated.h"

USTRUCT(BlueprintType)
struct FValueOrBlackboardKeyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
public:
    AIMODULE_API FValueOrBlackboardKeyBase();
};

