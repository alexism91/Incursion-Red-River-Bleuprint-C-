#include "ItemWidget.h"

UItemWidget::UItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bIsEligible = true;
    this->bSelectionActive = false;
    this->bIsSelected = false;
    this->bIsValid = true;
    this->bForceEnabled = false;
    this->bIsTooltipAllowed = true;
    this->bIsDragAllowed = true;
    this->bIsHoverAllowed = true;
    this->bIsRotateAllowed = true;
    this->bIsContextMenuAllowed = true;
    this->bIgnorePendingState = false;
    this->bEquipped = false;
    this->OwnerInventoryComp = NULL;
    this->BaseContainerElementRef = NULL;
    this->IconTexture = NULL;
    this->ImageScale = 0.00f;
    this->bIsLoaded = false;
    this->PickupState = EPickupState::None;
    this->ItemSizeBox = NULL;
    this->ItemBackground = NULL;
    this->ItemBorder = NULL;
    this->ItemHighlight = NULL;
    this->ItemScaleBox = NULL;
    this->ItemImage = NULL;
    this->ItemName = NULL;
    this->ItemRobber = NULL;
    this->ItemCapacity = NULL;
    this->ItemMaxCapacity = NULL;
    this->ArmorTierBox = NULL;
    this->ArmorTierText = NULL;
    this->ItemDisabledBorder = NULL;
    this->WeaponDurabilityContainer = NULL;
    this->WeaponDurabilityProgressBar = NULL;
}

void UItemWidget::UpdateSnap(bool bInit) {
}

void UItemWidget::UpdateItemDisableBorder() {
}

FText UItemWidget::ToRomanNumeral(int32 Number) {
    return FText::GetEmpty();
}

void UItemWidget::SetIsSearched(bool bIsSearched) {
}

void UItemWidget::SetIsDiscovered(bool bIsDiscovered) {
}

void UItemWidget::RefreshSelection() {
}

void UItemWidget::RefreshEligibility() {
}

void UItemWidget::ReceiveSnap_Implementation(FItemSnap ItemSnap) {
}

void UItemWidget::OnSelectionChanged() {
}

void UItemWidget::OnOwnerChanged(UInventoryComponent* NewOwner) {
}

void UItemWidget::OnItemSearchChanged(const FString& NewItemSearch) {
}


void UItemWidget::OnItemHovered(FContainerItem HoveredItem, bool bStart) {
}

void UItemWidget::OnItemFilterChanged(FGameplayTagContainer GameplayTags) {
}

void UItemWidget::OnItemDragged(FContainerItem DraggedItem, bool bStart) {
}

void UItemWidget::OnItemChanged(FPickUpContainerItem PickUpContainerItem) {
}

void UItemWidget::OnEligibilityChanged() {
}









bool UItemWidget::IsVendorItem() const {
    return false;
}

bool UItemWidget::IsTooltipAllowed_Implementation() {
    return false;
}

bool UItemWidget::IsMatchingItemSearch_Implementation() {
    return false;
}

bool UItemWidget::IsMatchingItemFilter_Implementation() {
    return false;
}

bool UItemWidget::IsInCart() const {
    return false;
}

bool UItemWidget::IsHoverAllowed_Implementation() {
    return false;
}

bool UItemWidget::IsDragAndDropAllowed_Implementation() {
    return false;
}

bool UItemWidget::IsDisabled() {
    return false;
}

bool UItemWidget::IsContextMenuAllowed_Implementation() {
    return false;
}

void UItemWidget::InitItem_Implementation(UInventoryComponent* NewOnwerInventoryComp, UContainerElementWidget* NewBaseContainerElementRef, FContainerItem NewContainerItem, bool bIsEquipped, FVector2D NewEquipToSlotSize) {
}

void UItemWidget::HandlePickupStateUpdated(FPickUpContainerState NewState) {
}

TEnumAsByte<EInventoryItemType> UItemWidget::GetItemType_Implementation() {
    return Inventory;
}

UInventoryComponent* UItemWidget::GetInventoryComponent_Implementation() {
    return NULL;
}

float UItemWidget::GetImageScale(FVector2D ItemRealWorldSize, FVector2D ItemDimensions) {
    return 0.0f;
}


