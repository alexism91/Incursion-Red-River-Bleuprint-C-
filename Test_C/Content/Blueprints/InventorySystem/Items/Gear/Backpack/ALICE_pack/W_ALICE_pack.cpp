class UW_ALICE_pack_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Gear/Backpack/ALICE_pack/W_ALICE_pack.W_ALICE_pack_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gear/Backpack/ALICE_pack/W_ALICE_pack.W_ALICE_pack_C:ExecuteUbergraph_W_ALICE_pack'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Backpack"), FGuid(0x2CB07B79, 0x43023F8D, 0xADC55E09, 0x1815E5A1) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_SpatialContainer_C* Backpack;

};