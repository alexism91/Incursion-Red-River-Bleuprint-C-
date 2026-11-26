#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
#include "RigVMFunction_MathMatrixBase.h"
#include "RigVMFunction_MathMatrixUnaryOp.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathMatrixUnaryOp : public FRigVMFunction_MathMatrixBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrix Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrix Result;
    
    RIGVM_API FRigVMFunction_MathMatrixUnaryOp();
};

