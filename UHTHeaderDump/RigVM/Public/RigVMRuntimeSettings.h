#pragma once
#include "CoreMinimal.h"
#include "RigVMRuntimeSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigVMRuntimeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumArraySize;
    
    RIGVM_API FRigVMRuntimeSettings();
};

