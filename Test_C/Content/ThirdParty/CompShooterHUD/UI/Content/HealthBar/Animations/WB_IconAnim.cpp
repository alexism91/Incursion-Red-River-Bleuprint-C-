class UWB_IconAnim_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Animations/WB_IconAnim.WB_IconAnim_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Animations/WB_IconAnim.WB_IconAnim_C:FadeAnim_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HealthBar/Animations/WB_IconAnim.WB_IconAnim_C:ExecuteUbergraph_WB_IconAnim'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_Content;
    class UImage* Image_1;
    class UImage* Image_0;
    class UBorder* b_Color2;
    class UBorder* b_Color1;
    class UWidgetAnimation* FadeAnim;

};