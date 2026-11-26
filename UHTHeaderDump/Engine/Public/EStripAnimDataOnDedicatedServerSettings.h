#pragma once
#include "CoreMinimal.h"
#include "EStripAnimDataOnDedicatedServerSettings.generated.h"

UENUM(BlueprintType)
enum class EStripAnimDataOnDedicatedServerSettings : uint8 {
    UseProjectSetting,
    StripAnimDataOnDedicatedServer,
    DoNotStripAnimDataOnDedicatedServer,
};

