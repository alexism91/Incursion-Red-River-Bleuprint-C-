class UWB_Achievement_Anim_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/AchievementMessage/WB_Achievement_Anim.WB_Achievement_Anim_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/AchievementMessage/WB_Achievement_Anim.WB_Achievement_Anim_C:FadeAnim_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/AchievementMessage/WB_Achievement_Anim.WB_Achievement_Anim_C:ExecuteUbergraph_WB_Achievement_Anim'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* SoftShine;
    class UImage* Shine1;
    class UImage* LensFull;
    class UImage* Lens1;
    class UImage* Highlight2;
    class UImage* Highlight1_Line;
    class UImage* EllipseHighlight;
    class UWidgetAnimation* FadeAnim;

};