class UWB_BeginPlayScreen_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/Gameloop/Menu/Widgets/WB_BeginPlayScreen.WB_BeginPlayScreen_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/Gameloop/Menu/Widgets/WB_BeginPlayScreen.WB_BeginPlayScreen_C:BeginPlayAnim_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/Gameloop/Menu/Widgets/WB_BeginPlayScreen.WB_BeginPlayScreen_C:PressAnyKeyAnim_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/Gameloop/Menu/Widgets/WB_BeginPlayScreen.WB_BeginPlayScreen_C:UnrealAnim_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/Menu/Widgets/WB_BeginPlayScreen.WB_BeginPlayScreen_C:ExecuteUbergraph_WB_BeginPlayScreen'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Media"), FGuid(0x9E301157, 0x4BB7F307, 0x6BC8DE8B, 0x0344B72D) }, 
        { FName("BeginPlayEnd"), FGuid(0xCBC30EAB, 0x4E37B927, 0xB2060881, 0x2B53A9C6) }, 
        { FName("Countdown_TimerHandle"), FGuid(0x9439B25A, 0x4E5BDFE5, 0xD5E8029E, 0x93F8B4AA) }, 
        { FName("CurrentCountdown"), FGuid(0x6C15AAF4, 0x4FC5A746, 0x136C70AA, 0x6D430B16) }, 
        { FName("BeginPlayContentDurations"), FGuid(0xA3C6F5E3, 0x4E2DB2C3, 0x9982B9A3, 0x47CCAB00) }, 
        { FName("UnrealAnim"), FGuid(0x96BFFFAA, 0x425B8FA4, 0x6C920BBD, 0x43D493E4) }, 
        { FName("PressAnyKeyAnim"), FGuid(0x013C4B92, 0x61603F16, 0xB8F79D33, 0x32955521) }, 
        { FName("BeginPlayAnim"), FGuid(0x47292743, 0x48EC3E27, 0x82A488A3, 0xE40D5D66) }, 
        { FName("BackgroundVideo"), FGuid(0x40288F7A, 0x32D23CCB, 0x98814F95, 0x2D35C3C9) }, 
        { FName("BeginPlayContentSwitcher"), FGuid(0xDDFD705A, 0xC1AF31AA, 0x880F1369, 0x691936E9) }, 
        { FName("BuildText"), FGuid(0x9A8E2525, 0x1B0734A3, 0x8066B859, 0x5FCF36E9) }, 
        { FName("Content"), FGuid(0xCEBC788E, 0xEF8E3147, 0xAC3BF5CF, 0xF20ABA39) }, 
        { FName("Image"), FGuid(0xB00FDB93, 0x495C15CD, 0xBEFD50B6, 0xBE3B5BA2) }, 
        { FName("Image_1"), FGuid(0xC456025D, 0x4E3486DD, 0x25C240AB, 0xFF419D4C) }, 
        { FName("Image_36"), FGuid(0xF8C8F9F6, 0x4C08EAA5, 0x853B049E, 0xB4DF1A14) }, 
        { FName("Image_85"), FGuid(0x447900C3, 0x42CC5C92, 0x8060DD8D, 0x68C9E410) }, 
        { FName("Image_135"), FGuid(0xBA4F25ED, 0xFF4D3FBA, 0xB0F815B0, 0x04194C55) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    TArray<double> BeginPlayContentDurations = {
        1,
        5
    };
    struct FTimerHandle Countdown_TimerHandle = {
        "Handle": 0
    };
    class UMediaPlayer* Media = "MediaPlayer'Test_C/Content/Movies/MP_Intro.MP_Intro'";
    bool bHasScriptImplementedPaint = false;
    class UImage* Image_135;
    class UImage* Image_85;
    class UImage* Image_36;
    class UImage* Image_1;
    class UImage* Image;
    class UOverlay* Content;
    class UIRRTextBlock* BuildText;
    class UWidgetSwitcher* BeginPlayContentSwitcher;
    class UImage* BackgroundVideo;
    class UWidgetAnimation* BeginPlayAnim;
    class UWidgetAnimation* PressAnyKeyAnim;
    class UWidgetAnimation* UnrealAnim;
    double CurrentCountdown;
    bool BeginPlayEnd;

};