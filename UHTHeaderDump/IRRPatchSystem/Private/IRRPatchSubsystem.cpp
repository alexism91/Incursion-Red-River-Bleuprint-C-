#include "IRRPatchSubsystem.h"

UIRRPatchSubsystem::UIRRPatchSubsystem() {
}

bool UIRRPatchSubsystem::ShouldShowPatchNotes() const {
    return false;
}

void UIRRPatchSubsystem::RequestPatchData() {
}

void UIRRPatchSubsystem::RequestNewsData() {
}

FText UIRRPatchSubsystem::PatchNotesToRichText(const FString& PatchNotes, const FString& HeaderStyleRow, const FString& BoldStyleRow) {
    return FText::GetEmpty();
}

FIRRBuildVersion UIRRPatchSubsystem::ParseBuildVersion(const FString& BuildString) {
    return FIRRBuildVersion{};
}

void UIRRPatchSubsystem::MarkPatchNotesSeen() {
}

void UIRRPatchSubsystem::MarkNewsImported(const TArray<FString>& NewsIds) {
}

bool UIRRPatchSubsystem::IsUpdateCheckComplete() const {
    return false;
}

bool UIRRPatchSubsystem::IsGameOutdated() const {
    return false;
}

bool UIRRPatchSubsystem::HasPendingResets() const {
    return false;
}

bool UIRRPatchSubsystem::HasPatchData() const {
    return false;
}

bool UIRRPatchSubsystem::HasNewsData() const {
    return false;
}

bool UIRRPatchSubsystem::HasAnyResetFlag(const FIRRPatchData& Flags) {
    return false;
}

TArray<FIRRPatchData> UIRRPatchSubsystem::GetUnseenPatches() const {
    return TArray<FIRRPatchData>();
}

TArray<FIRRNewsItem> UIRRPatchSubsystem::GetUnimportedNews() const {
    return TArray<FIRRNewsItem>();
}

FIRRPatchData UIRRPatchSubsystem::GetPendingResetFlags() const {
    return FIRRPatchData{};
}

TArray<FIRRPatchNoteDisplay> UIRRPatchSubsystem::GetPatchNotesToShow() const {
    return TArray<FIRRPatchNoteDisplay>();
}

bool UIRRPatchSubsystem::GetLatestPatch(FIRRPatchData& OutPatch) const {
    return false;
}

bool UIRRPatchSubsystem::GetLatestMajorPatch(FIRRPatchData& OutPatch) const {
    return false;
}

FString UIRRPatchSubsystem::GetLastSeenBuild() const {
    return TEXT("");
}

FString UIRRPatchSubsystem::GetCurrentBuild() const {
    return TEXT("");
}

TArray<FIRRPatchData> UIRRPatchSubsystem::GetAllPatches(bool bMajorOnly) const {
    return TArray<FIRRPatchData>();
}

TArray<FIRRNewsItem> UIRRPatchSubsystem::GetAllNews() const {
    return TArray<FIRRNewsItem>();
}

FText UIRRPatchSubsystem::BuildResetSummary(const FIRRPatchData& Flags) {
    return FText::GetEmpty();
}

void UIRRPatchSubsystem::ApplyResetFlags(const FIRRPatchData& Flags) {
}


