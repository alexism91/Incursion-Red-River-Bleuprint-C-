class UWB_AIPresetSave_C : public UIRRAIPresetSaveWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/AI/WB_AIPresetSave.WB_AIPresetSave_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/AI/WB_AIPresetSave.WB_AIPresetSave_C:ExecuteUbergraph_WB_AIPresetSave'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("In Text"), FGuid(0xA08F6781, 0x4FB1B2B9, 0xE597A2BB, 0xBB10E6F7) }, 
        { FName("IRRTextBlock_1"), FGuid(0x01D9AF46, 0x4B106601, 0xD55F18B7, 0xDD253C18) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* IRRTextBlock_1;
    FText In Text;

};