class UW_SSO_Smersh_Backpack_C : public UBaseContainerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/InventorySystem/Items/Gear/Backpack/SSO_Smersh_Backpack/W_SSO_Smersh_Backpack.W_SSO_Smersh_Backpack_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Gear/Backpack/SSO_Smersh_Backpack/W_SSO_Smersh_Backpack.W_SSO_Smersh_Backpack_C:ExecuteUbergraph_W_SSO_Smersh_Backpack'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Backpack"), FGuid(0x2CB07B79, 0x43023F8D, 0xADC55E09, 0x1815E5A1) }, 
        { FName("Backpack_1"), FGuid(0xFAADABAC, 0x48872D6D, 0xB8A6F8B6, 0x8BC0F3E4) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_SpatialContainer_C* Backpack_1;
    class UW_SpatialContainer_C* Backpack;

};