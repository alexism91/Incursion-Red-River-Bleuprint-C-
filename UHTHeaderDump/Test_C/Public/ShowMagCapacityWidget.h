#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InventoryWidgetInterface.h"
#include "ShowMagCapacityWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UShowMagCapacityWidget : public UUserWidget, public IInventoryWidgetInterface {
    GENERATED_BODY()
public:
    UShowMagCapacityWidget();


    // Fix for true pure virtual functions not being implemented
};

