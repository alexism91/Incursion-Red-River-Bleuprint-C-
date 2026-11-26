#pragma once
#include "CoreMinimal.h"
#include "PCGSettingsWithDynamicInputs.h"
#include "PCGMergeAttributesSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGMergeAttributesSettings : public UPCGSettingsWithDynamicInputs {
    GENERATED_BODY()
public:
    UPCGMergeAttributesSettings();

};

