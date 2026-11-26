class UW_MainMenuBackground_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/Gameloop/Menu/Widgets/W_MainMenuBackground.W_MainMenuBackground_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/Gameloop/Menu/Widgets/W_MainMenuBackground.W_MainMenuBackground_C:FadeIn_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/Menu/Widgets/W_MainMenuBackground.W_MainMenuBackground_C:ExecuteUbergraph_W_MainMenuBackground'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Media"), FGuid(0x5488A7E3, 0x4819D728, 0xB95ECD92, 0x7C3A210B) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UMediaPlayer* Media = "MediaPlayer'Test_C/Content/Movies/MP_Background.MP_Background'";
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* BackgroundVideo;
    class UWidgetAnimation* FadeIn;

};