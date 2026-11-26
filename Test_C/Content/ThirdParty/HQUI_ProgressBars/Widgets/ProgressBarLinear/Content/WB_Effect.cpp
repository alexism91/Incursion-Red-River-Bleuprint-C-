class UWB_Effect_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Effect.WB_Effect_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Effect.WB_Effect_C:FadeIn_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Effect.WB_Effect_C:FadeHighlight1_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Effect.WB_Effect_C:FadeHighlight2_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Effect.WB_Effect_C:HighlightLoop_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Effect.WB_Effect_C:ExecuteUbergraph_WB_Effect'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("StopProgressChangeColor"), FGuid(0x947C82E5, 0x452BB71E, 0xCA3CBAB3, 0x52EBAA65) }, 
        { FName("StartProgressChangeColor"), FGuid(0xD42CEF9C, 0x4784B11A, 0xB5CAC086, 0xB3FBD635) }, 
        { FName("EffectActive"), FGuid(0xB7F7308B, 0x4644AFD1, 0x9201598B, 0x1A0E29A3) }, 
        { FName("UIAudio"), FGuid(0x908E8CF1, 0x47A1C31D, 0x7445C099, 0x6AAF1FBC) }, 
        { FName("IsActive"), FGuid(0xE0E9C307, 0x4F531D99, 0x56C1C299, 0xA40968CD) }, 
        { FName("bIsDesignTime"), FGuid(0x58815707, 0x4415CF66, 0xE0154E85, 0x402758ED) }, 
        { FName("LastPercent"), FGuid(0x55FA58FE, 0x4E6B81D1, 0x3DD043BF, 0x933E698A) }, 
        { FName("Size"), FGuid(0xAB192F00, 0x4E95C5BC, 0x344B69B1, 0x544F4AA3) }, 
        { FName("Effect"), FGuid(0xB494DDBA, 0x42110BDE, 0x069E8FBF, 0xB630E291) }, 
        { FName("CurrentPercent"), FGuid(0xCB179D6F, 0x48A1B30A, 0xD2C1859C, 0x210749E3) }, 
        { FName("FillType"), FGuid(0xC48C25E1, 0x453B607D, 0x48289B92, 0x92E93635) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FS_Effects Effect = {
        "IsEnabled_18_5F5859E6449CA2118889C29B812D8161": true,
        "TriggerMethod_50_78811DED4A74E896F3726B82ADFE2980": ETriggerMethod::NewEnumerator8,
        "SpecificPercentValue_13_5C754BFC45B9763D27A6A9AB9187390F": 0.5,
        "EffectScale_61_63D82B6D464CD3CCEC1B078074C08549": FVector2D(1, 1),
        "EffectTranslation_62_B2FC126540FD38111139ECA600383ADB": FVector2D(0, 0),
        "EffectShear_60_AAC8D1A74D4F67E95F82FE9EB0D3581A": FVector2D(0, 0),
        "EffectAngle_67_9654D26045ED5561CC56AC9DF3981F59": 0,
        "EffectLayer_22_3309B47F49D95F295EC24789EAAF4815": EEffectLayer::NewEnumerator1,
        "EffectType_78_DA737BD8465723F56B6C5DAFC5F147B5": EEffectType::NewEnumerator0,
        "NumParticles_70_F3941F714B9C03FD09B052B91754A004": 0,
        "CustomEffectTexture_37_071362A64918FCBA33D4FF85BB9ABA70": nullptr,
        "EffectColor_49_B8696A40425D278129557CB171157594": FLinearColor(1, 1, 1, 0,5),
        "PlaybackSpeed_63_895E2BF0490600F327E6D3A40CD1FF43": 1,
        "ParticleSpread_77_91AAD9984A826CA627C0E894AAE3D287": 1,
        "AddRotationtoParticles_76_244A1C394C00164B10A2AB9E13ED2914": false,
        "SoundEffect_81_D5F6F19D40A0B92BB0598E8C416B50E0": nullptr,
        "SoundVolumeMultiplier_85_6B4801114C18FDBC28D92AABF034AFE0": 1,
        "DecayTime_88_B89D47A944D4AEE43F918889E359E9D2": 0.4,
        "UseStretchedParticle_90_1C1A4D3543806DE1B5BD93909DA565BB": false
    };
    struct FVector2D Size = FVector2D(0, 0);
    bool IsActive = true;
     StartProgressChangeColor = ;
     StopProgressChangeColor = ;
    bool bHasScriptImplementedPaint = false;
    bool bIsVolatile = true;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UWidgetSwitcher* WS_EffectTextureType;
    class USizeBox* SB_Particle;
    class USizeBox* SB_Content;
    class UOverlay* OV_Stretched_Scale;
    class UOverlay* OV_Punctiform_Scale;
    class UOverlay* OV_Punctiform;
    class UOverlay* OV_Particle_Container;
    class UOverlay* OV_Particle;
    class UImage* ImageStretched;
    class UImage* ImagePunctiform;
    class UBorder* B_Stretched;
    class UBorder* B_SoundEffect;
    class UBorder* B_Punctiform;
    class UBorder* B_Particle;
    class UBorder* b_HighlightLoop;
    class UBorder* b_Content;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeHighlight1;
    class UWidgetAnimation* FadeHighlight2;
    class UWidgetAnimation* HighlightLoop;
    byte FillType;
    double CurrentPercent;
    double LastPercent;
    bool bIsDesignTime;
    class UAudioComponent* UIAudio;
    bool EffectActive;

};