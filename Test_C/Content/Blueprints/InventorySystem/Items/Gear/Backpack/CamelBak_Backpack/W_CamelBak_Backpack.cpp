class UW_CamelBak_Backpack_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Gear/Backpack/CamelBak_Backpack/W_CamelBak_Backpack.W_CamelBak_Backpack_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gear/Backpack/CamelBak_Backpack/W_CamelBak_Backpack.W_CamelBak_Backpack_C:ExecuteUbergraph_W_CamelBak_Backpack'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_SpatialContainer_C* Backpack;

};