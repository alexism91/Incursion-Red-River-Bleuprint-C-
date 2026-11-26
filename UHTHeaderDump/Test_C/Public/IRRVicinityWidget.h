#pragma once
#include "CoreMinimal.h"
#include "InventoryWidget.h"
#include "Templates/SubclassOf.h"
#include "IRRVicinityWidget.generated.h"

class UContainerElementWidget;
class UIRRVicinityInventoryComponent;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UIRRVicinityWidget : public UInventoryWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UContainerElementWidget> ContainerElementClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* VicinityElementHost;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UContainerElementWidget* VicinityElement;
    
public:
    UIRRVicinityWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnVicinityLayoutChanged(UContainerElementWidget* Element, int32 Columns, int32 Rows);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLayoutChanged(int32 Columns, int32 Rows);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRVicinityInventoryComponent* GetVicinityInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UContainerElementWidget* GetVicinityElement() const;
    
};

