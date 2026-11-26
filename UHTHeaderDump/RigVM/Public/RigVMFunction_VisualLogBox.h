#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "RigVMFunction_VisualLogWireframeOptional.h"
#include "RigVMFunction_VisualLogBox.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_VisualLogBox : public FRigVMFunction_VisualLogWireframeOptional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Box;
    
    RIGVM_API FRigVMFunction_VisualLogBox();
};

