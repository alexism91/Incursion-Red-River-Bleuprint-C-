class UW_IRR_VendorItem_ItemInfo_C : public UIRRVendorListItemPartWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_ItemInfo.W_IRR_VendorItem_ItemInfo_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_ItemInfo.W_IRR_VendorItem_ItemInfo_C:ExecuteUbergraph_W_IRR_VendorItem_ItemInfo'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("NewVar"), FGuid(0x8F328E4E, 0x4B838BAE, 0x5ECBB0BD, 0x98881202) }, 
        { FName("ItemRef"), FGuid(0x76B8D555, 0x4388BAB8, 0x17E6B0A2, 0xCADE44A5) }, 
        { FName("Vendor Item"), FGuid(0xA4EDFCCF, 0x425797E2, 0xA5163D88, 0xB0B5DF70) }, 
        { FName("BackgroundBorder"), FGuid(0x4B1D5821, 0xA4A33CB8, 0xBA43A7FA, 0x15339322) }, 
        { FName("ItemAdditionalInformation"), FGuid(0xB59848C6, 0x377230C2, 0xAE76CE18, 0x266A442E) }, 
        { FName("ItemAdditionalInformation_1"), FGuid(0x86C57CE8, 0x7930332B, 0xA2B78B87, 0xD8EC2BC7) }, 
        { FName("ItemBox_1"), FGuid(0xBCEA6246, 0x0FBA32EB, 0xB4926885, 0x87474D82) }, 
        { FName("ItemBox_2"), FGuid(0x986FB274, 0x202F3EBD, 0xBF869049, 0x77E9F343) }, 
        { FName("ItemInfoSwitcher"), FGuid(0x842682EA, 0x0EA03786, 0x8E643C1E, 0x79BC3935) }, 
        { FName("ItemName_1"), FGuid(0xF7C1D20E, 0x9B2533EB, 0xA336E7CD, 0x0DEF27F4) }, 
        { FName("ItemName_2"), FGuid(0x2D018174, 0x2AD73F64, 0xA8393511, 0xB1868F07) }
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
    class UIRRTextBlock* ItemName_2;
    class UIRRTextBlock* ItemName_1;
    class UWidgetSwitcher* ItemInfoSwitcher;
    class USizeBox* ItemBox_2;
    class USizeBox* ItemBox_1;
    class UIRRTextBlock* ItemAdditionalInformation_1;
    class UIRRTextBlock* ItemAdditionalInformation;
    class UBorder* BackgroundBorder;
    class UW_InventoryItem_C* ItemRef;
    TArray<FString> NewVar;

};