#pragma once
#include "CoreMinimal.h"
#include "MVVMCompiledLoadedPropertyOrFunctionIndex.generated.h"

USTRUCT(BlueprintType)
struct FMVVMCompiledLoadedPropertyOrFunctionIndex {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsObjectProperty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsScriptStructProperty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsProperty: 1;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMCompiledLoadedPropertyOrFunctionIndex();
};

