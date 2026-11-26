#pragma once
#include "CoreMinimal.h"
#include "MVVMVCompiledFieldPath.h"
#include "MVVMViewClass_CompiledEvent.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_CompiledEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledFieldPath FieldPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceName;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_CompiledEvent();
};

