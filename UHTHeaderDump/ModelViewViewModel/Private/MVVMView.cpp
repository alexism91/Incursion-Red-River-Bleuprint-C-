#include "MVVMView.h"

UMVVMView::UMVVMView() {
    this->GeneratedViewClass = NULL;
    this->ValidSources = 0;
    this->NumberOfSourceWithTickBinding = 0;
    this->bLogBinding = false;
    this->bConstructed = false;
    this->bSourcesInitialized = false;
    this->bBindingsInitialized = false;
    this->bEventsInitialized = false;
    this->bHasDefaultTickBinding = false;
}

void UMVVMView::UninitializeSources() {
}

void UMVVMView::UninitializeEvents() {
}

void UMVVMView::UninitializeBindings() {
}

bool UMVVMView::SetViewModelByClass(TScriptInterface<INotifyFieldValueChanged> NewValue) {
    return false;
}

bool UMVVMView::SetViewModel(FName ViewModelName, TScriptInterface<INotifyFieldValueChanged> ViewModel) {
    return false;
}

void UMVVMView::InitializeSources() {
}

void UMVVMView::InitializeEvents() {
}

void UMVVMView::InitializeBindings() {
}

TScriptInterface<INotifyFieldValueChanged> UMVVMView::GetViewModel(FName ViewModelName) const {
    return NULL;
}

bool UMVVMView::ExecuteViewModelBindings(FName ViewModelName) {
    return false;
}

bool UMVVMView::AreSourcesValidForEvent(int32 EventKey) const {
    return false;
}

bool UMVVMView::AreSourcesValidForBinding(int32 BindingKey) const {
    return false;
}

bool UMVVMView::AreSourcesInitialized() const {
    return false;
}

bool UMVVMView::AreEventsInitialized() const {
    return false;
}

bool UMVVMView::AreBindingsInitialized() const {
    return false;
}


