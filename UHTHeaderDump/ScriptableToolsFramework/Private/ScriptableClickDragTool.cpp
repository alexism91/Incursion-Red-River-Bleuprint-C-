#include "ScriptableClickDragTool.h"

UScriptableClickDragTool::UScriptableClickDragTool() {
    this->bWantMouseHover = false;
    this->bUpdateModifiersDuringDrag = true;
    this->ClickDragBehavior = NULL;
    this->MouseHoverBehavior = NULL;
}

FInputRayHit UScriptableClickDragTool::TestIfCanBeginClickDrag_Implementation(FInputDeviceRay ClickPos, const FScriptableToolModifierStates& Modifiers) {
    return FInputRayHit{};
}

bool UScriptableClickDragTool::OnHoverUpdate_Implementation(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers) {
    return false;
}

FInputRayHit UScriptableClickDragTool::OnHoverHitTest_Implementation(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers) {
    return FInputRayHit{};
}

void UScriptableClickDragTool::OnHoverEnd_Implementation(const FScriptableToolModifierStates& Modifiers) {
}

void UScriptableClickDragTool::OnHoverBegin_Implementation(FInputDeviceRay HoverPos, const FScriptableToolModifierStates& Modifiers) {
}

void UScriptableClickDragTool::OnDragUpdatePosition_Implementation(FInputDeviceRay NewPosition, const FScriptableToolModifierStates& Modifiers) {
}

void UScriptableClickDragTool::OnDragSequenceCancelled_Implementation() {
}

void UScriptableClickDragTool::OnDragEnd_Implementation(FInputDeviceRay EndPosition, const FScriptableToolModifierStates& Modifiers) {
}

void UScriptableClickDragTool::OnDragBegin_Implementation(FInputDeviceRay StartPosition, const FScriptableToolModifierStates& Modifiers) {
}

bool UScriptableClickDragTool::IsShiftDown() const {
    return false;
}

bool UScriptableClickDragTool::IsCtrlDown() const {
    return false;
}

bool UScriptableClickDragTool::IsAltDown() const {
    return false;
}

bool UScriptableClickDragTool::InActiveHover() const {
    return false;
}

bool UScriptableClickDragTool::InActiveClickDrag() const {
    return false;
}

FScriptableToolModifierStates UScriptableClickDragTool::GetActiveModifiers() {
    return FScriptableToolModifierStates{};
}


