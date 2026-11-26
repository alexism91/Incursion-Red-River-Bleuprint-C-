class UWB_Container_Circular_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarCircular/Content/WB_Container_Circular.WB_Container_Circular_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarCircular/Content/WB_Container_Circular.WB_Container_Circular_C:ExecuteUbergraph_WB_Container_Circular'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("LocalColor"), FGuid(0x9B67A3AD, 0x497CA117, 0x93F77A8E, 0xE0045FCC) }, 
        { FName("bIsChanging"), FGuid(0xA7478B6D, 0x4D120350, 0xCC9A5DA3, 0xAE60CB27) }, 
        { FName("bUseProgressChangeColor"), FGuid(0xC9859413, 0x4698F68E, 0x275276A8, 0x05B1D97A) }, 
        { FName("bIsProgressChanging"), FGuid(0xFCDFD4E3, 0x42A4102C, 0x4FB313B1, 0x43642E94) }, 
        { FName("ProgressChangeColor"), FGuid(0xF01E841A, 0x4953F627, 0x2F033289, 0x8276A649) }, 
        { FName("MarqueeColorBG"), FGuid(0xE39153B3, 0x4EC870BB, 0x40F8F6B9, 0x533528B8) }, 
        { FName("MarqueeColor"), FGuid(0xFBF5FB9E, 0x442A5E95, 0xF770469B, 0xE21ED5CE) }, 
        { FName("bUseMarquee"), FGuid(0x4515362D, 0x4EDCDEE4, 0xBF4C4390, 0xA7823277) }, 
        { FName("BackgroundThickness"), FGuid(0x23C9EDD2, 0x44C4EA40, 0x0CA3F29B, 0x34DC78BA) }, 
        { FName("BackgroundMask"), FGuid(0xD34374CD, 0x4E695AA5, 0x673EFF90, 0xDFD2BE93) }, 
        { FName("FillColorMask"), FGuid(0xA73DA564, 0x44AE3062, 0xB80E298A, 0x01C8AC80) }, 
        { FName("bUseGradient"), FGuid(0xCDA886F1, 0x43990EF6, 0xF06CA6BB, 0x1D4A1A98) }, 
        { FName("GradientOpacity"), FGuid(0x148BE2A6, 0x4636E513, 0x9B8870A3, 0x1B2C7FC5) }, 
        { FName("GradientColor"), FGuid(0xE6F69878, 0x437794D8, 0xF970A7AE, 0x2AE56C32) }, 
        { FName("TargetFillColor_Negative"), FGuid(0x14866ECC, 0x451E3087, 0xF22DDBA8, 0xBB4F0863) }, 
        { FName("TargetFillColor_Positive"), FGuid(0xBCBC8195, 0x435B6EC5, 0x16F7A18B, 0xFA17B95C) }, 
        { FName("bUseTargetPercent"), FGuid(0x22DEE84D, 0x48E12A39, 0xCDEA818F, 0xAAF2EE14) }, 
        { FName("Timer"), FGuid(0x60597AE7, 0x4D5770B4, 0xBF4D7C8D, 0x6272EEE3) }, 
        { FName("DeltaTime"), FGuid(0xCCBF0DBA, 0x4114EA72, 0xF4EC21A3, 0xC9335A31) }, 
        { FName("bIsDesignTime"), FGuid(0xF84E2A5B, 0x40CB2CF5, 0x59CB8697, 0xA4831206) }, 
        { FName("ProgressMethod"), FGuid(0x8096FFDA, 0x4D82500E, 0xA57C9AAC, 0x74BF44E3) }, 
        { FName("bIsNegativeFillValue"), FGuid(0xAC5FDFB3, 0x43E078ED, 0x52D5B587, 0x4F10C78E) }, 
        { FName("bAbsoluteFillMethod"), FGuid(0x1BCCF287, 0x4FF18FFD, 0x76B23E93, 0x9D09CE1B) }, 
        { FName("CurrentPercent"), FGuid(0xAF4B6631, 0x4AB61FE8, 0xC8B706A0, 0x0237C08F) }, 
        { FName("TargetPercent"), FGuid(0x578418AE, 0x44BE2A0B, 0x906D0A9A, 0x0BAAA2D0) }, 
        { FName("FillColor"), FGuid(0x9E739810, 0x43D6D984, 0x6798F78F, 0xC02A5208) }, 
        { FName("BackgroundColor"), FGuid(0x763F5985, 0x4788A0A7, 0x786629B3, 0x1005A669) }, 
        { FName("StepDensity"), FGuid(0xD18567BE, 0x4490E1BA, 0x98279AAA, 0x3A68A2E4) }, 
        { FName("Spacing"), FGuid(0x3B535A02, 0x4F8D661F, 0x86B8FE90, 0xBBA6EC73) }, 
        { FName("Steps"), FGuid(0x99B7D67B, 0x42742B90, 0x8D557DA6, 0xC1355687) }, 
        { FName("Density"), FGuid(0x7FFE1AE0, 0x4FA1C15F, 0x5FF26CB4, 0x1C371954) }, 
        { FName("Thickness"), FGuid(0x42418974, 0x472912A6, 0x227F9684, 0x74340696) }, 
        { FName("CircleMaterial"), FGuid(0xE8CC2128, 0x4A80E148, 0xDD7080B5, 0xE305AFD7) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Thickness = 0.20000000298023224;
    int32 Steps = 10;
    double Spacing = 0.9990000128746033;
    double StepDensity = 1;
    struct FLinearColor BackgroundColor = FLinearColor(1, 1, 1, 0,25);
    struct FLinearColor FillColor = FLinearColor(1, 1, 1, 1);
    double DeltaTime = 0.0010000000474974513;
    struct FTimerHandle Timer = {
        "Handle": 0
    };
    struct FLinearColor TargetFillColor_Positive = FLinearColor(0, 0, 0, 0);
    struct FLinearColor TargetFillColor_Negative = FLinearColor(0, 0, 0, 0);
    struct FLinearColor GradientColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor MarqueeColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor MarqueeColorBG = FLinearColor(0, 0, 0, 0);
    struct FLinearColor ProgressChangeColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor LocalColor = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedPaint = false;
    class UWidgetSwitcher* WS_Marquee;
    class UImage* TargetCircle;
    class USizeBox* SB_Content;
    class UOverlay* OV_TargetCircle;
    class UImage* MarqueeCircle;
    class UImage* MarqueeBackground;
    class UImage* Circle;
    class UMaterialInstanceDynamic* CircleMaterial;
    double Density;
    double TargetPercent;
    double CurrentPercent;
    bool bAbsoluteFillMethod;
    bool bIsNegativeFillValue;
    EProgressMethod ProgressMethod;
    bool bIsDesignTime;
    bool bUseTargetPercent;
    double GradientOpacity;
    bool bUseGradient;
    class UTexture2D* FillColorMask;
    class UTexture2D* BackgroundMask;
    double BackgroundThickness;
    bool bUseMarquee;
    bool bIsProgressChanging;
    bool bUseProgressChangeColor;
    bool bIsChanging;

};