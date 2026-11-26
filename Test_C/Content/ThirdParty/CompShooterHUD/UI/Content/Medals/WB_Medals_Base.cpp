class UWB_Medals_Base_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Medals/WB_Medals_Base.WB_Medals_Base_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Medals/WB_Medals_Base.WB_Medals_Base_C:Fade_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Medals/WB_Medals_Base.WB_Medals_Base_C:ExecuteUbergraph_WB_Medals_Base'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Timer"), FGuid(0x9E2FD935, 0x4E5ADFB3, 0x97D6FE99, 0xA6C26105) }, 
        { FName("DisplayTime"), FGuid(0x8EC73343, 0x474C2775, 0xD70DF7B6, 0xFF2C37CF) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FTimerHandle Timer = {
        "Handle": 0
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_MedalContent_C* WB_MedalContent;
    class UWB_Medal_Highlight_C* WB_Medal_Highlight;
    class UImage* ShineImage;
    class UOverlay* OV_Medal;
    class UOverlay* OV_Highlight;
    class UBorder* bHighlightColor;
    class UBorder* b_Shine;
    class UBorder* b_Medal;
    class UBorder* b_Highlight;
    class UWidgetAnimation* Fade;
    double DisplayTime;

};