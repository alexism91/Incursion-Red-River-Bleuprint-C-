#pragma once
#include "CoreMinimal.h"
#include "MVVMBindingName.h"
#include "MVVMAvailableBinding.generated.h"

USTRUCT(BlueprintType)
struct FMVVMAvailableBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMBindingName BindingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReadable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWritable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasNotify;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMAvailableBinding();
};

