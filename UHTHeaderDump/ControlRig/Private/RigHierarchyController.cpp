#include "RigHierarchyController.h"

URigHierarchyController::URigHierarchyController() {
    this->bReportWarningsAndErrors = true;
}

bool URigHierarchyController::SetSelection(const TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand, bool bSetupUndo) {
    return false;
}

bool URigHierarchyController::SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::SetHierarchySelection(const TArray<FRigHierarchyKey>& InKeys, bool bPrintPythonCommand, bool bSetupUndo) {
    return false;
}

void URigHierarchyController::SetHierarchy(URigHierarchy* InHierarchy) {
}

FName URigHierarchyController::SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand) {
    return NAME_None;
}

bool URigHierarchyController::SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo) const {
    return false;
}

bool URigHierarchyController::SetComponentSelection(const TArray<FRigComponentKey>& InKeys, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::SetComponentContent(FRigComponentKey InComponent, const FString& InContent, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::SetAvailableSpaceLabel(FRigElementKey InControl, FRigElementKey InSpace, FName InDisplayLabel, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::SetAvailableSpaceIndex(FRigElementKey InControl, FRigElementKey InSpace, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::SelectHierarchyKey(FRigHierarchyKey InKey, bool bSelect, bool bClearSelection, bool bSetupUndo) {
    return false;
}

bool URigHierarchyController::SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection, bool bSetupUndo) {
    return false;
}

bool URigHierarchyController::SelectComponent(FRigComponentKey InKey, bool bSelect, bool bClearSelection, bool bSetupUndo) {
    return false;
}

FRigComponentKey URigHierarchyController::ReparentComponent(FRigComponentKey InComponentKey, FRigElementKey InParentElementKey, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection) {
    return FRigComponentKey{};
}

bool URigHierarchyController::ReorderElement(FRigElementKey InElement, int32 InIndex, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

FRigElementKey URigHierarchyController::RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection) {
    return FRigElementKey{};
}

FRigComponentKey URigHierarchyController::RenameComponent(FRigComponentKey InComponent, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection) {
    return FRigComponentKey{};
}

bool URigHierarchyController::RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::RemoveComponent(FRigComponentKey InComponent, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::RemoveChannelHost(FRigElementKey InChannel, FRigElementKey InHost, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::RemoveAvailableSpace(FRigElementKey InControl, FRigElementKey InSpace, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

bool URigHierarchyController::RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

TArray<FRigElementKey> URigHierarchyController::MirrorElements(TArray<FRigElementKey> InKeys, FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands) {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchyController::ImportSocketsFromSkeletalMesh(USkeletalMesh* InSkeletalMesh, const FName& InNamespace, bool bReplaceExistingSockets, bool bRemoveObsoleteSockets, bool bSelectSockets, bool bSetupUndo, bool bPrintPythonCommand) {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchyController::ImportPreviewSkeletalMesh(USkeletalMesh* InSkeletalMesh, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo) {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchyController::ImportFromText(const FString& InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands) {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchyController::ImportCurvesFromSkeletalMesh(USkeletalMesh* InSkeletalMesh, FName InNamespace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand) {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchyController::ImportCurves(USkeleton* InSkeleton, FName InNamespace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand) {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchyController::ImportBonesFromSkeletalMesh(USkeletalMesh* InSkeletalMesh, const FName& InNamespace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand) {
    return TArray<FRigElementKey>();
}

TArray<FRigElementKey> URigHierarchyController::ImportBones(USkeleton* InSkeleton, FName InNamespace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand) {
    return TArray<FRigElementKey>();
}

URigHierarchy* URigHierarchyController::GetHierarchy() const {
    return NULL;
}

FRigControlSettings URigHierarchyController::GetControlSettings(FRigElementKey InKey) const {
    return FRigControlSettings{};
}

FString URigHierarchyController::ExportToText(TArray<FRigElementKey> InKeys) const {
    return TEXT("");
}

FString URigHierarchyController::ExportSelectionToText() const {
    return TEXT("");
}

TArray<FRigElementKey> URigHierarchyController::DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands) {
    return TArray<FRigElementKey>();
}

bool URigHierarchyController::DeselectHierarchyKey(FRigHierarchyKey InKey, bool bSetupUndo) {
    return false;
}

bool URigHierarchyController::DeselectElement(FRigElementKey InKey) {
    return false;
}

bool URigHierarchyController::DeselectComponent(FRigComponentKey InKey) {
    return false;
}

bool URigHierarchyController::ClearSelection(bool bSetupUndo) {
    return false;
}

FRigComponentKey URigHierarchyController::AddTopLevelComponent(UScriptStruct* InComponentStruct, FName InName, const FString& InContent, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigComponentKey{};
}

FRigElementKey URigHierarchyController::AddSocket(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, const FLinearColor& InColor, const FString& InDescription, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

bool URigHierarchyController::AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, FName InDisplayLabel, bool bSetupUndo) {
    return false;
}

FRigElementKey URigHierarchyController::AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

FRigElementKey URigHierarchyController::AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

FRigElementKey URigHierarchyController::AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

FRigElementKey URigHierarchyController::AddConnector(FName InName, FRigConnectorSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

FRigComponentKey URigHierarchyController::AddComponent(UScriptStruct* InComponentStruct, FName InName, FRigElementKey InElement, const FString& InContent, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigComponentKey{};
}

bool URigHierarchyController::AddChannelHost(FRigElementKey InChannel, FRigElementKey InHost, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

FRigElementKey URigHierarchyController::AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}

bool URigHierarchyController::AddAvailableSpace(FRigElementKey InControl, FRigElementKey InSpace, FName InDisplayLabel, bool bSetupUndo, bool bPrintPythonCommand) {
    return false;
}

FRigElementKey URigHierarchyController::AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand) {
    return FRigElementKey{};
}


