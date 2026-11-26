class UWB_SingleHint_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_SingleHint.WB_SingleHint_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_SingleHint.WB_SingleHint_C:ExecuteUbergraph_WB_SingleHint'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("HintText"), FGuid(0x54318494, 0x4F029460, 0x32A62786, 0xDF147324) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* Hint;
    FText HintText;

};