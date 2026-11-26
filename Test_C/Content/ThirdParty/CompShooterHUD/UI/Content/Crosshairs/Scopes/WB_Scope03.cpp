class UWB_Scope03_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Scopes/WB_Scope03.WB_Scope03_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Scopes/WB_Scope03.WB_Scope03_C:DecorationLoop_1_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Scopes/WB_Scope03.WB_Scope03_C:DecorationLoop_2_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Scopes/WB_Scope03.WB_Scope03_C:ActivateScope_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Crosshairs/Scopes/WB_Scope03.WB_Scope03_C:ExecuteUbergraph_WB_Scope03'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Ref;
    class UImage* Img_Scope_Lens;
    class UImage* Image_2;
    class UImage* Image_1;
    class UImage* Deco2;
    class UImage* Deco1;
    class UImage* Circle4;
    class UWidgetAnimation* DecorationLoop_1;
    class UWidgetAnimation* DecorationLoop_2;
    class UWidgetAnimation* ActivateScope;

};