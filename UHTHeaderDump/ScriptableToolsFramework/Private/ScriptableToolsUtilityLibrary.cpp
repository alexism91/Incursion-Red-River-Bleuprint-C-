#include "ScriptableToolsUtilityLibrary.h"

UScriptableToolsUtilityLibrary::UScriptableToolsUtilityLibrary() {
}

FInputRayHit UScriptableToolsUtilityLibrary::MakeInputRayHit_Miss() {
    return FInputRayHit{};
}

FInputRayHit UScriptableToolsUtilityLibrary::MakeInputRayHit_MaxDepth() {
    return FInputRayHit{};
}

FInputRayHit UScriptableToolsUtilityLibrary::MakeInputRayHit(double HitDepth, UObject* OptionalHitObject) {
    return FInputRayHit{};
}


