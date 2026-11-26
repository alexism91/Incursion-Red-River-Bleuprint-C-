#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MVVMViewModelContext.generated.h"

class UMVVMViewModelBase;

USTRUCT(BlueprintType)
struct FMVVMViewModelContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMVVMViewModelBase> ContextClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextName;
    
    MODELVIEWVIEWMODEL_API FMVVMViewModelContext();
};

