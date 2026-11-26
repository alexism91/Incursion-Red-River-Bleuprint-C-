class UProgressBarLinear_C : public UWB_Base_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/ProgressBarLinear.ProgressBarLinear_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/ProgressBarLinear.ProgressBarLinear_C:ExecuteUbergraph_ProgressBarLinear'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("UseShaderProgressBar_Local"), FGuid(0xE3CC9E5A, 0x4E3390D3, 0x1A9857B4, 0x198BF0F5) }, 
        { FName("UseShaderProgressBar"), FGuid(0x2201922F, 0x480101AA, 0x71940299, 0xC51A8E25) }, 
        { FName("PauseWithGamePause_Local"), FGuid(0x71D00328, 0x4A35E753, 0xF155A6B7, 0x10B18B7F) }, 
        { FName("PauseWithGamePause"), FGuid(0xBC6AA33E, 0x40A43018, 0x4C9C8BB8, 0xDA16009E) }, 
        { FName("bIsProgressRunning"), FGuid(0xC2DCD10E, 0x41D5750F, 0xA983598E, 0x3EF49BBD) }, 
        { FName("Entries"), FGuid(0xAADDE312, 0x4CEF60F4, 0x4F441FB3, 0x52B90A5F) }, 
        { FName("Effects_Local"), FGuid(0x7C6ED380, 0x4BA47386, 0x7D4CB8BA, 0x1204A5DF) }, 
        { FName("Separation_AbsoluteFillMethod_Local"), FGuid(0x050FAA75, 0x441ACE2D, 0x7CFB3784, 0x485331AC) }, 
        { FName("DefaultMarquee_Tiling_Local"), FGuid(0x2F8C2B65, 0x45B1F9F5, 0x1C8F53A4, 0xFD7D765B) }, 
        { FName("CustomMarqueeMaskTiling_Local"), FGuid(0x8347D088, 0x4C1FB7D7, 0xD391F7B8, 0x97805783) }, 
        { FName("BackgroundBlurStrength_Local"), FGuid(0x6D91868B, 0x41044DC0, 0xE6625281, 0x2D90E447) }, 
        { FName("TargetFillColor_Negative_Local"), FGuid(0xDF878774, 0x4637D932, 0x24D82695, 0x6189DF71) }, 
        { FName("FillColorGradientPower_Local"), FGuid(0xFCC665A4, 0x49309D33, 0x07FD02B1, 0x9D64F1A5) }, 
        { FName("BlendMask_Local"), FGuid(0x7496E573, 0x4AA63803, 0xCC1AB8A8, 0x95947E16) }, 
        { FName("OnPercentChanged"), FGuid(0x1468D2EF, 0x4E1C6838, 0x6669CA90, 0x7A1D1C18) }, 
        { FName("CurrentEffectWidget"), FGuid(0x2B6B7CA9, 0x49C08E60, 0xA60B09B6, 0x13D00134) }, 
        { FName("BackgroundBlurStrength"), FGuid(0x6277029F, 0x42C051A9, 0x4B6B21A9, 0x1EF45F37) }, 
        { FName("BackgroundThickness_Local"), FGuid(0xF2871FE7, 0x4237B936, 0xE08399A4, 0xCB1BEAB2) }, 
        { FName("Effects"), FGuid(0xA6E53E9E, 0x48DE4D0D, 0xDF375C8D, 0x306B6B03) }, 
        { FName("LocalSize"), FGuid(0x9AC2A7C1, 0x400D5B2B, 0x17541EA0, 0xC53B0719) }, 
        { FName("Separation_AbsoluteFillMethod"), FGuid(0x325B93D8, 0x46F27F99, 0x7B88A99F, 0x8270F4D3) }, 
        { FName("Separation_Steps_Spacing_Local"), FGuid(0xDF948E07, 0x45B061DA, 0xC3BF5FB3, 0x93BC67E4) }, 
        { FName("bIsSeparated"), FGuid(0x0B2E53DD, 0x462077D5, 0xFB61EAB8, 0x2F7FB7AA) }, 
        { FName("Separation_Steps_Spacing"), FGuid(0x045B5A59, 0x461C1B9E, 0x11EA6BB2, 0x76BDDFD6) }, 
        { FName("Separation_Steps_Local"), FGuid(0x074FFE29, 0x42848CAB, 0xC2E0BAB8, 0x11394CCC) }, 
        { FName("Separation_Steps"), FGuid(0xE2E90A7D, 0x42086A97, 0xCC4536A2, 0x25C95AA1) }, 
        { FName("DefaultMarquee_Tiling"), FGuid(0x1B319993, 0x403EE199, 0x3447B090, 0xAFD9E383) }, 
        { FName("DefaultMarquee_DrawAs_Local"), FGuid(0xD711F1DA, 0x4DDDA60B, 0x7A0CCCA5, 0xC304F28E) }, 
        { FName("DefaultMarquee_DrawAs"), FGuid(0x7F06695F, 0x414B440D, 0x1EC34F9A, 0x9041FDB4) }, 
        { FName("DefaultMarquee_Tint_Local"), FGuid(0x924CF5B8, 0x424E8271, 0x825C5A82, 0x954E0953) }, 
        { FName("DefaultMarquee_Tint"), FGuid(0x12817FBA, 0x4D1FADE6, 0xE43852BD, 0x4FEC535A) }, 
        { FName("DefaultMarquee_ImageSize_Local"), FGuid(0xD84BF088, 0x42A91502, 0x96AB50B5, 0x9029978F) }, 
        { FName("DefaultMarquee_ImageSize"), FGuid(0x90E77A5C, 0x47F3431A, 0x3836B29F, 0x5366A86D) }, 
        { FName("DefaultMarquee_Image_Local"), FGuid(0x388D51B4, 0x48B6E6D3, 0x237623A5, 0x693993B6) }, 
        { FName("DefaultMarquee_Image"), FGuid(0x9CDFC850, 0x456C7EFC, 0xDE9FBFB6, 0x9F02552E) }, 
        { FName("bUseDefaultMarquee_Local"), FGuid(0x76422EC9, 0x4934A7FE, 0xA7107B9D, 0xD068D64C) }, 
        { FName("bUseDefaultMarquee"), FGuid(0xC2CE7366, 0x437ED74C, 0x01B30F98, 0x8E84BB12) }, 
        { FName("CustomMarqueeMaskTiling"), FGuid(0xC3FC51F8, 0x4F263BBB, 0xFB80F3A1, 0x9C5D410C) }, 
        { FName("CustomMarqueeMask_Local"), FGuid(0x4968B821, 0x45A82444, 0x6259DCA0, 0x16F22C19) }, 
        { FName("CustomMarqueeMask"), FGuid(0xEB538EE9, 0x4E8E487A, 0x227E7582, 0x59BB1B90) }, 
        { FName("CustomMarqueeMaskType_Local"), FGuid(0xCA3B9B4E, 0x4277674F, 0x5C3435A3, 0x29C0D55B) }, 
        { FName("CustomMarqueeMaskType"), FGuid(0x40449E1F, 0x40DA3AC8, 0x72880C82, 0x2DCE950F) }, 
        { FName("CustomMarqueeTint_Local"), FGuid(0xB51818EA, 0x4415F294, 0x0A95C9B4, 0xF5DF5E95) }, 
        { FName("CustomMarqueeTint"), FGuid(0xED09C94B, 0x43581F88, 0x32E127A7, 0x6D7E8AF9) }, 
        { FName("CustomMarqueeSpeed_Local"), FGuid(0x94196314, 0x4E46ECE6, 0x98FEF1A9, 0xF4E2FDC2) }, 
        { FName("CustomMarqueeSpeed"), FGuid(0xC6DEA38B, 0x4FB4D977, 0x9E8DDBA4, 0x9BFD04E2) }, 
        { FName("CustomMarqueeMethod_Local"), FGuid(0xA5393D75, 0x423ED343, 0x2ACBA5A9, 0xE98444E9) }, 
        { FName("CustomMarqueeMethod"), FGuid(0x11D9612A, 0x4DAAF6F8, 0x48D076BC, 0xCF902F82) }, 
        { FName("bUseCustomMarquee_Local"), FGuid(0x748AC197, 0x4A7116FC, 0x81C71696, 0x12251858) }, 
        { FName("bUseCustomMarquee"), FGuid(0x20534422, 0x47DCE64B, 0x191F9F99, 0x6A85D1DE) }, 
        { FName("BlendMask"), FGuid(0x4AB39FB6, 0x44E39ECC, 0xB71661AB, 0xB870B40E) }, 
        { FName("FillFromCenterSpacing_Local"), FGuid(0xE326323E, 0x4211F9EF, 0x857EDBAD, 0x13BACB25) }, 
        { FName("BackgroundThickness"), FGuid(0x1A7AA26E, 0x40D2DE2C, 0xC5BAD791, 0x05F91603) }, 
        { FName("BackgroundBrushTiling_Local"), FGuid(0x9923EF37, 0x4E3E7E09, 0x3B133980, 0x82C1FBDD) }, 
        { FName("BackgroundBrushTiling"), FGuid(0x4559C6F0, 0x4A5C50C8, 0x3F36BBBA, 0xBAD05FAB) }, 
        { FName("BackgroundMask_Local"), FGuid(0x28BF178B, 0x4DB86CE2, 0x8E0E85A0, 0x3701152D) }, 
        { FName("BackgroundMask"), FGuid(0xF559000E, 0x4F1F9042, 0xE42C33BF, 0xCF920BCF) }, 
        { FName("BackgroundTint_Local"), FGuid(0x900364D5, 0x4645A4A8, 0x5FA50DA2, 0xD15D44A3) }, 
        { FName("FillColorGradientPower"), FGuid(0xC5A421DA, 0x4A4CF2B3, 0x3C91869C, 0x670C87D1) }, 
        { FName("FillColorGradientType_Local"), FGuid(0x199D0CA8, 0x48AFAFCF, 0xCC8A05B0, 0xD95463CC) }, 
        { FName("FillColorGradientType"), FGuid(0x97B583D8, 0x402A632C, 0x44BDFCAE, 0x5E3D2574) }, 
        { FName("FillColorUseGradient_Local"), FGuid(0x4D031148, 0x45CB3FD7, 0x0F094987, 0x503D8AA2) }, 
        { FName("bIsDesignTime"), FGuid(0x64B28318, 0x413CB3CA, 0xF9E56E8C, 0xD58A1763) }, 
        { FName("CanSetPercent"), FGuid(0x32D5A2B9, 0x4C3ECB49, 0x871ACC9E, 0x5EC26E38) }, 
        { FName("CanSetTargetPercent"), FGuid(0x25044331, 0x49EBE4A2, 0x82EF95BD, 0x80BE6C9B) }, 
        { FName("OldTargetPercent"), FGuid(0x6A6E669B, 0x4E454B76, 0xF6A59286, 0xC060A8A6) }, 
        { FName("NewTargetPercent"), FGuid(0x698411D2, 0x46739A89, 0x1EC3B48F, 0x93DA33DD) }, 
        { FName("InterpValueTarget"), FGuid(0x0E4F8136, 0x46D81F22, 0x94052FBD, 0x6207F983) }, 
        { FName("OldPercent"), FGuid(0x7DE98B67, 0x4BE25236, 0xA3C8A6A9, 0xDE5CE008) }, 
        { FName("NewPercent"), FGuid(0x22E1A55D, 0x419ACE14, 0xE5492BAD, 0x7DC0BA84) }, 
        { FName("InterpValue"), FGuid(0xE14EF8F8, 0x45CE83C8, 0x0EA7CAB5, 0x0F9C1728) }, 
        { FName("DeltaTime"), FGuid(0xF72100C4, 0x49F5B69E, 0xCF159496, 0x6F3A1824) }, 
        { FName("Timer"), FGuid(0xC849F3F9, 0x416CBD0F, 0xA409EE9B, 0x6433A34A) }, 
        { FName("BackgroundTint"), FGuid(0xEBDE905A, 0x4E3CC009, 0x4E9AFBB2, 0x933E0C29) }, 
        { FName("TargetFillColor_Negative"), FGuid(0x2F56DAFF, 0x4751DCAB, 0x99032390, 0x7EE417C9) }, 
        { FName("TargetFillColor_Positive_Local"), FGuid(0xF567F2D1, 0x40218F42, 0xF43FC69A, 0x4033FB28) }, 
        { FName("TargetFillColor_Positive"), FGuid(0x73F8C7A4, 0x4D2DEE24, 0x9077DDB5, 0x85337ADE) }, 
        { FName("InterpTimeTarget_local"), FGuid(0x11FB39FF, 0x47EB50D7, 0x811D6E8A, 0x487B8C0B) }, 
        { FName("InterpTimeTarget"), FGuid(0x2D678A3B, 0x43A11251, 0x9227B884, 0x586F4D20) }, 
        { FName("TargetPercent_Local"), FGuid(0x26BA5A91, 0x436F310A, 0x8127F697, 0x09CEDD8E) }, 
        { FName("TargetPercent"), FGuid(0x0DFFCE47, 0x42496FA7, 0x595E7896, 0xC32D3151) }, 
        { FName("UseTargetPercent_Local"), FGuid(0xD31E635B, 0x4A8FE6EB, 0x078D9089, 0xE92C7ED0) }, 
        { FName("UseTargetPercent"), FGuid(0xDE540F2F, 0x46CB0D94, 0x3D3A20BC, 0xE98BF20A) }, 
        { FName("FillColorUseGradient"), FGuid(0x47B044FF, 0x467D9838, 0xC10FD28B, 0xA9297967) }, 
        { FName("FillColorBrushTiling_Local"), FGuid(0x528A64FE, 0x47046084, 0xA3788BA6, 0x18DC4BC0) }, 
        { FName("FillColorBrushTiling"), FGuid(0xCB494D49, 0x4508DF5B, 0x77E6798C, 0x64FB08AB) }, 
        { FName("FillColorMask_Local"), FGuid(0x971F128A, 0x4775C99F, 0xB93E4685, 0x9D3362CF) }, 
        { FName("FillColorMask"), FGuid(0x77A03C3B, 0x4E8C62ED, 0x329E1CAF, 0x623A7C05) }, 
        { FName("FillColorCurrent_Local"), FGuid(0x8EBD36A2, 0x4B698966, 0xFE0AB2BD, 0x54752B3D) }, 
        { FName("FillColorCurrent"), FGuid(0x8415B7AB, 0x4D63E1EF, 0x7E12B094, 0x2310FFF8) }, 
        { FName("InterpTimeCurrent_Local"), FGuid(0x1316AAA8, 0x4ACDAED1, 0xB9B076A7, 0x2E1B8B20) }, 
        { FName("InterpTimeCurrent"), FGuid(0xF9845727, 0x48D0F0E2, 0x30D8D48D, 0xB6D30D1D) }, 
        { FName("CurrentPercent_Local"), FGuid(0xDC242A40, 0x47245EDA, 0xDFA27094, 0x749BE64A) }, 
        { FName("CurrentPercent"), FGuid(0xFBDE9890, 0x4C492F21, 0x9A43268B, 0x250DEE97) }, 
        { FName("FillFromCenterSpacing"), FGuid(0x3A0D3451, 0x461BB855, 0x8CCC9CBF, 0xA364F291) }, 
        { FName("FillType_Local"), FGuid(0x1866D492, 0x4E6D4DB9, 0x482DBDA1, 0x33D007AA) }, 
        { FName("FillType"), FGuid(0xD315EB0C, 0x46944B1E, 0x6AD4DEB9, 0xEBA6AC70) }, 
        { FName("QueueDelay_Local"), FGuid(0x4299FB87, 0x47C5DA53, 0x768E0289, 0x6BCF19F6) }, 
        { FName("QueueDelay"), FGuid(0x70B6B3E4, 0x4069D3EB, 0x98CADFB7, 0x32AA2986) }, 
        { FName("ProgressMethod_Local"), FGuid(0x145C5548, 0x496E6F8E, 0xDBD11081, 0x3A5443B6) }, 
        { FName("ProgressMethod"), FGuid(0xD3F01567, 0x46E3A6DC, 0xF2D61997, 0xF5184DE3) }, 
        { FName("Size_Local"), FGuid(0xEFD65E18, 0x495EAD1D, 0xAA53DC99, 0x2168C60B) }, 
        { FName("Size"), FGuid(0xFD3146D0, 0x41672EA8, 0xB3731694, 0x788ECD6D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D Size = FVector2D(512, 32);
    struct FVector2D Size_Local = FVector2D(0, 0);
    enum EProgressMethod ProgressMethod = EProgressMethod::NewEnumerator1;
    enum EProgressMethod ProgressMethod_Local = EProgressMethod::NewEnumerator1;
    double QueueDelay = 0.20000000298023224;
    double QueueDelay_Local = 0.20000000298023224;
    double FillFromCenterSpacing = 0.10000000149011612;
    double CurrentPercent = 0.5;
    double CurrentPercent_Local = 0.5;
    double InterpTimeCurrent = 1;
    double InterpTimeCurrent_Local = 1;
    struct FLinearColor FillColorCurrent = FLinearColor(1, 1, 1, 1);
    struct FLinearColor FillColorCurrent_Local = FLinearColor(1, 1, 1, 1);
    enum ESlateBrushTileType FillColorBrushTiling = ESlateBrushTileType::Both;
    enum ESlateBrushTileType FillColorBrushTiling_Local = ESlateBrushTileType::Both;
    double TargetPercent = 0.5;
    double TargetPercent_Local = 0.5;
    double InterpTimeTarget = 0.10000000149011612;
    double InterpTimeTarget_local = 0.10000000149011612;
    struct FLinearColor TargetFillColor_Positive = FLinearColor(1, 1, 1, 0,5);
    struct FLinearColor TargetFillColor_Positive_Local = FLinearColor(1, 1, 1, 0,5);
    struct FLinearColor TargetFillColor_Negative = FLinearColor(0, 0, 0, 0,5);
    struct FLinearColor BackgroundTint = FLinearColor(1, 1, 1, 0,25);
    struct FTimerHandle Timer = {
        "Handle": 0
    };
    double DeltaTime = 0.0010000000474974513;
    enum EGradientTypes FillColorGradientType = EGradientTypes::NewEnumerator1;
    enum EGradientTypes FillColorGradientType_Local = EGradientTypes::NewEnumerator1;
    double FillColorGradientPower = 0.5;
    struct FLinearColor BackgroundTint_Local = FLinearColor(1, 1, 1, 0,25);
    double FillFromCenterSpacing_Local = 0.10000000149011612;
    double CustomMarqueeSpeed = 0.25;
    double CustomMarqueeSpeed_Local = 0.25;
    struct FLinearColor CustomMarqueeTint = FLinearColor(1, 1, 1, 1);
    struct FLinearColor CustomMarqueeTint_Local = FLinearColor(1, 1, 1, 1);
    enum EMarqueeMask CustomMarqueeMaskType = EMarqueeMask::NewEnumerator2;
    enum EMarqueeMask CustomMarqueeMaskType_Local = EMarqueeMask::NewEnumerator2;
    enum ESlateBrushTileType CustomMarqueeMaskTiling = ESlateBrushTileType::Both;
    struct FVector2D DefaultMarquee_ImageSize = FVector2D(20, 12);
    struct FVector2D DefaultMarquee_ImageSize_Local = FVector2D(20, 12);
    struct FLinearColor DefaultMarquee_Tint = FLinearColor(1, 1, 1, 1);
    struct FLinearColor DefaultMarquee_Tint_Local = FLinearColor(1, 1, 1, 1);
    enum ESlateBrushDrawType DefaultMarquee_DrawAs = ESlateBrushDrawType::Image;
    enum ESlateBrushDrawType DefaultMarquee_DrawAs_Local = ESlateBrushDrawType::Image;
    enum ESlateBrushTileType DefaultMarquee_Tiling = ESlateBrushTileType::Horizontal;
    int32 Separation_Steps = 1;
    int32 Separation_Steps_Local = 1;
    double Separation_Steps_Spacing = 0.25;
    double Separation_Steps_Spacing_Local = 0.25;
    struct FVector2D LocalSize = FVector2D(0, 0);
     OnPercentChanged = ;
    double FillColorGradientPower_Local = 0.5;
    struct FLinearColor TargetFillColor_Negative_Local = FLinearColor(0, 0, 0, 0,5);
    enum ESlateBrushTileType CustomMarqueeMaskTiling_Local = ESlateBrushTileType::Both;
    enum ESlateBrushTileType DefaultMarquee_Tiling_Local = ESlateBrushTileType::Horizontal;
    bool bHasScriptImplementedTick = true;
    bool bIsVolatile = true;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UWidgetSwitcher* WS_FillType_PB;
    class UWidgetSwitcher* WS_FillType_BG;
    class UWidgetSwitcher* WS_Effects_Foreground_FillType;
    class UWidgetSwitcher* WS_Effects_Background_FillType;
    class USizeBox* SB_Content;
    class USizeBox* SB_Container;
    class USizeBox* SB_BG_Brush_Right;
    class USizeBox* SB_BG_Brush_Left;
    class USizeBox* SB_Background;
    class UWB_Container_Linear_C* Right;
    class URetainerBox* RB_BlendMask;
    class UOverlay* OV_ProgressBar;
    class UOverlay* OV_Effects_Foreground;
    class UOverlay* OV_Effects_Background;
    class UOverlay* OV_Effect_FG_Right;
    class UOverlay* OV_Effect_FG_Left;
    class UOverlay* OV_Effect_BG_Right;
    class UOverlay* OV_Effect_BG_Left;
    class UWB_Container_Linear_C* Left;
    class UHorizontalBox* HB_PB_FillFromCenter;
    class UHorizontalBox* HB_Effects_Foreground;
    class UHorizontalBox* HB_Effects_Background;
    class UHorizontalBox* HB_BG_FillFromCenter;
    class UBackgroundBlur* DefaultBlur;
    class UWB_Container_Linear_C* Container;
    class UBackgroundBlur* BlurRight;
    class UBackgroundBlur* BlurLeft;
    class UBorder* BG_Brush_Right;
    class UBorder* BG_Brush_Left;
    class UBorder* BackgroundBrush;
    class UBorder* B_Content;
    byte FillType;
    byte FillType_Local;
    class UObject* FillColorMask;
    class UObject* FillColorMask_Local;
    bool FillColorUseGradient;
    bool UseTargetPercent;
    bool UseTargetPercent_Local;
    double InterpValue;
    double NewPercent;
    double OldPercent;
    double InterpValueTarget;
    double NewTargetPercent;
    double OldTargetPercent;
    bool CanSetTargetPercent;
    bool CanSetPercent;
    bool bIsDesignTime;
    bool FillColorUseGradient_Local;
    class UTexture2D* BackgroundMask;
    class UTexture2D* BackgroundMask_Local;
    byte BackgroundBrushTiling;
    byte BackgroundBrushTiling_Local;
    double BackgroundThickness;
    class UTexture2D* BlendMask;
    bool bUseCustomMarquee;
    bool bUseCustomMarquee_Local;
    EMarqueeMethod CustomMarqueeMethod;
    EMarqueeMethod CustomMarqueeMethod_Local;
    class UTexture2D* CustomMarqueeMask;
    class UTexture2D* CustomMarqueeMask_Local;
    bool bUseDefaultMarquee;
    bool bUseDefaultMarquee_Local;
    class UTexture2D* DefaultMarquee_Image;
    class UTexture2D* DefaultMarquee_Image_Local;
    bool bIsSeparated;
    bool Separation_AbsoluteFillMethod;
    TArray<struct FS_Effects> Effects;
    double BackgroundThickness_Local;
    double BackgroundBlurStrength;
    class UWB_Effect_C* CurrentEffectWidget;
    class UTexture2D* BlendMask_Local;
    double BackgroundBlurStrength_Local;
    bool Separation_AbsoluteFillMethod_Local;
    TArray<struct FS_Effects> Effects_Local;
    TArray<double> Entries;
    bool bIsProgressRunning;
    bool PauseWithGamePause;
    bool PauseWithGamePause_Local;
    bool UseShaderProgressBar;
    bool UseShaderProgressBar_Local;

};