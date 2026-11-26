#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigVMFunction_VisualLogObject.h"
#include "RigVMFunction_VisualLogLocation.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_VisualLogLocation : public FRigVMFunction_VisualLogObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    RIGVM_API FRigVMFunction_VisualLogLocation();
};

