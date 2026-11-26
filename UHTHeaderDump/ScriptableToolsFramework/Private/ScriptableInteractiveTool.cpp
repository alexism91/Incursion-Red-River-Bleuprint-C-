#include "ScriptableInteractiveTool.h"
#include "Templates/SubclassOf.h"

UScriptableInteractiveTool::UScriptableInteractiveTool() {
    this->bShowToolInEditor = true;
    this->ToolShutdownType = EScriptableToolShutdownType::Complete;
    this->ToolStartupRequirements = EScriptableToolStartupRequirements::None;
    this->CustomToolBuilderClass = NULL;
    this->ToolTargetToolBuilderClass = NULL;
    this->RenderHelper = NULL;
    this->DrawHUDHelper = NULL;
    this->DefaultLineSet = NULL;
    this->DefaultPointSet = NULL;
    this->DefaultTriangleSet = NULL;
    this->ToolDrawableGeometry = NULL;
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::WatchStringProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolStringPropertyModifiedDelegate& OnModified) {
    return NULL;
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::WatchProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolPropertyModifiedDelegate& OnModified) {
    return NULL;
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::WatchObjectProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolObjectPropertyModifiedDelegate& OnModified) {
    return NULL;
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::WatchNameProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolFNamePropertyModifiedDelegate& OnModified) {
    return NULL;
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::WatchIntProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolIntPropertyModifiedDelegate& OnModified) {
    return NULL;
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::WatchFloatProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolFloatPropertyModifiedDelegate& OnModified) {
    return NULL;
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::WatchEnumProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolEnumPropertyModifiedDelegate& OnModified) {
    return NULL;
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::WatchBoolProperty(UScriptableInteractiveToolPropertySet* PropertySet, const FString& PropertyName, const FToolBoolPropertyModifiedDelegate& OnModified) {
    return NULL;
}

void UScriptableInteractiveTool::SetPropertySetVisibleByName(const FString& Identifier, bool bVisible) {
}

void UScriptableInteractiveTool::SetOverlayWidget(UUserWidget* Widget, bool bMakeDraggable) {
}

void UScriptableInteractiveTool::SetGizmoVisible(const FString& Identifier, bool bVisible) {
}

void UScriptableInteractiveTool::SetGizmoTransform(const FString& Identifier, FTransform NewTransform, bool bUndoable) {
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::SavePropertySetSettings(UScriptableInteractiveToolPropertySet* PropertySet, const FString& SaveKey) {
    return NULL;
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::RestorePropertySetSettings(UScriptableInteractiveToolPropertySet* PropertySet, const FString& SaveKey) {
    return NULL;
}

void UScriptableInteractiveTool::RequestToolShutdown(bool bAccept, bool bShowUserPopupMessage, FText UserMessage) {
}

void UScriptableInteractiveTool::RemovePropertySetByName(const FString& Identifier, EToolsFrameworkOutcomePins& Outcome) {
}






bool UScriptableInteractiveTool::OnScriptCanAccept_Implementation() const {
    return false;
}



UWorld* UScriptableInteractiveTool::GetToolWorld() {
    return NULL;
}

TArray<UToolTarget*> UScriptableInteractiveTool::GetToolTargets() const {
    return TArray<UToolTarget*>();
}

FTransform UScriptableInteractiveTool::GetGizmoTransform(const FString& Identifier) {
    return FTransform{};
}

UScriptableToolTriangleSet* UScriptableInteractiveTool::GetDefaultTriangleSet() const {
    return NULL;
}

UScriptableToolPointSet* UScriptableInteractiveTool::GetDefaultPointSet() const {
    return NULL;
}

UScriptableToolLineSet* UScriptableInteractiveTool::GetDefaultLineSet() const {
    return NULL;
}

void UScriptableInteractiveTool::ForcePropertySetUpdateByName(const FString& Identifier) {
}

void UScriptableInteractiveTool::DisplayUserWarningMessage(FText Message) {
}

void UScriptableInteractiveTool::DisplayUserHelpMessage(FText Message) {
}

void UScriptableInteractiveTool::DestroyTRSGizmo(const FString& Identifier, EToolsFrameworkOutcomePins& Outcome) {
}

void UScriptableInteractiveTool::CreateTRSGizmo(const FString& Identifier, FTransform InitialTransform, FScriptableToolGizmoOptions GizmoOptions, EToolsFrameworkOutcomePins& Outcome) {
}

void UScriptableInteractiveTool::ClearUserMessages(bool bHelpMessage, bool bWarningMessage) {
}

void UScriptableInteractiveTool::ClearOverlayWidget() {
}

UScriptableToolTriangleSet* UScriptableInteractiveTool::AddTriangleSet() {
    return NULL;
}

UScriptableInteractiveToolPropertySet* UScriptableInteractiveTool::AddPropertySetOfType(TSubclassOf<UScriptableInteractiveToolPropertySet> PropertySetType, const FString& Identifier, EToolsFrameworkOutcomePins& Outcome) {
    return NULL;
}

UScriptableToolPointSet* UScriptableInteractiveTool::AddPointSet() {
    return NULL;
}

void UScriptableInteractiveTool::AddLogMessage(FText Message, bool bHighlighted) {
}

UScriptableToolLineSet* UScriptableInteractiveTool::AddLineSet() {
    return NULL;
}


