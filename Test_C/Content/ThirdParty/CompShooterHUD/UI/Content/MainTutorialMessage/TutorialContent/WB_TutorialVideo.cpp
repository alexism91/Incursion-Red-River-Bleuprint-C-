class UWB_TutorialVideo_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/TutorialContent/WB_TutorialVideo.WB_TutorialVideo_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/TutorialContent/WB_TutorialVideo.WB_TutorialVideo_C:FadeVideo_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/TutorialContent/WB_TutorialVideo.WB_TutorialVideo_C:ExecuteUbergraph_WB_TutorialVideo'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("MediaPlayer"), FGuid(0xFEFA2A21, 0x4D714E8A, 0xDC96BA98, 0x7DBE9CDF) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Image_Video;
    class UImage* Image_Mask;
    class UWidgetAnimation* FadeVideo;
    class UMediaPlayer* MediaPlayer;

};