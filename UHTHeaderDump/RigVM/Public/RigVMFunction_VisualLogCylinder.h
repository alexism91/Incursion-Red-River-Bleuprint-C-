#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigVMFunction_VisualLogWireframeOptional.h"
#include "RigVMFunction_VisualLogCylinder.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_VisualLogCylinder : public FRigVMFunction_VisualLogWireframeOptional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    RIGVM_API FRigVMFunction_VisualLogCylinder();
};

