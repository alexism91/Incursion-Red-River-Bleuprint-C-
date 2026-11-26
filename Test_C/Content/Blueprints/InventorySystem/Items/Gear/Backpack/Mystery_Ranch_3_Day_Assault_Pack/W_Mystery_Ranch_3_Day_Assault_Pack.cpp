class UW_Mystery_Ranch_3_Day_Assault_Pack_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Gear/Backpack/Mystery_Ranch_3_Day_Assault_Pack/W_Mystery_Ranch_3_Day_Assault_Pack.W_Mystery_Ranch_3_Day_Assault_Pack_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gear/Backpack/Mystery_Ranch_3_Day_Assault_Pack/W_Mystery_Ranch_3_Day_Assault_Pack.W_Mystery_Ranch_3_Day_Assault_Pack_C:ExecuteUbergraph_W_Mystery_Ranch_3_Day_Assault_Pack'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Backpack"), FGuid(0xCAA76B45, 0xB4B93ECC, 0x889B99A2, 0x8227B45D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_SpatialContainer_C* Backpack_1;
    class UW_SpatialContainer_C* Backpack;

};