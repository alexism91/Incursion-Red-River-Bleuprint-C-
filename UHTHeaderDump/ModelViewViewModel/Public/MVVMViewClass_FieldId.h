#pragma once
#include "CoreMinimal.h"
#include "MVVMViewClass_FieldId.generated.h"

USTRUCT(BlueprintType)
struct FMVVMViewClass_FieldId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldName;
    
public:
    MODELVIEWVIEWMODEL_API FMVVMViewClass_FieldId();
};

