#include "IRRSettingHandler.h"

UIRRSettingHandler::UIRRSettingHandler() {
}

void UIRRSettingHandler::UpdateDefinition_Implementation(FIRRSettingDefinition& Definition) {
}

bool UIRRSettingHandler::IsSupported_Implementation(const FIRRSettingDefinition& Definition, FText& OutReason) {
    return false;
}

bool UIRRSettingHandler::GetRuntimeOptions_Implementation(const FIRRSettingDefinition& Definition, TArray<FIRRSettingOption>& OutOptions) {
    return false;
}

ULocalPlayer* UIRRSettingHandler::GetLocalPlayer() const {
    return NULL;
}

bool UIRRSettingHandler::GetEngineValue_Implementation(const FIRRSettingDefinition& Definition, FIRRSettingValue& OutValue) {
    return false;
}

bool UIRRSettingHandler::GetDefaultValue_Implementation(const FIRRSettingDefinition& Definition, FIRRSettingValue& OutValue) {
    return false;
}

void UIRRSettingHandler::ApplyValue_Implementation(const FIRRSettingDefinition& Definition, const FIRRSettingValue& Value) {
}


