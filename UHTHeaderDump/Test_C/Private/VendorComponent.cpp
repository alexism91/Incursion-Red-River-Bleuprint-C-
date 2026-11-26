#include "VendorComponent.h"

UVendorComponent::UVendorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InventoryComponent = NULL;
}

void UVendorComponent::UpdateSearchParams(FIRRVendorSearchParams NewSearchParams) {
}

void UVendorComponent::UpdateMarketTag(FGameplayTag NewSearchList) {
}

void UVendorComponent::StopBulkSale() {
}

void UVendorComponent::StartBulkSale() {
}

TArray<FIRRVendorStockItem> UVendorComponent::SortSearchResults(FIRRVendorSearchParams InSearchParams, TArray<FIRRVendorStockItem> InSearchResults, const UObject* WorldContextObject) {
    return TArray<FIRRVendorStockItem>();
}

bool UVendorComponent::SellBulkSaleSelection(FString& OutReason) {
    return false;
}

void UVendorComponent::SaveVendor() {
}

void UVendorComponent::RequestSellItem(UInventoryComponent* OwnerComponent, FContainerItem Item) {
}

void UVendorComponent::RemoveShoppingCartItem(FIRRVendorStockItem VendorStockItem, int32 Count) {
}

void UVendorComponent::RemoveItemFromFavorites(FGuid ItemUID) {
}

void UVendorComponent::QuickBuyItem(FIRRVendorStockItem VendorStockItem, bool bUsePreset, bool bAddToStash) {
}

void UVendorComponent::PurchaseShoppingCartItems() {
}

void UVendorComponent::PurchaseItems(TArray<FIRRVendorStockItem> Items, bool bUsePreset, bool bAddToStash) {
}

bool UVendorComponent::IsVendorStockItemLocked(FIRRVendorStockItem VendorItem, const UObject* WorldContextObject) {
    return false;
}

bool UVendorComponent::IsVendorItemSupported(FGameplayTagContainer ToCompareItems, const FIRRVendorDefaultItem& VendorItem) {
    return false;
}

bool UVendorComponent::IsValidVendorItem(FName Row, const UObject* WorldContextObject) {
    return false;
}

bool UVendorComponent::IsValidVendorFilter(FGameplayTag ItemIdentifier, const UObject* WorldContextObject) {
    return false;
}

bool UVendorComponent::IsStockItemPurchasable(const FIRRVendorStockItem& StockItem) {
    return false;
}

bool UVendorComponent::IsStockItemInStash(const FIRRVendorStockItem& StockItem, const UObject* WorldContextObject) {
    return false;
}

bool UVendorComponent::IsSoldInMarket(const FIRRVendorDefaultItem& VendorItem, FGameplayTag InMarketTag) {
    return false;
}

bool UVendorComponent::IsItemSellable(UInventoryComponent* OwnerComp, const FContainerItem& Item, FString& OutReason) const {
    return false;
}

bool UVendorComponent::IsItemLocked(FContainerItem Item, const UObject* WorldContextObject) {
    return false;
}

bool UVendorComponent::IsEqualOrLowerRarity(FGameplayTag RarityLevel1, FGameplayTag RarityLevel2) {
    return false;
}

bool UVendorComponent::IsBulkSaleActive() const {
    return false;
}

void UVendorComponent::InitializeVendor() {
}

void UVendorComponent::HandleBulkSaleInventoryUpdated() {
}

FIRRVendorStockItem UVendorComponent::GetVendorStockItemByUID(FGuid ItemUID) {
    return FIRRVendorStockItem{};
}

FIRRVendorStockItem UVendorComponent::GetVendorStockItemByItemIdentifier(FGameplayTag ItemIdentifier, FGameplayTag InMarketTag) {
    return FIRRVendorStockItem{};
}

float UVendorComponent::GetVendorSellMultiplier(FIRRVendorDefaultItem VendorItem, const UObject* WorldContextObject) {
    return 0.0f;
}

