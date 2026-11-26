class UWB_QuestLogFilter_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestLogFilter.WB_QuestLogFilter_C:WidgetTree'";
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestLogFilter.WB_QuestLogFilter_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestLogFilter.WB_QuestLogFilter_C:ExecuteUbergraph_WB_QuestLogFilter'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("On_FilterSelected"), FGuid(0xF74546E6, 0x4E691A50, 0xFAA27C91, 0x09FF4024) }, 
        { FName("IconMaterial"), FGuid(0x77170BD2, 0x4BBBADB9, 0xC6ED6A82, 0xE25AC3AB) }, 
        { FName("Title"), FGuid(0x8E862BB3, 0x4E944596, 0x135159BE, 0xE64BC63C) }, 
        { FName("IsSelected?"), FGuid(0x8E9B64CE, 0x4765438C, 0x5CA524AD, 0x4DD7251D) }, 
        { FName("IsHovered?"), FGuid(0x6512760F, 0x473FD89B, 0xC2B79BBE, 0x6AB56A4A) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UMaterialInstanceConstant* IconMaterial = "MaterialInstanceConstant'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/Materials/MarkerInstances/MI_QuestList_1.MI_QuestList_1'";
     On_FilterSelected = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* Name;
    class UBorder* Icon;
    class UButton* Dummy;
    bool IsHovered?;
    bool IsSelected?;
    FText Title;

};