class UW_IRR_Stashtem_ItemInfo_C : public UIRRVendorListItemPartWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_Stashtem_ItemInfo.W_IRR_Stashtem_ItemInfo_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_Stashtem_ItemInfo.W_IRR_Stashtem_ItemInfo_C:ExecuteUbergraph_W_IRR_Stashtem_ItemInfo'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("NewVar"), FGuid(0x26EB481A, 0x4A224292, 0xF7658FBD, 0xE35ECBFF) }, 
        { FName("ItemRef"), FGuid(0x0197B9CD, 0x4A4BDFCE, 0x0D69AD82, 0x66AEAFA2) }, 
        { FName("Vendor Item"), FGuid(0xD3577763, 0x44ABC83F, 0x2E75DDB1, 0x0D071FD7) }, 
        { FName("BackgroundBorder"), FGuid(0xDDBF21F5, 0xA0153D23, 0x9768CCB9, 0x4D1C3067) }, 
        { FName("ItemBox"), FGuid(0x924913C1, 0x69CB306B, 0x847B4F7B, 0x894AE279) }, 
        { FName("ItemName"), FGuid(0xDA29D99B, 0x9B7B3383, 0x87D51465, 0x9B6E40F8) }
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
    class UIRRTextBlock* ItemName;
    class USizeBox* ItemBox;
    class UBorder* BackgroundBorder;
    class UW_InventoryItem_C* ItemRef;
    TArray<FString> NewVar;

};