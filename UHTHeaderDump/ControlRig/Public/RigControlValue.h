#pragma once
#include "CoreMinimal.h"
#include "RigControlValueStorage.h"
#include "RigControlValue.generated.h"

USTRUCT(BlueprintType)
struct FRigControlValue {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlValueStorage FloatStorage;
    
public:
    CONTROLRIG_API FRigControlValue();
};

