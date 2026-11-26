class UWB_Entry_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/IntermediatePoints/Content/WB_Entry.WB_Entry_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/IntermediatePoints/Content/WB_Entry.WB_Entry_C:FadeIn_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/IntermediatePoints/Content/WB_Entry.WB_Entry_C:FadeOut_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/IntermediatePoints/Content/WB_Entry.WB_Entry_C:ExecuteUbergraph_WB_Entry'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* Text_Value;
    class UTextBlock* Text_Action;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;

};