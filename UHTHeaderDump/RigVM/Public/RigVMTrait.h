#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMTrait.generated.h"

USTRUCT(BlueprintType)
struct FRigVMTrait : public FRigVMStruct {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
public:
    RIGVM_API FRigVMTrait();
};

