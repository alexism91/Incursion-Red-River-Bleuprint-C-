#include "IRRBotTypeRegistry.h"

UIRRBotTypeRegistry::UIRRBotTypeRegistry() {
}

void UIRRBotTypeRegistry::ScanFolders() {
}

bool UIRRBotTypeRegistry::IsLoadoutRegistered(FName LoadoutId) const {
    return false;
}

bool UIRRBotTypeRegistry::IsBotTypeRegistered(FName BotTypeId) const {
    return false;
}

bool UIRRBotTypeRegistry::GetStatBaseline(FName StatBaselineId, FIRRStatBaselineDefinition& OutDefinition) const {
    return false;
}

bool UIRRBotTypeRegistry::GetLoadout(FName LoadoutId, FIRRLoadoutDefinition& OutDefinition) const {
    return false;
}

bool UIRRBotTypeRegistry::GetBotTypeResolved(FName BotTypeId, FIRRBotTypeDefinition& OutDefinition) const {
    return false;
}

TArray<FString> UIRRBotTypeRegistry::GetBotTypeIdOptions() {
    return TArray<FString>();
}

bool UIRRBotTypeRegistry::GetBotType(FName BotTypeId, FIRRBotTypeDefinition& OutDefinition) const {
    return false;
}

bool UIRRBotTypeRegistry::GetBehaviorMap(FName BehaviorMapId, FIRRBehaviorMapDefinition& OutDefinition) const {
    return false;
}

TArray<FName> UIRRBotTypeRegistry::GetAllBotTypeIds() const {
    return TArray<FName>();
}


