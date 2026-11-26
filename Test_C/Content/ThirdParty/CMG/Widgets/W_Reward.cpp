class UW_Reward_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CMG/Widgets/W_Reward.W_Reward_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CMG/Widgets/W_Reward.W_Reward_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CMG/Widgets/W_Reward.W_Reward_C:ExecuteUbergraph_W_Reward'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Duration"), FGuid(0x3C3C99F8, 0x4887DE32, 0x26BA10B8, 0x130954AE) }, 
        { FName("Rewards"), FGuid(0x118975E8, 0x45CF2ECE, 0x648FFF9E, 0x75B0B4CB) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<struct FS_Reward> Rewards = {
        {
            "RewardType_16_0CFD20454E04D7648FBEE6BC5302996D": E_RewardType::NewEnumerator0,
            "Value_5_4EA4281A43C5574034B37AABDAF74F80": 0,
            "Text_11_5746A83A423C5683D077388C209478A5": FText(""),
            "Icon_20_AC98B73949C923F88A1315990B5428FC": nullptr,
            "BackgroundColor_12_B78C39724DF6C59CE877D2B434361C25": FLinearColor(0, 0, 0, 0)
        }
    };
    double Duration = 10;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* VerticalBox_42;
    class UWidgetAnimation* Fade;

};