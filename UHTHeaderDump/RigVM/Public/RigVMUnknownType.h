#pragma once
#include "CoreMinimal.h"
#include "RigVMUnknownType.generated.h"

USTRUCT(BlueprintType)
struct FRigVMUnknownType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Hash;
    
public:
    RIGVM_API FRigVMUnknownType();
};

