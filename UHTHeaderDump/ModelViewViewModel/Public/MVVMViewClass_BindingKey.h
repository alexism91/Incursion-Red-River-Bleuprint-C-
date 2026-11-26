#pragma once
#include "CoreMinimal.h"
#include "MVVMViewClass_BindingKey.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_BindingKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_BindingKey();
};

