#pragma once
#include "CoreMinimal.h"
#include "EMVVMExecutionMode.h"
#include "MVVMVCompiledBinding.h"
#include "MVVMVCompiledFieldId.h"
#include "MVVMViewClass_CompiledBinding.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_CompiledBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledFieldId FieldId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourcePropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledBinding Binding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMVVMExecutionMode ExecutionMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 EvaluateSourceCreatorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_CompiledBinding();
};

