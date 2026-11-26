#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InventoryWidgetInterface.h"
#include "SlotWidget.generated.h"

class UContainerElementWidget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USlotWidget : public UUserWidget, public IInventoryWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContainerElementWidget* BaseContainerElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipToSlot;
    
    USlotWidget();


    // Fix for true pure virtual functions not being implemented
};

