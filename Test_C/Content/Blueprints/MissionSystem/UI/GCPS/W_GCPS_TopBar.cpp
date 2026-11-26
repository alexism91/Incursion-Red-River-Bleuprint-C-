class UW_GCPS_TopBar_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_TopBar.W_GCPS_TopBar_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/GCPS/W_GCPS_TopBar.W_GCPS_TopBar_C:ExecuteUbergraph_W_GCPS_TopBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Time_Text"), FGuid(0x511C3FFC, 0xDBB33CE4, 0xBB81D617, 0xAB036773) }, 
        { FName("W_GCPS_ResourceItem"), FGuid(0xC1D97458, 0x415D6725, 0xF74B78B6, 0xA9702962) }, 
        { FName("W_GCPS_ResourceItem_1"), FGuid(0x130E10AB, 0x4830EA72, 0xD03814B4, 0x7FEBAA48) }, 
        { FName("W_GCPS_ResourceItem_2"), FGuid(0x90B6F593, 0x4A65A6DD, 0xBF52908D, 0x475D9137) }, 
        { FName("W_GCPS_ResourceItem_3"), FGuid(0x700D7E34, 0x40A722BC, 0xBAA0FEBA, 0x677AA778) }, 
        { FName("W_IRR_Background_GridAndBlur"), FGuid(0xEC504177, 0x45603103, 0x863C07CA, 0xA63C3131) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Background_GridAndBlur_C* W_IRR_Background_GridAndBlur;
    class UW_GCPS_ResourceItem_C* W_GCPS_ResourceItem_3;
    class UW_GCPS_ResourceItem_C* W_GCPS_ResourceItem_2;
    class UW_GCPS_ResourceItem_C* W_GCPS_ResourceItem_1;
    class UW_GCPS_ResourceItem_C* W_GCPS_ResourceItem;
    class UIRRTextBlock* Time_Text;

};