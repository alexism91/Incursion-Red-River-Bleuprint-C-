#pragma once
#include "CoreMinimal.h"
#include "MVVMVCompiledFieldPath.h"
#include "MVVMVCompiledBinding.generated.h"

USTRUCT(BlueprintType)
struct FMVVMVCompiledBinding {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledFieldPath SourceFieldPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledFieldPath DestinationFieldPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledFieldPath ConversionFunctionFieldPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Type;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMVCompiledBinding();
};

