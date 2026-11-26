#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "EMVVMConditionOperation.h"
#include "MVVMAvailableBinding.h"
#include "MVVMBindingName.h"
#include "MVVMSubsystem.generated.h"

class UMVVMView;
class UMVVMViewModelCollectionObject;
class UUserWidget;
class UWidget;
class UWidgetTree;

UCLASS(Blueprintable, MinimalAPI)
class UMVVMSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UMVVMSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMVVMView* K2_GetViewFromUserWidget(const UUserWidget* UserWidget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMVVMAvailableBinding> K2_GetAvailableBindings(const UClass* Class, const UClass* Accessor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMVVMAvailableBinding K2_GetAvailableBinding(const UClass* Class, FMVVMBindingName BindingName, const UClass* Accessor) const;
    
    UFUNCTION(BlueprintCallable)
    bool K2_CompareFloatValues(EMVVMConditionOperation Operation, float Value, float CompareValue, float CompareMaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMVVMViewModelCollectionObject* GetGlobalViewModelCollection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesWidgetTreeContainedWidget(const UWidgetTree* WidgetTree, const UWidget* ViewWidget) const;
    
};

