class UWB_Achievement_Base_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/AchievementMessage/WB_Achievement_Base.WB_Achievement_Base_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/AchievementMessage/WB_Achievement_Base.WB_Achievement_Base_C:ExecuteUbergraph_WB_Achievement_Base'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_Anim;
    class UOverlay* OV_Achievement;

};