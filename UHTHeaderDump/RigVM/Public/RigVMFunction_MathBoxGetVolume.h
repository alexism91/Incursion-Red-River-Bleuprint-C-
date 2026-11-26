#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "RigVMFunction_MathBoxBase.h"
#include "RigVMFunction_MathBoxGetVolume.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_MathBoxGetVolume : public FRigVMFunction_MathBoxBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
    RIGVM_API FRigVMFunction_MathBoxGetVolume();
};

