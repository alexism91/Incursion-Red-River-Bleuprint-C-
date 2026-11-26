#pragma once
#include "CoreMinimal.h"
#include "MVVMViewModelContextInstance.h"
#include "MVVMViewModelCollection.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewModelCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMViewModelContextInstance> ViewModelInstances;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewModelCollection();
};

