#pragma once
#include "CoreMinimal.h"
#include "MVVMCompiledLoadedPropertyOrFunctionIndex.h"
#include "MVVMVCompiledFields.h"
#include "MVVMCompiledBindingLibrary.generated.h"

USTRUCT(BlueprintType)
struct FMVVMCompiledBindingLibrary {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMVCompiledFields> CompiledFields;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CompiledFieldNames;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMCompiledBindingLibrary();
};

