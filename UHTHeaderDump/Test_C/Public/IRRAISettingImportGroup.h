#pragma once
#include "CoreMinimal.h"
#include "IRRAISettingImportField.h"
#include "IRRAISettingImportGroup.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAISettingImportGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAISettingImportField> Fields;
    
    FIRRAISettingImportGroup();
};

