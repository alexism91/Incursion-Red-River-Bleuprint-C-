#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ContainerItem.h"
#include "InventoryWidgetInterface.h"
#include "MainContainer.h"
#include "InventoryWidget.generated.h"

class UInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInventoryWidget : public UUserWidget, public IInventoryWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> MainContainerUIDs;
    
    UInventoryWidget();

    UFUNCTION(BlueprintCallable)
    void OnStorageContainerUpdated(FMainContainer MainContainer, int32 ContainerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnItemRemoved(FMainContainer MainContainer, FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(FMainContainer MainContainer, FContainerItem Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeInventoryWidget(UInventoryComponent* InventoryComponentRef, const TArray<FGuid>& NewMainContainerUIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitContainers(UInventoryComponent* InventoryComponentRef, const TArray<FGuid>& NewMainContainerUIDs);
    

    // Fix for true pure virtual functions not being implemented
};

