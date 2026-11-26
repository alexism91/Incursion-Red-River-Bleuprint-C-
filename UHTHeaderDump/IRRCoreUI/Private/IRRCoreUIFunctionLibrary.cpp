#include "IRRCoreUIFunctionLibrary.h"

UIRRCoreUIFunctionLibrary::UIRRCoreUIFunctionLibrary() {
}

void UIRRCoreUIFunctionLibrary::UpdateText(UTextBlock* TextBlock, FIRRFontData FontData) {
}

bool UIRRCoreUIFunctionLibrary::IsInputActionTriggered(FIRRInputActionDescriptor InputAction, FKey Input) {
    return false;
}

FIRRInputActionDescriptor UIRRCoreUIFunctionLibrary::GetInputActionDescriptorByRowHandle(FDataTableRowHandle InputActionHandle) {
    return FIRRInputActionDescriptor{};
}

FIRRFontData UIRRCoreUIFunctionLibrary::GetFontPresetByRowHandle(FDataTableRowHandle FontPreset) {
    return FIRRFontData{};
}

bool UIRRCoreUIFunctionLibrary::ExecuteInputAction(FIRRInputActionDescriptor InputAction, UObject* WorldContextObject, UObject* Context) {
    return false;
}

bool UIRRCoreUIFunctionLibrary::CanExecuteInputAction(FIRRInputActionDescriptor InputAction, UObject* WorldContextObject, UObject* Context) {
    return false;
}


