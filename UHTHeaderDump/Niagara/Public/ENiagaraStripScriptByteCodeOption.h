#pragma once
#include "CoreMinimal.h"
#include "ENiagaraStripScriptByteCodeOption.generated.h"

UENUM(BlueprintType)
enum class ENiagaraStripScriptByteCodeOption : uint8 {
    Default,
    Strip_Original,
    Strip_Experimental,
};

