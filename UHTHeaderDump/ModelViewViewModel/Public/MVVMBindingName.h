#pragma once
#include "CoreMinimal.h"
#include "MVVMBindingName.generated.h"

USTRUCT(BlueprintType)
struct FMVVMBindingName {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindingName;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMBindingName();
};

