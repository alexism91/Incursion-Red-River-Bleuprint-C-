#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidgetExtension -FallbackName=UserWidgetExtension
#include "MVVMView_Source.h"
#include "MVVMView.generated.h"

class INotifyFieldValueChanged;
class UNotifyFieldValueChanged;
class UMVVMViewClass;
class UMVVMViewExtension;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UMVVMView : public UUserWidgetExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMVVMViewClass* GeneratedViewClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMVVMView_Source> Sources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMVVMViewExtension*> Extensions;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 ValidSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 NumberOfSourceWithTickBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLogBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bConstructed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSourcesInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBindingsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEventsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasDefaultTickBinding;
    
public:
    UMVVMView();

    UFUNCTION(BlueprintCallable)
    void UninitializeSources();
    
    UFUNCTION(BlueprintCallable)
    void UninitializeEvents();
    
    UFUNCTION(BlueprintCallable)
    void UninitializeBindings();
    
    UFUNCTION(BlueprintCallable)
    bool SetViewModelByClass(TScriptInterface<INotifyFieldValueChanged> NewValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetViewModel(FName ViewModelName, TScriptInterface<INotifyFieldValueChanged> ViewModel);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSources();
    
    UFUNCTION(BlueprintCallable)
    void InitializeEvents();
    
    UFUNCTION(BlueprintCallable)
    void InitializeBindings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TScriptInterface<INotifyFieldValueChanged> GetViewModel(FName ViewModelName) const;
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteViewModelBindings(FName ViewModelName);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSourcesValidForEvent(int32 EventKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSourcesValidForBinding(int32 BindingKey) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreSourcesInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreEventsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreBindingsInitialized() const;
    
};

