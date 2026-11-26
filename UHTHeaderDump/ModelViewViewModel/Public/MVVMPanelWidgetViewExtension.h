#pragma once
#include "CoreMinimal.h"
#include "MVVMViewExtension.h"
#include "MVVMPanelWidgetViewExtension.generated.h"

class UMVVMViewPanelWidgetClassExtension;
class UObject;
class UPanelWidget;

UCLASS(Blueprintable, MinimalAPI)
class UMVVMPanelWidgetViewExtension : public UMVVMViewExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* PanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMVVMViewPanelWidgetClassExtension* ClassExtension;
    
public:
    UMVVMPanelWidgetViewExtension();

    UFUNCTION(BlueprintCallable)
    void BP_SetItems(const TArray<UObject*>& InItems);
    
};

