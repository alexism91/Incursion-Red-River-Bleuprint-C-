class UWB_Timer_ProgressBar_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Timer/WB_Timer_ProgressBar.WB_Timer_ProgressBar_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Timer/WB_Timer_ProgressBar.WB_Timer_ProgressBar_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Timer/WB_Timer_ProgressBar.WB_Timer_ProgressBar_C:ExecuteUbergraph_WB_Timer_ProgressBar'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CurrentValue"), FGuid(0x73DCC082, 0x41CED567, 0xBC4D1FAC, 0x93058FB6) }, 
        { FName("EmptyColor"), FGuid(0x47DBBB9A, 0x4AB2A31A, 0xC173C294, 0x2671A126) }, 
        { FName("FillColor"), FGuid(0x34164D51, 0x4F750478, 0x255D79A5, 0x31FA4DAA) }, 
        { FName("Opacity"), FGuid(0x24778C64, 0x40B8D125, 0x212CFB9F, 0x2CD1A8A5) }, 
        { FName("LiveProgress"), FGuid(0xA05038F0, 0x464AE5C8, 0xA9A1BA86, 0xF74F2791) }, 
        { FName("Timesteps_Time"), FGuid(0xE42EF86A, 0x45765082, 0x8D30699A, 0x1A8FB369) }, 
        { FName("ProgressTime"), FGuid(0x3EC0EBCA, 0x4FC3E492, 0x80904BB7, 0x80F0B6F7) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Timesteps_Time = 0.0010000000474974513;
    struct FLinearColor FillColor = FLinearColor(0, 0,167567, 1, 1);
    struct FLinearColor EmptyColor = FLinearColor(1, 1, 1, 0,25);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Img_Shine2;
    class UImage* Img_Shine1;
    class UImage* Image_5;
    class UImage* CircleImg;
    class UBorder* b_StaticCircle;
    class UBorder* B_Shine2_Rotation;
    class UBorder* B_Shine1_Rotation;
    class UBorder* b_CircleImg;
    class UWidgetAnimation* Fade;
    double ProgressTime;
    double LiveProgress;
    double Opacity;
    double CurrentValue;

};