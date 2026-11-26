class UW_AVS_Mini_Backpack_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Gear/Backpack/AVS_Mini_Backpack/W_AVS_Mini_Backpack.W_AVS_Mini_Backpack_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gear/Backpack/AVS_Mini_Backpack/W_AVS_Mini_Backpack.W_AVS_Mini_Backpack_C:ExecuteUbergraph_W_AVS_Mini_Backpack'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_InventoryHeadline_C* W_InventoryHeadline_2;
    class UW_SpatialContainer_C* Backpack;

};