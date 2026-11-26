class UWB_AIPresetLoad_C : public UIRRAIPresetLoadWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/AI/WB_AIPresetLoad.WB_AIPresetLoad_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/AI/WB_AIPresetLoad.WB_AIPresetLoad_C:ExecuteUbergraph_WB_AIPresetLoad'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("In Text"), FGuid(0x0E5A0C05, 0x43335A3A, 0xD6ACD99F, 0x61408B6C) }, 
        { FName("IRRTextBlock_1"), FGuid(0xE5DFB8F7, 0x4D63BB70, 0x6D0F0DBB, 0x320228FD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* IRRTextBlock_1;
    FText In Text;

};