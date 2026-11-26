#pragma once
#include "CoreMinimal.h"
#include "EIRRTriggerEditorView.generated.h"

UENUM(BlueprintType)
enum class EIRRTriggerEditorView : uint8 {
    Shown,
    SelectedOnly,
    Hidden,
};

