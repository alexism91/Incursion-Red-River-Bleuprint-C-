#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "IRRVendorListItemPartWidget.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UIRRVendorListItemPartWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UIRRVendorListItemPartWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateBackgroundMaterial(UMaterialInstance* NewMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleExpanded(bool bIsExpanded);
    
};

