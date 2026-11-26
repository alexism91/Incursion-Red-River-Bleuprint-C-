#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "InventoryWidgetInterface.h"
#include "IRRVendorListItemWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UIRRVendorListItemWidget : public UIRRUserWidget, public IInventoryWidgetInterface {
    GENERATED_BODY()
public:
    UIRRVendorListItemWidget();


    // Fix for true pure virtual functions not being implemented
};

