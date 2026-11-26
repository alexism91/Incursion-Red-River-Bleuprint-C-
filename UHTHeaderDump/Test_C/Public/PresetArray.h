#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Preset.h"
#include "PresetArray.generated.h"

USTRUCT(BlueprintType)
struct FPresetArray : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreset> PresetItems;
    
    TEST_C_API FPresetArray();
};

