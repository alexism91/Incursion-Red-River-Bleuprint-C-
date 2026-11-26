class UWB_FrameBuilder_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_FrameBuilder.WB_FrameBuilder_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_FrameBuilder.WB_FrameBuilder_C:ExecuteUbergraph_WB_FrameBuilder'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("FrameSize"), FGuid(0x5BF613BA, 0x43BC5A44, 0x74E1E3AA, 0xCD592B67) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double FrameSize = 0.1;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* Top;
    class USizeBox* Right;
    class USizeBox* Left;
    class USizeBox* Bottom;

};