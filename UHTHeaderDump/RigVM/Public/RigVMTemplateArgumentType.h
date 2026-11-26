#pragma once
#include "CoreMinimal.h"
#include "RigVMTemplateArgumentType.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FRigVMTemplateArgumentType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CPPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CPPTypeObject;
    
    RIGVM_API FRigVMTemplateArgumentType();
};

