#include "MVVMViewModelBase.h"

UMVVMViewModelBase::UMVVMViewModelBase() {
}

bool UMVVMViewModelBase::K2_SetPropertyValue(const int32& OldValue, const int32& NewValue) {
    return false;
}

void UMVVMViewModelBase::K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FFieldValueChangedDynamicDelegate Delegate) {
}

void UMVVMViewModelBase::K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId) {
}

void UMVVMViewModelBase::K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FFieldValueChangedDynamicDelegate Delegate) {
}


