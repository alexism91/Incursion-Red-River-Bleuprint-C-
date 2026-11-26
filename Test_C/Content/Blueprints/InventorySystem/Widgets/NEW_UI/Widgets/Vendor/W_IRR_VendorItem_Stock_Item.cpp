class UW_IRR_VendorItem_Stock_Item_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_Stock_Item.W_IRR_VendorItem_Stock_Item_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Widgets/NEW_UI/Widgets/Vendor/W_IRR_VendorItem_Stock_Item.W_IRR_VendorItem_Stock_Item_C:ExecuteUbergraph_W_IRR_VendorItem_Stock_Item'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UBorder* Stock;

};