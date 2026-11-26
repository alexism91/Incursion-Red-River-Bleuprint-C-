#pragma once
#include "CoreMinimal.h"
#include "MVVMViewClass_ConditionKey.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_ConditionKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_ConditionKey();
};

