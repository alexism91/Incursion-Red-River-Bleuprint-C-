class UW_IRR_VendorItem_Action_C : public UIRRVendorListItemPartWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_Action.W_IRR_VendorItem_Action_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_Action.W_IRR_VendorItem_Action_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_Action.W_IRR_VendorItem_Action_C:ExecuteUbergraph_W_IRR_VendorItem_Action'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("IRRVendor Stock Item"), FGuid(0x67317F88, 0x465A10E3, 0x1BBE598B, 0x5734BEF3) }, 
        { FName("Item Ref"), FGuid(0x7B106DA8, 0x4299770E, 0x9E1C099A, 0x2E7C3E3D) }, 
        { FName("bUsePreset"), FGuid(0x6CC36F57, 0x40CA0CDB, 0x23AEE9A3, 0x18DD1719) }, 
        { FName("AddButton"), FGuid(0x5B5D0EEE, 0x0C9F3A49, 0xB0E37F3E, 0x983D4562) }, 
        { FName("BackgroundBorder"), FGuid(0xAB916D56, 0x5A673410, 0xB0333138, 0x3AD76ACB) }, 
        { FName("ContextBox"), FGuid(0xABEF68FA, 0xCB1F3EA4, 0x98F5F6C4, 0x8B8896E5) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRVendorStockItem IRRVendor Stock Item = {
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
    class UVerticalBox* ContextBox;
    class UBorder* BackgroundBorder;
    class UW_IRR_BaseButton_C* AddButton;
    bool bUsePreset;
    class UItemWidget* Item Ref;

};