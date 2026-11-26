#pragma once
#include "CoreMinimal.h"
#include "MVVMVCompiledFields.generated.h"

class UStruct;

USTRUCT(BlueprintType)
struct FMVVMVCompiledFields {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStruct* ClassOrScriptStruct;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 LibraryStartIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 NumberOfProperties;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 NumberOfFunctions;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMVCompiledFields();
};

