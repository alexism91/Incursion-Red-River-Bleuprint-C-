#pragma once
#include "CoreMinimal.h"
#include "MVVMVCompiledFieldPath.generated.h"

USTRUCT(BlueprintType)
struct FMVVMVCompiledFieldPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 StartIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Num;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMVCompiledFieldPath();
};

