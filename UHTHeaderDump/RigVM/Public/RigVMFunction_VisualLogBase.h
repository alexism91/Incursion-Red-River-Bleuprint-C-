#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_DebugBaseMutable.h"
#include "RigVMFunction_VisualLogBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_VisualLogBase : public FRigVMFunction_DebugBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    RIGVM_API FRigVMFunction_VisualLogBase();
};

