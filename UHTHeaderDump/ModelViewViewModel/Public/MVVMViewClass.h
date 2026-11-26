#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetBlueprintGeneratedClassExtension -FallbackName=WidgetBlueprintGeneratedClassExtension
#include "MVVMCompiledBindingLibrary.h"
#include "MVVMViewClass_Binding.h"
#include "MVVMViewClass_Condition.h"
#include "MVVMViewClass_EvaluateSource.h"
#include "MVVMViewClass_Event.h"
#include "MVVMViewClass_Source.h"
#include "MVVMViewClass.generated.h"

class UMVVMViewClassExtension;

UCLASS(Blueprintable, MinimalAPI)
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMViewClass_Source> Sources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMViewClass_Binding> Bindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMViewClass_EvaluateSource> EvaluateSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMViewClass_Event> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMVVMViewClass_Condition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMVVMViewClassExtension*> ViewClassExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMCompiledBindingLibrary BindingLibrary;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 OptionalSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeSourcesOnConstruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeBindingsOnConstruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeEventsOnConstruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bListenToViewModelCollectionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateViewWithoutBindings;
    
public:
    UMVVMViewClass();

};

