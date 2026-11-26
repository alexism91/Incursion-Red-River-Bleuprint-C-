class UWB_Vendor_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/WB_Vendor.WB_Vendor_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/WB_Vendor.WB_Vendor_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/WB_Vendor.WB_Vendor_C:ExecuteUbergraph_WB_Vendor'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("LocSearchParams"), FGuid(0x1199789E, 0x4FF33B45, 0x182F7BB5, 0xCD510509) }, 
        { FName("ItemListWidgets"), FGuid(0x461A1700, 0x47D10A9A, 0xE3588889, 0x4EB2F49C) }, 
        { FName("SiteIndex"), FGuid(0x3C1FE62C, 0x440D847E, 0x0A40ECA1, 0x5A80E312) }, 
        { FName("SiteCount"), FGuid(0x3716696B, 0x4EE98FEA, 0x31A9088A, 0xD8CA0C12) }, 
        { FName("CurrentData"), FGuid(0x1E510FB1, 0x440B0D2B, 0x0E2616B9, 0x67DD9E75) }, 
        { FName("Favorites"), FGuid(0x9ED69078, 0x385A37DB, 0x9A66BDEE, 0x91C47DC0) }, 
        { FName("ItemList"), FGuid(0x00EBE074, 0xE4F33211, 0xA7850BE6, 0xB94EA9D0) }, 
        { FName("MarketFilter"), FGuid(0xAE177E5F, 0x717D3B8B, 0x93691100, 0x9F8CF104) }, 
        { FName("ShowLocked"), FGuid(0xC8CDB4E4, 0x42481423, 0x2DE139B5, 0x070A509C) }, 
        { FName("W_IRR_Line"), FGuid(0xE150E665, 0xA34E3EA5, 0xBC7C31F5, 0xE0CE88C7) }, 
        { FName("W_IRR_ListControls"), FGuid(0x38FA10A8, 0x533E3362, 0x9CA30918, 0x68B724A4) }, 
        { FName("W_VendorCategories"), FGuid(0x38320CCA, 0xC58F3EBB, 0xAC91939A, 0x27457A97) }, 
        { FName("W_VendorFilterBar_78"), FGuid(0x8B68AFE1, 0xF5D53933, 0x82CB0B56, 0xEB745383) }, 
        { FName("W_VendorList_Header"), FGuid(0xDE82CE2B, 0xB10833AD, 0x9E4D44B4, 0x11B2978A) }, 
        { FName("W_VendorShoppingCart"), FGuid(0x11BC5B1E, 0xAC253238, 0xBBCD292C, 0x62335DEC) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRVendorSearchParams LocSearchParams = {
        "SearchText": FText(""),
        "bFavorites": false,
        "bShowLocked": false,
        "bIncludeNotForSale": false,
        "CategoryTag": {
            "TagName": FName("None")
        },
        "LinkedSearchTag": {
            "TagName": FName("None")
        },
        "RarityTags": FGameplayTagContainer({}),
        "SortParams": {
            "SortCategory": EIRRVendorSortCategories::Alphabetical,
            "bDescending": false
        }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_VendorShoppingCart_C* W_VendorShoppingCart;
    class UW_VendorList_Header_C* W_VendorList_Header;
    class UW_VendorFilterBar_C* W_VendorFilterBar_78;
    class UW_VendorFilterSection_C* W_VendorCategories;
    class UW_IRR_ListControls_C* W_IRR_ListControls;
    class UW_IRR_Line_C* W_IRR_Line;
    class UW_IRR_Button_Small_C* ShowLocked;
    class UW_IRR_HorizontalTabList_C* MarketFilter;
    class UW_IRR_ScrollBox_C* ItemList;
    class UW_IRR_Button_Small_C* Favorites;
    TArray<struct FIRRVendorStockItem> CurrentData;
    int SiteCount;
    int SiteIndex;
    TMap<struct FGuid, class UW_VendorList_Item_C*>* ItemListWidgets;

};