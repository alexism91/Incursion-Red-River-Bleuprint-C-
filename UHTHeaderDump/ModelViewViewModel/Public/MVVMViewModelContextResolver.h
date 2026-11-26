#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MVVMViewModelContextResolver.generated.h"

class INotifyFieldValueChanged;
class UNotifyFieldValueChanged;
class UMVVMView;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UMVVMViewModelContextResolver : public UObject {
    GENERATED_BODY()
public:
    UMVVMViewModelContextResolver();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_DestroyInstance(const UObject* ViewModel, const UMVVMView* View) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TScriptInterface<INotifyFieldValueChanged> K2_CreateInstance(const UClass* ExpectedType, const UUserWidget* UserWidget) const;
    
};

