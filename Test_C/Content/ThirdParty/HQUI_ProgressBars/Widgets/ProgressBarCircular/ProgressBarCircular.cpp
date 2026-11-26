class UProgressBarCircular_C : public UWB_Base_C
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarCircular/ProgressBarCircular.ProgressBarCircular_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarCircular/ProgressBarCircular.ProgressBarCircular_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarCircular/ProgressBarCircular.ProgressBarCircular_C:ExecuteUbergraph_ProgressBarCircular'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("PauseWithGamePause"), FGuid(0xE280F371, 0x490A049C, 0xE1F1B0AC, 0x20FC4311) }, 
        { FName("bIsProgressRunning"), FGuid(0xAE08AD15, 0x4C5E8ACF, 0x97226D92, 0xF149F053) }, 
        { FName("Entries"), FGuid(0xCBF35D57, 0x4B411FDB, 0xE9861DAE, 0x42EFDFAF) }, 
        { FName("Timer"), FGuid(0x62FBFF6A, 0x4259C7A1, 0x94DB61B2, 0x8905622C) }, 
        { FName("CustomMarqueeMask"), FGuid(0x2CEECD31, 0x441A5438, 0x3B5028A4, 0x7E87D403) }, 
        { FName("MarqueeMask"), FGuid(0x0766DC7E, 0x46ADD634, 0xB96BED98, 0x511DB33A) }, 
        { FName("MarqueeTime"), FGuid(0x449D175F, 0x4FB034D9, 0x7D7CA2B4, 0x85B7855B) }, 
        { FName("MarqueeColorBackground"), FGuid(0xAE47E42A, 0x405C84ED, 0x46B9C09A, 0x5A757C4C) }, 
        { FName("GradientOpacity"), FGuid(0x38421879, 0x4E49E10E, 0x20CF108A, 0x40C9DFEF) }, 
        { FName("OnPercentChanged"), FGuid(0x1468D2EF, 0x4E1C6838, 0x6669CA90, 0x7A1D1C18) }, 
        { FName("CurrentEffectWidget"), FGuid(0x2B6B7CA9, 0x49C08E60, 0xA60B09B6, 0x13D00134) }, 
        { FName("Effects"), FGuid(0xA6E53E9E, 0x48DE4D0D, 0xDF375C8D, 0x306B6B03) }, 
        { FName("LocalSize"), FGuid(0x9AC2A7C1, 0x400D5B2B, 0x17541EA0, 0xC53B0719) }, 
        { FName("Separation_AbsoluteFillMethod"), FGuid(0x325B93D8, 0x46F27F99, 0x7B88A99F, 0x8270F4D3) }, 
        { FName("bIsSeparated"), FGuid(0x0B2E53DD, 0x462077D5, 0xFB61EAB8, 0x2F7FB7AA) }, 
        { FName("Separation_Steps_Spacing"), FGuid(0x045B5A59, 0x461C1B9E, 0x11EA6BB2, 0x76BDDFD6) }, 
        { FName("Separation_Steps"), FGuid(0xE2E90A7D, 0x42086A97, 0xCC4536A2, 0x25C95AA1) }, 
        { FName("MarqueeColor"), FGuid(0x12817FBA, 0x4D1FADE6, 0xE43852BD, 0x4FEC535A) }, 
        { FName("bUseMarquee"), FGuid(0xC2CE7366, 0x437ED74C, 0x01B30F98, 0x8E84BB12) }, 
        { FName("StepDensity"), FGuid(0x5C066ACE, 0x4FDBFB98, 0x8B6682A0, 0xE15B16DF) }, 
        { FName("Density"), FGuid(0x394219FB, 0x4A485451, 0x49B02EBD, 0xE04427E0) }, 
        { FName("Thickness"), FGuid(0x015D57D0, 0x4A3EEA83, 0xE9A15DBF, 0x72BF2776) }, 
        { FName("BlendMask"), FGuid(0x4AB39FB6, 0x44E39ECC, 0xB71661AB, 0xB870B40E) }, 
        { FName("GradientColorVariation"), FGuid(0xC5A421DA, 0x4A4CF2B3, 0x3C91869C, 0x670C87D1) }, 
        { FName("GradientType"), FGuid(0x97B583D8, 0x402A632C, 0x44BDFCAE, 0x5E3D2574) }, 
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
        { FName("BackgroundMask"), FGuid(0xF559000E, 0x4F1F9042, 0xE42C33BF, 0xCF920BCF) }, 
        { FName("BackgroundColor"), FGuid(0xEBDE905A, 0x4E3CC009, 0x4E9AFBB2, 0x933E0C29) }, 
        { FName("TargetFillColor_Negative"), FGuid(0x2F56DAFF, 0x4751DCAB, 0x99032390, 0x7EE417C9) }, 
        { FName("TargetFillColor_Positive"), FGuid(0x73F8C7A4, 0x4D2DEE24, 0x9077DDB5, 0x85337ADE) }, 
        { FName("InterpTimeTarget"), FGuid(0x2D678A3B, 0x43A11251, 0x9227B884, 0x586F4D20) }, 
        { FName("TargetPercent"), FGuid(0x0DFFCE47, 0x42496FA7, 0x595E7896, 0xC32D3151) }, 
        { FName("UseTargetPercent"), FGuid(0xDE540F2F, 0x46CB0D94, 0x3D3A20BC, 0xE98BF20A) }, 
        { FName("UseGradient"), FGuid(0x47B044FF, 0x467D9838, 0xC10FD28B, 0xA9297967) }, 
        { FName("FillColorMask"), FGuid(0x77A03C3B, 0x4E8C62ED, 0x329E1CAF, 0x623A7C05) }, 
        { FName("FillColorCurrent"), FGuid(0x8415B7AB, 0x4D63E1EF, 0x7E12B094, 0x2310FFF8) }, 
        { FName("InterpTimeCurrent"), FGuid(0xF9845727, 0x48D0F0E2, 0x30D8D48D, 0xB6D30D1D) }, 
        { FName("CurrentPercent"), FGuid(0xFBDE9890, 0x4C492F21, 0x9A43268B, 0x250DEE97) }, 
        { FName("QueueDelay"), FGuid(0x70B6B3E4, 0x4069D3EB, 0x98CADFB7, 0x32AA2986) }, 
        { FName("ProgressMethod"), FGuid(0xD3F01567, 0x46E3A6DC, 0xF2D61997, 0xF5184DE3) }, 
        { FName("Size"), FGuid(0xFD3146D0, 0x41672EA8, 0xB3731694, 0x788ECD6D) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Size = 128;
    enum EProgressMethod ProgressMethod = EProgressMethod::NewEnumerator1;
    double QueueDelay = 0.20000000298023224;
    double CurrentPercent = 0.5;
    double InterpTimeCurrent = 1;
    struct FLinearColor FillColorCurrent = FLinearColor(1, 1, 1, 1);
    double TargetPercent = 0.5;
    double InterpTimeTarget = 0.10000000149011612;
    struct FLinearColor TargetFillColor_Positive = FLinearColor(1, 1, 1, 0,5);
    struct FLinearColor TargetFillColor_Negative = FLinearColor(0, 0, 0, 0,5);
    struct FLinearColor BackgroundColor = FLinearColor(1, 1, 1, 0,25);
    double DeltaTime = 0.009999999776482582;
    double GradientColorVariation = 0.20000000298023224;
    double Thickness = 0.10000000149011612;
    double Density = 1;
    double StepDensity = 1;
    struct FLinearColor MarqueeColor = FLinearColor(1, 1, 1, 0,8);
    int32 Separation_Steps = 1;
    double Separation_Steps_Spacing = 0.25;
    struct FVector2D LocalSize = FVector2D(0, 0);
     OnPercentChanged = ;
    double GradientOpacity = 0.75;
    struct FLinearColor MarqueeColorBackground = FLinearColor(1, 1, 1, 0,3);
    double MarqueeTime = 3;
    enum EMarqueeMask MarqueeMask = EMarqueeMask::NewEnumerator3;
    struct FTimerHandle Timer = {
        "Handle": 0
    };
    bool bHasScriptImplementedTick = true;
    bool bIsVolatile = true;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UWB_Container_Circular_C* WB_Container_Circular;
    class USizeBox* SB_Content;
    class URetainerBox* RB_BlendMask;
    class UOverlay* OV_Effects_Foreground;
    class UOverlay* OV_Effects_Background;
    class UBorder* B_Content;
    class UWidgetAnimation* Fade;
    class UTexture2D* FillColorMask;
    bool UseGradient;
    bool UseTargetPercent;
    class UTexture2D* BackgroundMask;
    double InterpValue;
    double NewPercent;
    double OldPercent;
    double InterpValueTarget;
    double NewTargetPercent;
    double OldTargetPercent;
    bool CanSetTargetPercent;
    bool CanSetPercent;
    bool bIsDesignTime;
    EGradientTypes GradientType;
    class UTexture2D* BlendMask;
    bool bUseMarquee;
    bool bIsSeparated;
    bool Separation_AbsoluteFillMethod;
    TArray<struct FS_Effects> Effects;
    class UWB_Effect_C* CurrentEffectWidget;
    class UTexture2D* CustomMarqueeMask;
    TArray<double> Entries;
    bool bIsProgressRunning;
    bool PauseWithGamePause;

};