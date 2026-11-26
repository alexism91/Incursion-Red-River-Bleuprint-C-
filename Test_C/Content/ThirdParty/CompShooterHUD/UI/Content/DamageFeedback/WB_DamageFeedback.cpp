class UWB_DamageFeedback_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageFeedback/WB_DamageFeedback.WB_DamageFeedback_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageFeedback/WB_DamageFeedback.WB_DamageFeedback_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageFeedback/WB_DamageFeedback.WB_DamageFeedback_C:ExecuteUbergraph_WB_DamageFeedback'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Img_DamageFeedback;
    class UWidgetAnimation* Fade;

};