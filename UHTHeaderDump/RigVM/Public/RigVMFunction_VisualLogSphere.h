#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigVMFunction_VisualLogWireframeOptional.h"
#include "RigVMFunction_VisualLogSphere.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_VisualLogSphere : public FRigVMFunction_VisualLogWireframeOptional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    RIGVM_API FRigVMFunction_VisualLogSphere();
};

