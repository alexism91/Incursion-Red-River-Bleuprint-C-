class UWB_LinearProgress_Separated_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_LinearProgress_Separated.WB_LinearProgress_Separated_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_LinearProgress_Separated.WB_LinearProgress_Separated_C:ExecuteUbergraph_WB_LinearProgress_Separated'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("bUseShader"), FGuid(0x21108033, 0x4B4FED97, 0xBB6A6F82, 0x1B755EC9) }, 
        { FName("BlurStrength"), FGuid(0x3A3CFE1E, 0x40F64874, 0x6DE81E92, 0x2FFDB014) }, 
        { FName("bUseBackgroundBlur"), FGuid(0x1CA969AD, 0x4EC62329, 0x7A739FB6, 0x092D2C78) }, 
        { FName("bIsFillFromCenter"), FGuid(0x555DAD5C, 0x49906E39, 0x244C49B4, 0xFFD7F177) }, 
        { FName("FillType"), FGuid(0x377BAE2F, 0x450F0BAC, 0x0C528FB2, 0x761C4B4B) }, 
        { FName("Segments_Marquees"), FGuid(0x57390389, 0x496501A2, 0x74480EA4, 0xA9A5036B) }, 
        { FName("bAbsoluteFill"), FGuid(0x5ADEE5B1, 0x43415740, 0x80BAD88C, 0x46332051) }, 
        { FName("FillColor"), FGuid(0xCEB814D7, 0x4982F34A, 0x7024D5A3, 0x78C0739F) }, 
        { FName("Percent"), FGuid(0x7DE7A9A2, 0x4E1702C8, 0xF1C20380, 0x1D688C3E) }, 
        { FName("BackgroundColor"), FGuid(0xD318B350, 0x4AF1F711, 0x6F7525A1, 0xEEAEAA4F) }, 
        { FName("Size"), FGuid(0x85BF2D4C, 0x49D8CD35, 0xD3841290, 0x33F93B31) }, 
        { FName("Spacing"), FGuid(0x2734B889, 0x42A23783, 0x8B7AAAB2, 0xC5DBF37D) }, 
        { FName("NumSegments"), FGuid(0x50215D56, 0x49367B50, 0xEB144099, 0x1266692A) }, 
        { FName("Segments_PB"), FGuid(0xCC6DDDF4, 0x4BB9A86B, 0x3AFE23A9, 0x42ECCE46) }, 
        { FName("Segments_BG"), FGuid(0xCA466312, 0x41990537, 0x2FCB85A5, 0x85E1E299) }, 
        { FName("HB_Backgrounds"), FGuid(0x652E19E5, 0xC3193B9C, 0x85E59DB7, 0xAFF27F03) }, 
        { FName("HB_Marquees"), FGuid(0x83FBCAAE, 0x8CF63FFD, 0xA00DD81A, 0x73F4BF83) }, 
        { FName("HB_ProgressBars"), FGuid(0xDB050E81, 0xF8333834, 0x9978EF0F, 0x7734F3BA) }, 
        { FName("VB_Backgrounds"), FGuid(0x407C5D51, 0x73483F3D, 0xAC96A400, 0x0822E2C4) }, 
        { FName("VB_Marquees"), FGuid(0x04CE3D53, 0x6040313D, 0xAEA8EAEB, 0xB509776E) }, 
        { FName("VB_ProgressBars"), FGuid(0xC114A02C, 0x87CC3426, 0xA5BB8963, 0x3C9A3457) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D Size = FVector2D(0, 0);
    struct FLinearColor BackgroundColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor FillColor = FLinearColor(0, 0, 0, 0);
    bool bAbsoluteFill = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* VB_ProgressBars;
    class UVerticalBox* VB_Marquees;
    class UVerticalBox* VB_Backgrounds;
    class UHorizontalBox* HB_ProgressBars;
    class UHorizontalBox* HB_Marquees;
    class UHorizontalBox* HB_Backgrounds;
    TArray<class UWB_Image_Raw_C*>* Segments_BG;
    TArray<class UWB_PB_Raw_C*>* Segments_PB;
    int NumSegments;
    double Spacing;
    double Percent;
    TArray<class UWB_PB_Raw_C*>* Segments_Marquees;
    byte FillType;
    bool bIsFillFromCenter;
    bool bUseBackgroundBlur;
    double BlurStrength;
    bool bUseShader;

};