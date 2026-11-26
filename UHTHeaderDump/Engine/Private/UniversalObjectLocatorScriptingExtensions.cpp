#include "UniversalObjectLocatorScriptingExtensions.h"

UUniversalObjectLocatorScriptingExtensions::UUniversalObjectLocatorScriptingExtensions() {
}

FUniversalObjectLocator UUniversalObjectLocatorScriptingExtensions::UniversalObjectLocatorFromString(const FString& InString) {
    return FUniversalObjectLocator{};
}

FString UUniversalObjectLocatorScriptingExtensions::ToString(const FUniversalObjectLocator& Locator) {
    return TEXT("");
}

void UUniversalObjectLocatorScriptingExtensions::SyncUnload(const FUniversalObjectLocator& Locator, UObject* Context) {
}

UObject* UUniversalObjectLocatorScriptingExtensions::SyncLoad(const FUniversalObjectLocator& Locator, UObject* Context) {
    return NULL;
}

UObject* UUniversalObjectLocatorScriptingExtensions::SyncFind(const FUniversalObjectLocator& Locator, UObject* Context) {
    return NULL;
}

FUniversalObjectLocator UUniversalObjectLocatorScriptingExtensions::MakeUniversalObjectLocator(UObject* Object, UObject* Context) {
    return FUniversalObjectLocator{};
}

bool UUniversalObjectLocatorScriptingExtensions::IsEmpty(const FUniversalObjectLocator& Locator) {
    return false;
}


