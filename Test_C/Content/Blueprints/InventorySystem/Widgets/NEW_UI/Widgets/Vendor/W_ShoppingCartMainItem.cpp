class UW_ShoppingCartMainItem_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_ShoppingCartMainItem.W_ShoppingCartMainItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_ShoppingCartMainItem.W_ShoppingCartMainItem_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_ShoppingCartMainItem.W_ShoppingCartMainItem_C:ExecuteUbergraph_W_ShoppingCartMainItem'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("VendorItem"), FGuid(0x68D043B7, 0x40DC0188, 0x0F913483, 0xFE01463E) }, 
        { FName("AttachmentList"), FGuid(0x9F0D7D57, 0x86143994, 0xB58D153B, 0x5D070EF5) }, 
        { FName("BackgroundBorder"), FGuid(0x98645A07, 0xCD633FD2, 0x8D4589D8, 0x22D7D74E) }, 
        { FName("BackgroundButton"), FGuid(0xAFF62905, 0x74343A96, 0xBBFFB941, 0xB68CE6DE) }, 
        { FName("ItemCountText"), FGuid(0xE51A26B5, 0x401F32A6, 0xBF2AF997, 0x4C2977F2) }, 
        { FName("ItemNameText"), FGuid(0xED699E17, 0x282A3CEC, 0x983CD9B5, 0x3CE5B403) }, 
        { FName("W_IRR_CurrencyText"), FGuid(0x340B5E20, 0x356538B2, 0x91D2F166, 0x08842D40) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRVendorStockItem VendorItem = {
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
    class UW_IRR_CurrencyText_C* W_IRR_CurrencyText;
    class UIRRTextBlock* ItemNameText;
    class UIRRTextBlock* ItemCountText;
    class UW_IRR_BaseButton_C* BackgroundButton;
    class UBorder* BackgroundBorder;
    class UVerticalBox* AttachmentList;

};