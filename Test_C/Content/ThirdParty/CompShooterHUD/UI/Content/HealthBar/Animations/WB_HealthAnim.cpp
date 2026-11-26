class UWB_HealthAnim_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Animations/WB_HealthAnim.WB_HealthAnim_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Animations/WB_HealthAnim.WB_HealthAnim_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Animations/WB_HealthAnim.WB_HealthAnim_C:ExecuteUbergraph_WB_HealthAnim'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Image_0;
    class UBorder* b_Color;
    class UWidgetAnimation* Fade;

};