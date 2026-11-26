class UWB_MainTutorialMessage_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/WB_MainTutorialMessage.WB_MainTutorialMessage_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/WB_MainTutorialMessage.WB_MainTutorialMessage_C:FadeBackgroundBlur_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/MainTutorialMessage/WB_MainTutorialMessage.WB_MainTutorialMessage_C:ExecuteUbergraph_WB_MainTutorialMessage'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Blur"), FGuid(0xD7AC6B2A, 0x45477184, 0x6C142F8F, 0x09B80544) }, 
        { FName("MainTutorialWindow"), FGuid(0x9BC8DB5E, 0x423DE5A5, 0x6454A3B0, 0xB68E503D) }, 
        { FName("RemoveMainTutorialMessage"), FGuid(0x27464BF5, 0x40ED2F81, 0xF62D32AC, 0x8498F0E4) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     RemoveMainTutorialMessage = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UOverlay* OV_TutorialWindow;
    class UWidgetAnimation* FadeBackgroundBlur;
    class UWB_MainTutorialWindow_C* MainTutorialWindow;
    bool Blur;

};