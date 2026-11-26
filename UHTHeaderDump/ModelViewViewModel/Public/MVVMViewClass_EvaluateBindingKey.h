#pragma once
#include "CoreMinimal.h"
#include "MVVMViewClass_EvaluateBindingKey.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_EvaluateBindingKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_EvaluateBindingKey();
};

