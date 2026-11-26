#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigVMFunction_VisualLogBase.h"
#include "RigVMFunction_VisualLogObject.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_VisualLogObject : public FRigVMFunction_VisualLogBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ObjectColor;
    
    RIGVM_API FRigVMFunction_VisualLogObject();
};

