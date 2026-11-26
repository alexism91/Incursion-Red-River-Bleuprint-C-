#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelContext.h"
#include "MVVMViewModelContextInstance.generated.h"

class UMVVMViewModelBase;

USTRUCT(BlueprintType)
struct FMVVMViewModelContextInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMViewModelContext Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMVVMViewModelBase* Instance;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewModelContextInstance();
};

