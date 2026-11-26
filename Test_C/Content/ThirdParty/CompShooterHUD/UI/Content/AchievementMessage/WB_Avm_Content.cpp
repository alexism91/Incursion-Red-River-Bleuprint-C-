class UWB_Avm_Content_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/AchievementMessage/WB_Avm_Content.WB_Avm_Content_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/AchievementMessage/WB_Avm_Content.WB_Avm_Content_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/AchievementMessage/WB_Avm_Content.WB_Avm_Content_C:ExecuteUbergraph_WB_Avm_Content'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_Achievement1_C* WB_Achivement1;
    class UTextBlock* Text_Achievement;
    class UOverlay* OV_Achievement;
    class UImage* Img_Shine;
    class UBorder* b_Achievement_Text;
    class UWidgetAnimation* Fade;

};