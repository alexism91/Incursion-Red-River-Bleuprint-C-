class UW_Medical_Case_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Containers/Medical_Case/W_Medical_Case.W_Medical_Case_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Containers/Medical_Case/W_Medical_Case.W_Medical_Case_C:ExecuteUbergraph_W_Medical_Case'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Backpack"), FGuid(0xCAA76B45, 0xB4B93ECC, 0x889B99A2, 0x8227B45D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_SpatialContainer_C* Backpack;

};