#include "ModularRigController.h"
#include "Templates/SubclassOf.h"

UModularRigController::UModularRigController() {
}

bool UModularRigController::UnBindModuleVariable(const FName& InModuleName, const FName& InVariableName, bool bSetupUndo) {
    return false;
}

bool UModularRigController::SwapModulesOfClass(TSubclassOf<UControlRig> InOldClass, TSubclassOf<UControlRig> InNewClass, bool bSetupUndo) {
    return false;
}

bool UModularRigController::SwapModuleClass(const FName& InModuleName, TSubclassOf<UControlRig> InNewClass, bool bSetupUndo) {
    return false;
}

bool UModularRigController::SetModuleSelection(const TArray<FName>& InModuleNames) {
    return false;
}

bool UModularRigController::SetConfigValueInModule(const FName& InModuleName, const FName& InVariableName, const FString& InValue, bool bSetupUndo) {
    return false;
}

bool UModularRigController::SelectModule(const FName& InModuleName, const bool InSelected) {
    return false;
}

bool UModularRigController::ResetConfigValueInModule(const FName& InModuleName, const FString& InPath, bool bClearOverride, bool bSetupUndo) {
    return false;
}

bool UModularRigController::ReparentModule(const FName& InModuleName, const FName& InNewParentModuleName, bool bSetupUndo) {
    return false;
}

FName UModularRigController::RenameModule(const FName& InModuleName, const FName& InNewName, bool bSetupUndo) {
    return NAME_None;
}

FName UModularRigController::MirrorModule(const FName& InModuleName, const FRigVMMirrorSettings& InSettings, bool bSetupUndo) {
    return NAME_None;
}

bool UModularRigController::ImportModuleSettingsFromString(const FString& InContent, TArray<FName> InOptionalModuleNames, bool bSetupUndo) {
    return false;
}

TArray<FName> UModularRigController::GetSelectedModules() const {
    return TArray<FName>();
}

FRigModuleReference UModularRigController::GetModuleReference(FName InModuleName) const {
    return FRigModuleReference{};
}

TArray<FRigElementKey> UModularRigController::GetConnectorsForModule(FName InModuleName) const {
    return TArray<FRigElementKey>();
}

TArray<FName> UModularRigController::GetAllModules() const {
    return TArray<FName>();
}

FString UModularRigController::ExportModuleSettingsToString(TArray<FName> InModuleNames) const {
    return TEXT("");
}

TArray<FRigElementKey> UModularRigController::DisconnectCyclicConnectors(bool bSetupUndo) {
    return TArray<FRigElementKey>();
}

bool UModularRigController::DisconnectConnector(const FRigElementKey& InConnectorKey, bool bDisconnectSubModules, bool bSetupUndo) {
    return false;
}

bool UModularRigController::DeselectModule(const FName& InModuleName) {
    return false;
}

bool UModularRigController::DeleteModule(const FName& InModuleName, bool bSetupUndo) {
    return false;
}

bool UModularRigController::ConnectConnectorToElements(const FRigElementKey& InConnectorKey, const TArray<FRigElementKey>& InTargetKeys, bool bSetupUndo, bool bAutoResolveOtherConnectors, bool bCheckValidConnection) {
    return false;
}

bool UModularRigController::ConnectConnectorToElement(const FRigElementKey& InConnectorKey, const FRigElementKey& InTargetKey, bool bSetupUndo, bool bAutoResolveOtherConnectors, bool bCheckValidConnection) {
    return false;
}

bool UModularRigController::CanConnectConnectorToElements(const FRigElementKey& InConnectorKey, const TArray<FRigElementKey>& InTargetKeys, FText& OutErrorMessage) {
    return false;
}

bool UModularRigController::CanConnectConnectorToElement(const FRigElementKey& InConnectorKey, const FRigElementKey& InTargetKey, FText& OutErrorMessage) {
    return false;
}

bool UModularRigController::BindModuleVariable(const FName& InModuleName, const FName& InVariableName, const FString& InSourcePath, bool bSetupUndo) {
    return false;
}

bool UModularRigController::AutoConnectSecondaryConnectors(const TArray<FRigElementKey>& InConnectorKeys, bool bReplaceExistingConnections, bool bSetupUndo) {
    return false;
}

bool UModularRigController::AutoConnectModules(const TArray<FName>& InModuleNames, bool bReplaceExistingConnections, bool bSetupUndo) {
    return false;
}

bool UModularRigController::AddTargetToArrayConnector(const FRigElementKey& InConnectorKey, const FRigElementKey& InTargetKey, bool bSetupUndo, bool bAutoResolveOtherConnectors, bool bCheckValidConnection) {
    return false;
}

FName UModularRigController::AddModule(const FName& InModuleName, TSubclassOf<UControlRig> InClass, const FName& InParentModuleName, bool bSetupUndo) {
    return NAME_None;
}


