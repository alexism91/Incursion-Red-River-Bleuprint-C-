class UW_VendorList_Item_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorList_Item.W_VendorList_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorList_Item.W_VendorList_Item_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_VendorList_Item.W_VendorList_Item_C:ExecuteUbergraph_W_VendorList_Item'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("BaseColor"), FGuid(0x42B62EF1, 0x4142C641, 0x423E71AE, 0x06F24781) }, 
        { FName("ItemRef"), FGuid(0x2858E193, 0x42F48A9A, 0x9F4A2A83, 0x7D119591) }, 
        { FName("Target"), FGuid(0x75D8CEFC, 0x43A52187, 0x7C2BB585, 0x1ABD4973) }, 
        { FName("Vendor Item"), FGuid(0x5031DDD2, 0x48F267B3, 0x7CE3E3A2, 0x9E8339EA) }, 
        { FName("OnAddToCart"), FGuid(0x991CB95E, 0x4287A868, 0x72140389, 0x86EC3FCB) }, 
        { FName("ItemSizeBox"), FGuid(0xEA52347B, 0xE7693C2E, 0x8A76B4B3, 0xA96EF8AF) }, 
        { FName("SelectionBorder"), FGuid(0x1DBEE510, 0xD56B354B, 0x82AAE178, 0xB010610E) }, 
        { FName("W_IRR_BaseButton"), FGuid(0x0EC9C772, 0x309A36CD, 0x90646003, 0x4295A1C8) }, 
        { FName("W_IRR_VendorItem_Action"), FGuid(0x907298A6, 0x3F2C3E77, 0xB6A5EF45, 0x3782EBC1) }, 
        { FName("W_IRR_VendorItem_FactionInfo"), FGuid(0xE90479D2, 0xEF3C3C54, 0xB58E5585, 0x960E1763) }, 
        { FName("W_IRR_VendorItem_ItemInfo"), FGuid(0xF83DD3C7, 0x72753FE4, 0xB8F4666B, 0xED32A49F) }, 
        { FName("W_IRR_VendorItem_Price"), FGuid(0x4C3CD552, 0x89DC369D, 0x94D7C05B, 0xC6836BB1) }, 
        { FName("W_IRR_VendorItem_Stock"), FGuid(0xA63D1173, 0xEB1131BA, 0xA828C5A3, 0x75BF9E5E) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnAddToCart = ;
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
    class UW_IRR_VendorItem_Stock_C* W_IRR_VendorItem_Stock;
    class UW_IRR_VendorItem_Price_C* W_IRR_VendorItem_Price;
    class UW_IRR_VendorItem_ItemInfo_C* W_IRR_VendorItem_ItemInfo;
    class UW_IRR_VendorItem_FactionInfo_C* W_IRR_VendorItem_FactionInfo;
    class UW_IRR_VendorItem_Action_C* W_IRR_VendorItem_Action;
    class UW_IRR_BaseButton_C* W_IRR_BaseButton;
    class UBorder* SelectionBorder;
    class USizeBox* ItemSizeBox;
    class UWidgetSwitcher* Target;
    class UW_InventoryItem_C* ItemRef;
    class UMaterialInstance* BaseColor;

};