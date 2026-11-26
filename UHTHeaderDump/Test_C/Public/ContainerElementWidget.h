#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ContainerElement.h"
#include "ContainerItem.h"
#include "ContainerSlot.h"
#include "InventoryWidgetInterface.h"
#include "MainContainer.h"
#include "OnItemFilterChangedDelegate.h"
#include "OnItemSearchChangedDelegate.h"
#include "ContainerElementWidget.generated.h"

class UBaseContainerWidget;
class UDragDropOperation;
class UIRRInventoryGridWidget;
class UInventoryComponent;
class UItemWidget;
class USlotWidget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UContainerElementWidget : public UUserWidget, public IInventoryWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTryAddToDescendant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeSwapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem SwapToItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeDropped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid DropToContainerUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainContainer DropToContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem DropToItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FContainerItem DropToItem_Saved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDropToRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DropToContainerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DropToSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeStacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StackAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem StackRootItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseContainerWidget* ContainerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MainContainerUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContainerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDragAndDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowContextMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowHover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceShowEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDefaultIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USlotWidget*> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRInventoryGridWidget* SlotGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItemWidget*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseContainerWidget* SpecialContainerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemSearch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemFilterChanged OnItemFilterChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSearchChanged OnItemSearchChanged;
    
    UContainerElementWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ValidateDrop();
    
    UFUNCTION(BlueprintCallable)
    void UpdateStorageContainer(TArray<FContainerSlot> ContainerSlots);
    
    UFUNCTION(BlueprintCallable)
    void SetItemSearch(const FString& NewItemSearch);
    
    UFUNCTION(BlueprintCallable)
    void SetItemFilter(FGameplayTagContainer NewItemFilter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveItem(FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnContainerSearchStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnContainerSearchCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemUpdated(FContainerItem ContainerItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitContainerElementCompleted(FContainerElement ContainerElement);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitContainerElement(UInventoryComponent* NewInventoryComponent, UBaseContainerWidget* NewContainerRef, FGuid NewMainContainerUID, int32 NewContainerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleItemDrop(UDragDropOperation* InOperation);
    
    UFUNCTION(BlueprintCallable)
    void HandleHighlightSlots(TArray<int32> ToHighlightSlotIndexes);
    
    UFUNCTION(BlueprintCallable)
    void HandleHighlightItems();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDraggedItemChanged(UDragDropOperation* InOperation);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleDragEnter(UDragDropOperation* InOperation, int32 SlotIndex, FVector2D SlotOffset);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleContainerSearchStarted(FGuid InMainContainerUID, int32 InContainerIndex, FContainerItem InContainerItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleContainerSearchCompleted(FGuid InMainContainerUID, int32 InContainerIndex, FContainerItem InContainerItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetDropToData(int32 SlotIndex, FVector2D SlotOffset, FVector2D MousePosition, FVector2D ItemSize, int32& OutDropToSlotIndex, TArray<int32>& OutContainerSlotIndexes);
    
    UFUNCTION(BlueprintCallable)
    void FinishDragOperation(bool bEndComparison);
    
    UFUNCTION(BlueprintCallable)
    void CancelHighlights();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddItem(FContainerItem ContainerItem);
    

    // Fix for true pure virtual functions not being implemented
};

