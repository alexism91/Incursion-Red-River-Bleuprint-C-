#pragma once
#include "CoreMinimal.h"
#include "MVVMVCompiledFieldId.generated.h"

USTRUCT(BlueprintType)
struct FMVVMVCompiledFieldId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 FieldIdIndex;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMVCompiledFieldId();
};

