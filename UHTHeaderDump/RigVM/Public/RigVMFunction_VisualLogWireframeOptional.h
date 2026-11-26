#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_VisualLogObject.h"
#include "RigVMFunction_VisualLogWireframeOptional.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_VisualLogWireframeOptional : public FRigVMFunction_VisualLogObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWireframe;
    
    RIGVM_API FRigVMFunction_VisualLogWireframeOptional();
};

