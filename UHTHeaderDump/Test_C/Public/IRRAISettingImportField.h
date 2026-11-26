#pragma once
#include "CoreMinimal.h"
#include "IRRAISettingImportField.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAISettingImportField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FieldPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FIRRAISettingImportField();
};

