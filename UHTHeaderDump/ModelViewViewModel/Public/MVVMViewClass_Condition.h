#pragma once
#include "CoreMinimal.h"
#include "MVVMViewClass_SourceKey.h"
#include "MVVMViewClass_Condition.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_Condition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UserWidgetFunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMViewClass_SourceKey SourceToReevaluate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 SourceBitField;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_Condition();
};

