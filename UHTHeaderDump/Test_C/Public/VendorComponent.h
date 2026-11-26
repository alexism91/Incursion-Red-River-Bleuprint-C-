#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ContainerItem.h"
#include "IRRVendorDefaultItem.h"
#include "IRRVendorSearchParams.h"
#include "IRRVendorStockItem.h"
#include "ItemEligibilitySource.h"
#include "ItemSelectionSource.h"
#include "OnBulkSaleActiveChangedDelegate.h"
#include "OnBulkSaleSelectionChangedDelegate.h"
#include "OnItemsSoldDelegate.h"
#include "ShoppingCartUpdatedDelegate.h"
#include "StockItemsUpdatedDelegate.h"
#include "VendorSearchParamsUpdatedDelegate.h"
#include "VendorSearchResultDelegate.h"
#include "VendorComponent.generated.h"

class UIRRItemDefinition;
class UInventoryComponent;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UVendorComponent : public UActorComponent, public IItemEligibilitySource, public IItemSelectionSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBulkSaleSelectionChanged OnBulkSaleSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBulkSaleActiveChanged OnBulkSaleActiveChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MarketTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRVendorSearchParams SearchParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRVendorStockItem> StockMarketItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRVendorStockItem> BlackMarketItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> FavoriteItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRVendorStockItem> ShoppingCartItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVendorSearchParamsUpdated OnVendorSearchParamsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStockItemsUpdated OnStockItemsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShoppingCartUpdated OnShoppingCartUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsSold OnItemsSold;
    
    UVendorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSearchParams(FIRRVendorSearchParams NewSearchParams);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMarketTag(FGameplayTag NewSearchList);
    
    UFUNCTION(BlueprintCallable)
    void StopBulkSale();
    
    UFUNCTION(BlueprintCallable)
    void StartBulkSale();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FIRRVendorStockItem> SortSearchResults(FIRRVendorSearchParams InSearchParams, TArray<FIRRVendorStockItem> InSearchResults, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool SellBulkSaleSelection(FString& OutReason);
    
    UFUNCTION(BlueprintCallable)
    void SaveVendor();
    
    UFUNCTION(BlueprintCallable)
    void RequestSellItem(UInventoryComponent* OwnerComponent, FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShoppingCartItem(FIRRVendorStockItem VendorStockItem, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemFromFavorites(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    void QuickBuyItem(FIRRVendorStockItem VendorStockItem, bool bUsePreset, bool bAddToStash);
    
    UFUNCTION(BlueprintCallable)
    void PurchaseShoppingCartItems();
    
    UFUNCTION(BlueprintCallable)
    void PurchaseItems(TArray<FIRRVendorStockItem> Items, bool bUsePreset, bool bAddToStash);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsVendorStockItemLocked(FIRRVendorStockItem VendorItem, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVendorItemSupported(FGameplayTagContainer ToCompareItems, const FIRRVendorDefaultItem& VendorItem);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsValidVendorItem(FName Row, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsValidVendorFilter(FGameplayTag ItemIdentifier, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStockItemPurchasable(const FIRRVendorStockItem& StockItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsStockItemInStash(const FIRRVendorStockItem& StockItem, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSoldInMarket(const FIRRVendorDefaultItem& VendorItem, FGameplayTag InMarketTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemSellable(UInventoryComponent* OwnerComp, const FContainerItem& Item, FString& OutReason) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsItemLocked(FContainerItem Item, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEqualOrLowerRarity(FGameplayTag RarityLevel1, FGameplayTag RarityLevel2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBulkSaleActive() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeVendor();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleBulkSaleInventoryUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    FIRRVendorStockItem GetVendorStockItemByUID(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    FIRRVendorStockItem GetVendorStockItemByItemIdentifier(FGameplayTag ItemIdentifier, FGameplayTag InMarketTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetVendorSellMultiplier(FIRRVendorDefaultItem VendorItem, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FName GetVendorRowFromItemDefinition(UIRRItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    void GetVendorItemsTotalPrice(TArray<FIRRVendorStockItem> Items, bool bUsePreset, int32& PrimaryCurrency, int32& SecondaryCurrency);
    
    UFUNCTION(BlueprintCallable)
    static UIRRItemDefinition* GetVendorItemDefinition(const FIRRVendorDefaultItem& VendorItem);
    
    UFUNCTION(BlueprintCallable)
    static FIRRVendorDefaultItem GetVendorDefaultItemFromItemIdentifier(FGameplayTag ItemIdentifier);
    
    UFUNCTION(BlueprintCallable)
    FIRRVendorDefaultItem GetVendorDefaultItemByUID(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    static FIRRVendorDefaultItem GetVendorDefaultItemByStockItem(FIRRVendorStockItem VendorItem);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetTotalPriceByVendorItem(FIRRVendorDefaultItem VendorItem, FGameplayTag InMarketTag, bool bUseAttachments, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetTotalPriceByContainerItem(FContainerItem Item, bool bSell, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetSinglePrice(const FIRRVendorDefaultItem& VendorItem, FGameplayTag InMarketTag, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRarityLevelAsInt(FGameplayTag RarityLevel);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetRarityLevel(UIRRItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRVendorStockItem GetCurrentStockItem(const FIRRVendorStockItem& StockItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBulkSaleTotal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBulkSaleSelectedCount() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<UIRRItemDefinition*> GetAttachmentDefinitions(FIRRVendorDefaultItem VendorItem, bool bDirectAttachments, int32 AttachmentIndex);
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateShoppingCart();
    
    UFUNCTION(BlueprintCallable)
    void FindVendorSearchResults(FIRRVendorSearchParams InSearchParams, const FVendorSearchResult& OutSearchResults);
    
    UFUNCTION(BlueprintCallable)
    void FilterItemsByMarkets(UPARAM(Ref) TArray<FContainerItem>& Items, FGameplayTagContainer InMarketTags, bool bSoldInAll);
    
    UFUNCTION(BlueprintCallable)
    void FilterItemsByMarket(UPARAM(Ref) TArray<FContainerItem>& Items, FGameplayTag InMarketTag);
    
    UFUNCTION(BlueprintCallable)
    void ClearBulkSaleSelection();
    
    UFUNCTION(BlueprintCallable)
    void CanQuickBuyItem(FIRRVendorStockItem VendorStockItem, bool bUsePreset, FString& ErrorMessage, bool& bCanPurchase);
    
    UFUNCTION(BlueprintCallable)
    void CanPurchaseItems(TArray<FIRRVendorStockItem> Items, bool bUsePreset, bool& bSuccess, FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void AddShoppingCartItem(FIRRVendorStockItem VendorStockItem, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void AddNewVendorStockItem(FIRRVendorDefaultItem NewStockItem);
    
    UFUNCTION(BlueprintCallable)
    void AddItemToFavorites(FGuid ItemUID);
    

    // Fix for true pure virtual functions not being implemented
};

