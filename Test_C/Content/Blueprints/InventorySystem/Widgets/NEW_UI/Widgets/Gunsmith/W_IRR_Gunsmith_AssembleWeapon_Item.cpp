class UW_IRR_Gunsmith_AssembleWeapon_Item_C : public UIRRHierarchyListItemWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_AssembleWeapon_Item.W_IRR_Gunsmith_AssembleWeapon_Item_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Gunsmith/W_IRR_Gunsmith_AssembleWeapon_Item.W_IRR_Gunsmith_AssembleWeapon_Item_C:ExecuteUbergraph_W_IRR_Gunsmith_AssembleWeapon_Item'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_VendorItem_Price_C* W_IRR_VendorItem_Price;
    class UW_IRR_VendorItem_ItemInfo_C* W_IRR_VendorItem_ItemInfo;
    class UBorder* Border_0;

};