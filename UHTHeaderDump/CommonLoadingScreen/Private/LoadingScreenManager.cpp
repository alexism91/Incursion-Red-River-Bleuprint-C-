#include "LoadingScreenManager.h"

ULoadingScreenManager::ULoadingScreenManager() {
    this->m_LoadingScreenUserWidget = NULL;
}

void ULoadingScreenManager::RemoveLoadingScreenWatcher(UObject* Object) {
}

void ULoadingScreenManager::K2_SetLoadingScreenCustomText(UWorld* WorldContextObject, const FString& NewText) {
}

bool ULoadingScreenManager::GetLoadingScreenDisplayStatus() const {
    return false;
}

FString ULoadingScreenManager::GetLoadingScreenCustomText() const {
    return TEXT("");
}

FString ULoadingScreenManager::GetDebugReasonForShowingOrHidingLoadingScreen() const {
    return TEXT("");
}

FString ULoadingScreenManager::GetCurrentLoadingMap() const {
    return TEXT("");
}

void ULoadingScreenManager::AddLoadingScreenWatcher(UObject* Object) {
}


