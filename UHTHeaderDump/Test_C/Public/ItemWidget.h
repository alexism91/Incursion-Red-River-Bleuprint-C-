#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ContainerItem.h"
#include "EInventoryItemType.h"
#include "EPickupState.h"
#include "InventoryWidgetInterface.h"
#include "ItemSnap.h"
#include "OnItemClickedDelegate.h"
#include "OnItemStatsChangedDelegate.h"
#include "PickUpContainerItem.h"
#include "PickUpContainerState.h"
#include "WidgetItemAppearance.h"
#include "ItemWidget.generated.h"

class UBorder;
class UContainerElementWidget;
class UImage;
class UInventoryComponent;
class UScaleBox;
class USizeBox;
class UTextBlock;
class UTexture;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UItemWidget : public UUserWidget, public IInventoryWidgetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEligible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectionActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTooltipAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDragAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHoverAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRotateAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsContextMenuAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePendingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetItemAppearance ItemAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FLinearColor> WeaponDurabilityBarColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem ContainerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EquipToSlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* OwnerInventoryComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UContainerElementWidget* BaseContainerElementRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* IconTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CannotBeRemovedErrorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPickupState PickupState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ItemSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ItemBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ItemBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ItemHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ItemScaleBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ItemRobber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemMaxCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ArmorTierBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ArmorTierText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* ItemDisabledBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WeaponDurabilityContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* WeaponDurabilityProgressBar;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemClicked OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemStatsChanged OnItemStatsChanged;
    
    UItemWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateSnap(bool bInit);
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemDisableBorder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ToRomanNumeral(int32 Number);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSearched(bool bIsSearched);
    
    UFUNCTION(BlueprintCallable)
    void SetIsDiscovered(bool bIsDiscovered);
    
    UFUNCTION(BlueprintCallable)
    void RefreshSelection();
    
    UFUNCTION(BlueprintCallable)
    void RefreshEligibility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveSnap(FItemSnap ItemSnap);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectionChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerChanged(UInventoryComponent* NewOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnItemSearchChanged(const FString& NewItemSearch);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemIsPending(FPickUpContainerState NewState);
    
    UFUNCTION(BlueprintCallable)
    void OnItemHovered(FContainerItem HoveredItem, bool bStart);
    
    UFUNCTION(BlueprintCallable)
    void OnItemFilterChanged(FGameplayTagContainer GameplayTags);
    
    UFUNCTION(BlueprintCallable)
    void OnItemDragged(FContainerItem DraggedItem, bool bStart);
    
    UFUNCTION(BlueprintCallable)
    void OnItemChanged(FPickUpContainerItem PickUpContainerItem);
    
    UFUNCTION(BlueprintCallable)
    void OnEligibilityChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_UpdateWeaponDurabilityBar(float NewDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_UpdateItemCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetIsSearched(bool bIsSearched);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SetIsDiscovered(bool bIsDiscovered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSelectionStateChanged(bool bActive, bool bSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnItemChanged(FPickUpContainerItem PickUpContainerItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnInCartChanged(bool bInCart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEligibilityChanged(bool bEligible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVendorItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTooltipAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMatchingItemSearch();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMatchingItemFilter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsHoverAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDragAndDropAllowed();
    
    UFUNCTION(BlueprintCallable)
    bool IsDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsContextMenuAllowed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitItem(UInventoryComponent* NewOnwerInventoryComp, UContainerElementWidget* NewBaseContainerElementRef, FContainerItem NewContainerItem, bool bIsEquipped, FVector2D NewEquipToSlotSize);
    
    UFUNCTION(BlueprintCallable)
    void HandlePickupStateUpdated(FPickUpContainerState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TEnumAsByte<EInventoryItemType> GetItemType();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInventoryComponent* GetInventoryComponent();
    
    UFUNCTION(BlueprintCallable)
    static float GetImageScale(FVector2D ItemRealWorldSize, FVector2D ItemDimensions);
    

    // Fix for true pure virtual functions not being implemented
};

