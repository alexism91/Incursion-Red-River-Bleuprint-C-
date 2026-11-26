#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "StorageSubContainerWidget.generated.h"

class UBaseContainerWidget;
class UContainerElementWidget;
class UInventoryComponent;
class UInventoryContainerSettings;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UStorageSubContainerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MainContainerUID;
    
    UStorageSubContainerWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UContainerElementWidget* InitSpatialStorageContainerElement(UInventoryComponent* NewInventoryComponent, UBaseContainerWidget* NewContainerRef, FGuid NewMainContainerUID, int32 NewContainerIndex, UInventoryContainerSettings* NewStorageContainer);
    
};

