#pragma once
#include "CoreMinimal.h"
#include "MVVMVCompiledFieldPath.h"
#include "MVVMViewClass_SourceKey.h"
#include "MVVMViewClass_Event.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_Event {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledFieldPath FieldPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UserWidgetFunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMViewClass_SourceKey SourceToReevaluate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 SourceBitField;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_Event();
};

