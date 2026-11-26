#pragma once
#include "CoreMinimal.h"
#include "IRRSettingValue.h"
#include "IRRSettingPresetValues.generated.h"

USTRUCT(BlueprintType)
struct IRRCOREUI_API FIRRSettingPresetValues {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PresetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRSettingValue> Values;
    
    FIRRSettingPresetValues();
};

