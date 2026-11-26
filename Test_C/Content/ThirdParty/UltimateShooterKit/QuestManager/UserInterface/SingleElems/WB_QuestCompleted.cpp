class UWB_QuestCompleted_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestCompleted.WB_QuestCompleted_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestCompleted.WB_QuestCompleted_C:Toggle_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/QuestManager/UserInterface/SingleElems/WB_QuestCompleted.WB_QuestCompleted_C:ExecuteUbergraph_WB_QuestCompleted'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("WidgetVisible"), FGuid(0x45CC95B8, 0x4D97A48F, 0x629077BA, 0xD1DABD51) }, 
        { FName("CurrentSettings"), FGuid(0x979172EF, 0x4F55F24E, 0x8D380CA5, 0x8EFFE896) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FStruct_QuestCompletedUI CurrentSettings = {
        "TopText_10_5FD9D8A44AB3B22F7D4CA8BFA62245CA": FText("Q U E S T  F I N I S H E D"),
        "BottomText_11_79699A7A44403BE0A9BA12A740D768A9": FText(""),
        "BackgroundColor_12_BD16D9014B7FBA728DBBE7944E5F9456": FLinearColor(0, 0, 0, 0,5),
        "LineColor_6_19F097CA444FBC4D7C49F884AA54BB89": FLinearColor(0,557292, 0,557292, 0,557292, 0,5),
        "DisplayTime_9_2856E31644C81060E8EB50B311399A60": 3
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* QuestResult;
    class UTextBlock* QuestName;
    class UBorder* Line;
    class UBorder* BG2;
    class UBorder* BG1;
    class UWidgetAnimation* Toggle;
    bool WidgetVisible;

};