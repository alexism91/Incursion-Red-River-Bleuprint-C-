#pragma once
#include "CoreMinimal.h"
#include "MVVMView_SourceKey.generated.h"

USTRUCT(BlueprintType)
struct FMVVMView_SourceKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMView_SourceKey();
};

