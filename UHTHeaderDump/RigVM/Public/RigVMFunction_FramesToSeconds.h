#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_AnimBase.h"
#include "RigVMFunction_FramesToSeconds.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_FramesToSeconds : public FRigVMFunction_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
    RIGVM_API FRigVMFunction_FramesToSeconds();
};

