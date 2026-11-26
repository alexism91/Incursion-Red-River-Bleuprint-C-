#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ContainerItem.h"
#include "WeaponBenchItemWidget.generated.h"

class UInventoryComponent;
class UItemWidget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UWeaponBenchItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UWeaponBenchItemWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UItemWidget* InitWeaponBenchItem(UInventoryComponent* InventoryComponent, FContainerItem Item);
    
};

