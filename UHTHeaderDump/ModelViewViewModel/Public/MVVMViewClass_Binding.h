#pragma once
#include "CoreMinimal.h"
#include "EMVVMExecutionMode.h"
#include "MVVMVCompiledBinding.h"
#include "MVVMViewClass_Binding.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_Binding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledBinding Binding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMVVMExecutionMode ExecutionMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 SourceBitField;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_Binding();
};

