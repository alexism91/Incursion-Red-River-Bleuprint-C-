class UW_LaptopHeadline_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/General/W_LaptopHeadline.W_LaptopHeadline_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/General/W_LaptopHeadline.W_LaptopHeadline_C:ExecuteUbergraph_W_LaptopHeadline'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Headline"), FGuid(0xDF2CF4EC, 0x41938D1E, 0x6F118887, 0x4F7144B1) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FText Headline = FText("Headline");
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* HeadlineText;

};