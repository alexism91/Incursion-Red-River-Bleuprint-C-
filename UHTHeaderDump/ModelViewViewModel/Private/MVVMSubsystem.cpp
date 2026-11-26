#include "MVVMSubsystem.h"

UMVVMSubsystem::UMVVMSubsystem() {
}

UMVVMView* UMVVMSubsystem::K2_GetViewFromUserWidget(const UUserWidget* UserWidget) const {
    return NULL;
}

TArray<FMVVMAvailableBinding> UMVVMSubsystem::K2_GetAvailableBindings(const UClass* Class, const UClass* Accessor) const {
    return TArray<FMVVMAvailableBinding>();
}

FMVVMAvailableBinding UMVVMSubsystem::K2_GetAvailableBinding(const UClass* Class, FMVVMBindingName BindingName, const UClass* Accessor) const {
    return FMVVMAvailableBinding{};
}

bool UMVVMSubsystem::K2_CompareFloatValues(EMVVMConditionOperation Operation, float Value, float CompareValue, float CompareMaxValue) {
    return false;
}

UMVVMViewModelCollectionObject* UMVVMSubsystem::GetGlobalViewModelCollection() const {
    return NULL;
}

bool UMVVMSubsystem::DoesWidgetTreeContainedWidget(const UWidgetTree* WidgetTree, const UWidget* ViewWidget) const {
    return false;
}