FName UVendorComponent::GetVendorRowFromItemDefinition(UIRRItemDefinition* ItemDefinition) {
    return NAME_None;
}

void UVendorComponent::GetVendorItemsTotalPrice(TArray<FIRRVendorStockItem> Items, bool bUsePreset, int32& PrimaryCurrency, int32& SecondaryCurrency) {
}

UIRRItemDefinition* UVendorComponent::GetVendorItemDefinition(const FIRRVendorDefaultItem& VendorItem) {
    return NULL;
}

FIRRVendorDefaultItem UVendorComponent::GetVendorDefaultItemFromItemIdentifier(FGameplayTag ItemIdentifier) {
    return FIRRVendorDefaultItem{};
}

FIRRVendorDefaultItem UVendorComponent::GetVendorDefaultItemByUID(FGuid ItemUID) {
    return FIRRVendorDefaultItem{};
}

FIRRVendorDefaultItem UVendorComponent::GetVendorDefaultItemByStockItem(FIRRVendorStockItem VendorItem) {
    return FIRRVendorDefaultItem{};
}

int32 UVendorComponent::GetTotalPriceByVendorItem(FIRRVendorDefaultItem VendorItem, FGameplayTag InMarketTag, bool bUseAttachments, const UObject* WorldContextObject) {
    return 0;
}

int32 UVendorComponent::GetTotalPriceByContainerItem(FContainerItem Item, bool bSell, const UObject* WorldContextObject) {
    return 0;
}

int32 UVendorComponent::GetSinglePrice(const FIRRVendorDefaultItem& VendorItem, FGameplayTag InMarketTag, const UObject* WorldContextObject) {
    return 0;
}

int32 UVendorComponent::GetRarityLevelAsInt(FGameplayTag RarityLevel) {
    return 0;
}

FGameplayTag UVendorComponent::GetRarityLevel(UIRRItemDefinition* ItemDefinition) {
    return FGameplayTag{};
}

FIRRVendorStockItem UVendorComponent::GetCurrentStockItem(const FIRRVendorStockItem& StockItem) const {
    return FIRRVendorStockItem{};
}

int32 UVendorComponent::GetBulkSaleTotal() const {
    return 0;
}

int32 UVendorComponent::GetBulkSaleSelectedCount() const {
    return 0;
}

TArray<UIRRItemDefinition*> UVendorComponent::GetAttachmentDefinitions(FIRRVendorDefaultItem VendorItem, bool bDirectAttachments, int32 AttachmentIndex) {
    return TArray<UIRRItemDefinition*>();
}

void UVendorComponent::ForceUpdateShoppingCart() {
}

void UVendorComponent::FindVendorSearchResults(FIRRVendorSearchParams InSearchParams, const FVendorSearchResult& OutSearchResults) {
}

void UVendorComponent::FilterItemsByMarkets(TArray<FContainerItem>& Items, FGameplayTagContainer InMarketTags, bool bSoldInAll) {
}

void UVendorComponent::FilterItemsByMarket(TArray<FContainerItem>& Items, FGameplayTag InMarketTag) {
}

void UVendorComponent::ClearBulkSaleSelection() {
}

void UVendorComponent::CanQuickBuyItem(FIRRVendorStockItem VendorStockItem, bool bUsePreset, FString& ErrorMessage, bool& bCanPurchase) {
}

void UVendorComponent::CanPurchaseItems(TArray<FIRRVendorStockItem> Items, bool bUsePreset, bool& bSuccess, FString& ErrorMessage) {
}

void UVendorComponent::AddShoppingCartItem(FIRRVendorStockItem VendorStockItem, int32 Count) {
}

void UVendorComponent::AddNewVendorStockItem(FIRRVendorDefaultItem NewStockItem) {
}

void UVendorComponent::AddItemToFavorites(FGuid ItemUID) {
}


