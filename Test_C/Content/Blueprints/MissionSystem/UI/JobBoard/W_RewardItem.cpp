class UW_RewardItem_C : public UIRRRewardWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/JobBoard/W_RewardItem.W_RewardItem_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UTexture2D* ExperienceIcon = "Texture2D'Test_C/Content/Blueprints/MissionSystem/Textures/Jobboard/Experience-Icon.Experience-Icon'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
};