class UWB_SpecialHitPoint_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HitPoints/WB_SpecialHitPoint.WB_SpecialHitPoint_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HitPoints/WB_SpecialHitPoint.WB_SpecialHitPoint_C:Fade_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HitPoints/WB_SpecialHitPoint.WB_SpecialHitPoint_C:RandomLeft_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HitPoints/WB_SpecialHitPoint.WB_SpecialHitPoint_C:RandomRight_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/HitPoints/WB_SpecialHitPoint.WB_SpecialHitPoint_C:ExecuteUbergraph_WB_SpecialHitPoint'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Text"), FGuid(0x0BDB2C0B, 0x4EE50133, 0xA70DC69E, 0x4609AABA) }, 
        { FName("TextColor"), FGuid(0x54A37CC9, 0x47B325EF, 0x6C79F9B4, 0x4CBBD21D) }, 
        { FName("TargetLocation"), FGuid(0x8F6BABF4, 0x4FCCA8BE, 0xB5C3A7B2, 0x86AD8777) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector TargetLocation = FVector(0, 0, 0);
    struct FSlateColor TextColor = {
        "SpecifiedColor": FLinearColor(1, 0, 1, 1),
        "ColorUseRule": ESlateColorStylingMode::UseColor_Specified
    };
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* Point_Text;
    class UOverlay* OV_Content;
    class UImage* Img_Soften;
    class UImage* Img_Particle;
    class UBorder* b_Opacity;
    class UBorder* b_ImgSoften;
    class UBorder* b_Content;
    class UTextBlock* +Text;
    class UWidgetAnimation* Fade;
    class UWidgetAnimation* RandomLeft;
    class UWidgetAnimation* RandomRight;
    FText Text;

};