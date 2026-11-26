class UWB_DamageIndicatorAnim_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageIndicator/WB_DamageIndicatorAnim.WB_DamageIndicatorAnim_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageIndicator/WB_DamageIndicatorAnim.WB_DamageIndicatorAnim_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/DamageIndicator/WB_DamageIndicatorAnim.WB_DamageIndicatorAnim_C:ExecuteUbergraph_WB_DamageIndicatorAnim'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Image_78;
    class UWidgetAnimation* Fade;

};