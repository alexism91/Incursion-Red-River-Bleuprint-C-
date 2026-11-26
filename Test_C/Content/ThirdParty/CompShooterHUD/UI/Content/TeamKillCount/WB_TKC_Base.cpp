class UWB_TKC_Base_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/TeamKillCount/WB_TKC_Base.WB_TKC_Base_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/TeamKillCount/WB_TKC_Base.WB_TKC_Base_C:FadeAnim1_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/TeamKillCount/WB_TKC_Base.WB_TKC_Base_C:FadeAnim2_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/TeamKillCount/WB_TKC_Base.WB_TKC_Base_C:ExecuteUbergraph_WB_TKC_Base'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("WB_Team2"), FGuid(0x8F30EDC9, 0x41C863E5, 0x67F98292, 0x08121111) }, 
        { FName("BackgroundColor"), FGuid(0x19540ACC, 0x4B23E4A9, 0x0BFEED88, 0xD174D0FE) }, 
        { FName("ProgressColor"), FGuid(0x4BBCF1FA, 0x41FEB9AA, 0x5A5492A7, 0x163FCBE2) }, 
        { FName("FrameColor"), FGuid(0x13541CE0, 0x48D5DBF6, 0xFB296F97, 0x240DDB94) }, 
        { FName("ValueTextColor"), FGuid(0xF61AB67A, 0x4F336B94, 0x31030383, 0x094F7C5C) }, 
        { FName("TeamTextColor"), FGuid(0xAA1E0F62, 0x4B5955BF, 0x7A28F79A, 0xC7B46C11) }, 
        { FName("TeamName"), FGuid(0x84AAD38E, 0x46944B58, 0x54096F89, 0xCF897B01) }, 
        { FName("WB_Team1"), FGuid(0x278DFF29, 0x4F0781E8, 0xC717A58E, 0x0C4A2D4B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FLinearColor TeamTextColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor ValueTextColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor FrameColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor ProgressColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor BackgroundColor = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_Team2;
    class UOverlay* OV_Team1;
    class UImage* Image_468;
    class UImage* Image_71;
    class UHorizontalBox* HB_Anim;
    class UBorder* b_Anim2Opacity;
    class UBorder* b_Anim2Color;
    class UBorder* b_Anim1Opacity;
    class UBorder* b_Anim1Color;
    class UWidgetAnimation* FadeAnim1;
    class UWidgetAnimation* FadeAnim2;
    class UWB_Team1_C* WB_Team1;
    FText TeamName;
    class UWB_Team2_C* WB_Team2;

};