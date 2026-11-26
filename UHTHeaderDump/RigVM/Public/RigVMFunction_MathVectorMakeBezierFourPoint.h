#pragma once
#include "CoreMinimal.h"
#include "RigVMFourPointBezier.h"
#include "RigVMFunction_MathVectorBase.h"
#include "RigVMFunction_MathVectorMakeBezierFourPoint.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMFourPointBezier Bezier;
    
    RIGVM_API FRigVMFunction_MathVectorMakeBezierFourPoint();
};

