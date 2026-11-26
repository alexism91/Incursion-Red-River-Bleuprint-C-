#include "ModularRig.h"

UModularRig::UModularRig() {
    this->EventQueue.AddDefaulted(1);
}

FString UModularRig::GetParentPathForBP(const FString& InModulePath) const {
    return TEXT("");
}

FName UModularRig::GetParentModuleNameForBP(FName InModuleName) const {
    return NAME_None;
}

UControlRig* UModularRig::GetModuleRigByName(FName InModuleName) {
    return NULL;
}

UControlRig* UModularRig::GetModuleRig(const FString& InModulePath) {
    return NULL;
}

TArray<FString> UModularRig::GetModulePaths() const {
    return TArray<FString>();
}

TArray<FName> UModularRig::GetModuleNames() const {
    return TArray<FName>();
}

TArray<FName> UModularRig::GetEventsForModuleByName(FName InModuleName) const {
    return TArray<FName>();
}

TArray<FName> UModularRig::GetEventsForModule(const FString& InModulePath) const {
    return TArray<FName>();
}

TArray<FName> UModularRig::GetEventsForAllModules() const {
    return TArray<FName>();
}

bool UModularRig::ExecuteEventOnModuleForBP(FName InEvent, const FString& InModulePath) {
    return false;
}

bool UModularRig::ExecuteEventOnModuleByNameForBP(FName InEvent, FName InModuleName) {
    return false;
}

TArray<FName> UModularRig::ExecuteEventOnAllModules(FName InEvent) {
    return TArray<FName>();
}


