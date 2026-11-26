class UW_MapDifficulty_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MapDifficulty.W_MapDifficulty_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_MapDifficulty.W_MapDifficulty_C:ExecuteUbergraph_W_MapDifficulty'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Debug Difficulty Level"), FGuid(0x616E8EFB, 0x48A66E9E, 0xDCDD1C9F, 0xF23006B1) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UHorizontalBox* HorizontalBox_34;
    int Debug Difficulty Level;

};