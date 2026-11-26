#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=FieldNotification -ObjectName=FieldNotificationId -FallbackName=FieldNotificationId
//CROSS-MODULE INCLUDE V2: -ModuleName=FieldNotification -ObjectName=FieldValueChangedDynamicDelegate__DelegateSignature -FallbackName=FieldValueChangedDynamicDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=FieldNotification -ObjectName=NotifyFieldValueChanged -FallbackName=NotifyFieldValueChanged
#include "MVVMViewModelBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMVVMViewModelBase : public UObject, public INotifyFieldValueChanged {
    GENERATED_BODY()
public:
    UMVVMViewModelBase();

protected:
    UFUNCTION(BlueprintCallable)
    bool K2_SetPropertyValue(const int32& OldValue, const int32& NewValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FFieldValueChangedDynamicDelegate Delegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);
    
public:
    UFUNCTION(BlueprintCallable)
    void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FFieldValueChangedDynamicDelegate Delegate);
    

    // Fix for true pure virtual functions not being implemented
};

