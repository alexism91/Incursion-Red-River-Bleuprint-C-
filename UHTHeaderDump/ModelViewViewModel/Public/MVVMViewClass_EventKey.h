#pragma once
#include "CoreMinimal.h"
#include "MVVMViewClass_EventKey.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_EventKey {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_EventKey();
};

