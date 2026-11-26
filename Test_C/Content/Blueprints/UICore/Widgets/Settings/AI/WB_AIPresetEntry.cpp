class UWB_AIPresetEntry_C : public UIRRAIPresetListEntryWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/AI/WB_AIPresetEntry.WB_AIPresetEntry_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/Settings/AI/WB_AIPresetEntry.WB_AIPresetEntry_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/AI/WB_AIPresetEntry.WB_AIPresetEntry_C:ExecuteUbergraph_WB_AIPresetEntry'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Author"), FGuid(0x6FFA271F, 0x4C66507B, 0x1A2771BD, 0x653A24EF) }, 
        { FName("BackgroundBorder"), FGuid(0x148D13AD, 0x40974DEC, 0xCCAEB5AD, 0x597AF3EE) }, 
        { FName("BackgroundBorder_1"), FGuid(0xBF7AB65A, 0x4DFFCCBE, 0xA8DBD3A1, 0xECE5F876) }, 
        { FName("Border"), FGuid(0x40D7B47A, 0x40EAD763, 0xD9122698, 0x191C6823) }, 
        { FName("SelectionBorder"), FGuid(0x370316B2, 0x4D3D54D2, 0xEDCBF7B3, 0x6CB11B8F) }, 
        { FName("Title"), FGuid(0x984FDEAA, 0x4A38852F, 0x1D11DEAA, 0x349174E9) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* Title;
    class UBorder* SelectionBorder;
    class UBorder* Border;
    class UBorder* BackgroundBorder_1;
    class UBorder* BackgroundBorder;
    class UIRRTextBlock* Author;

};