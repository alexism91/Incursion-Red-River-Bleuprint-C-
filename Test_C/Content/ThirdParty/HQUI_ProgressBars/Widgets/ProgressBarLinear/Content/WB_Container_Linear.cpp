class UWB_Container_Linear_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Container_Linear.WB_Container_Linear_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Container_Linear.WB_Container_Linear_C:ExecuteUbergraph_WB_Container_Linear'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("BarFillType"), FGuid(0xA5EF5A2B, 0x4D2D203F, 0x4F473BB9, 0x9A5BFE36) }, 
        { FName("bIsProgressChanging"), FGuid(0x341F12A3, 0x44C788A1, 0xFD3F139A, 0x81B75074) }, 
        { FName("bUseProgressChangeColor"), FGuid(0xF46ABC0E, 0x420A7FCF, 0xF6BBA096, 0x4B2B80DD) }, 
        { FName("ProgressChangeColor"), FGuid(0x83097546, 0x414821E8, 0x9F1768AB, 0xA0658411) }, 
        { FName("FillColor"), FGuid(0x5AF28DC6, 0x42C5B46A, 0x524F579B, 0xB9886A37) }, 
        { FName("bUseSeparation"), FGuid(0xBDEE60D1, 0x4B6ACA2E, 0x4E9E9DAB, 0x91AE12F5) }, 
        { FName("MarqueeMethod"), FGuid(0xB7549984, 0x45A08C86, 0xB45F6581, 0xB76BF97C) }, 
        { FName("bUseMarquee"), FGuid(0xAD721350, 0x49F378B2, 0x79A9F899, 0x27B12499) }, 
        { FName("ProgressMethod"), FGuid(0x998A553B, 0x48D90E75, 0xA63EDE98, 0xCFCB52D1) }, 
        { FName("bIsDesignTime"), FGuid(0xAD0432F3, 0x4E1E805A, 0x0BA476A5, 0x9028F4E4) }, 
        { FName("bUseTargetPercent"), FGuid(0x3AD00E35, 0x40853351, 0x730213A1, 0x7BAAFFA4) }, 
        { FName("Timer"), FGuid(0xA25190FD, 0x41C3D943, 0x54221184, 0x73B23D31) }, 
        { FName("DeltaTime"), FGuid(0xAD643DE4, 0x4919F336, 0xFFB518AB, 0x638B2804) }, 
        { FName("bIsNegativeFillValue"), FGuid(0xFB541870, 0x4A29FCE1, 0xF6B7758A, 0x242CEBB2) }, 
        { FName("TargetPercent"), FGuid(0x5D2359F5, 0x4472FD1D, 0x2160EA8F, 0x634EAD92) }, 
        { FName("TargetFillColor_Negative"), FGuid(0xDDFF89EA, 0x410779DF, 0xDD806F98, 0xED373BAE) }, 
        { FName("TargetFillColor_Positive"), FGuid(0xDBA8C8D6, 0x4E496ED6, 0x1937398F, 0x8E6E66F2) }, 
        { FName("CurrentPercent"), FGuid(0x4738DD49, 0x462AE55F, 0xFE21E587, 0x12A9DDE3) }, 
        { FName("Size"), FGuid(0x3836F76D, 0x44860712, 0xC86771BF, 0x43847CC0) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D Size = FVector2D(0, 0);
    struct FLinearColor TargetFillColor_Positive = FLinearColor(0, 0, 0, 0);
    struct FLinearColor TargetFillColor_Negative = FLinearColor(0, 0, 0, 0);
    double DeltaTime = 0.0010000000474974513;
    struct FTimerHandle Timer = {
        "Handle": 0
    };
    struct FLinearColor FillColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor ProgressChangeColor = FLinearColor(1, 1, 1, 1);
    bool bHasScriptImplementedPaint = false;
    enum Clipping = EWidgetClipping::ClipToBounds;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UWB_LinearProgress_Separated_C* WB_LinearProgress_Separated;
    class UWB_Marquee_Linear_C* TargetProgressBar_Marquee;
    class UWB_PB_Linear_Target_C* TargetProgressBar;
    class UWidgetSwitcher* Switcher;
    class UProgressBar* PB_DefaultMarquee;
    class UOverlay* OV_TargetProgressBar_Marquee;
    class UOverlay* OV_TargetProgressBar;
    class UOverlay* OV_OnTop_Marquee;
    class UOverlay* OV_BaseProgressBar_Marquee;
    class UWB_Marquee_Linear_C* OnTop_Marquee;
    class UWB_Marquee_Linear_C* BaseProgressBar_Marquee;
    class UWB_PB_Linear_Base_C* BaseProgressBar;
    double CurrentPercent;
    double TargetPercent;
    bool bIsNegativeFillValue;
    bool bUseTargetPercent;
    bool bIsDesignTime;
    EProgressMethod ProgressMethod;
    bool bUseMarquee;
    EMarqueeMethod MarqueeMethod;
    bool bUseSeparation;
    bool bUseProgressChangeColor;
    bool bIsProgressChanging;
    byte BarFillType;

};