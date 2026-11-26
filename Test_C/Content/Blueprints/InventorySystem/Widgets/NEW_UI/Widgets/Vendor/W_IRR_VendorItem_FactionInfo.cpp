class UW_IRR_VendorItem_FactionInfo_C : public UIRRVendorListItemPartWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_FactionInfo.W_IRR_VendorItem_FactionInfo_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_FactionInfo.W_IRR_VendorItem_FactionInfo_C:ExecuteUbergraph_W_IRR_VendorItem_FactionInfo'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ItemRef"), FGuid(0x954EFBA9, 0x42D85D8C, 0x48C40989, 0x54A9776B) }, 
        { FName("Vendor Item"), FGuid(0xB7B845A1, 0x414EE3F7, 0xA64ECFBD, 0x713CDD1B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRVendorStockItem Vendor Item = {
        "StockCount": 0,
        "PurchaseCount": 1,
        "RestockPercentage": 0,
        "RowName": FName("None"),
        "ItemUID": FGuid(0x00000000, 0x00000000, 0x00000000, 0x00000000),
        "MarketTag": {
            "TagName": FName("None")
        }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon_1;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UIRRTextBlock* TierName_2;
    class UIRRTextBlock* TierName_1;
    class UIRRTextBlock* ItemName_2;
    class UIRRTextBlock* ItemName_1;
    class UWidgetSwitcher* ItemInfoSwitcher;
    class UBorder* BackgroundBorder;
    class UW_InventoryItem_C* ItemRef;

};