#include "ScriptableSingleClickTool.h"

UScriptableSingleClickTool::UScriptableSingleClickTool() {
    this->bWantMouseHover = false;
    this->SingleClickBehavior = NULL;
    this->MouseHoverBehavior = NULL;
}

FInputRayHit UScriptableSingleClickTool::TestIfHitByClick_Implementation(FInputDeviceRay ClickPos, const FScriptableToolModifierStates& Modifiers) {
    return FInputRayHit{};
}

bool UScriptableSingleClickTool::OnHoverUpdate_Implementation(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers) {
    return false;
}

FInputRayHit UScriptableSingleClickTool::OnHoverHitTest_Implementation(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers) {
    return FInputRayHit{};
}

void UScriptableSingleClickTool::OnHoverEnd_Implementation(const FScriptableToolModifierStates& Modifiers) {
}

void UScriptableSingleClickTool::OnHoverBegin_Implementation(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers) {
}

void UScriptableSingleClickTool::OnHitByClick_Implementation(FInputDeviceRay ClickPos, const FScriptableToolModifierStates& Modifiers) {
}

bool UScriptableSingleClickTool::IsShiftDown() const {
    return false;
}

bool UScriptableSingleClickTool::IsCtrlDown() const {
    return false;
}

bool UScriptableSingleClickTool::IsAltDown() const {
    return false;
}

bool UScriptableSingleClickTool::InActiveHover() const {
    return false;
}

FScriptableToolModifierStates UScriptableSingleClickTool::GetActiveModifiers() {
    return FScriptableToolModifierStates{};
}


