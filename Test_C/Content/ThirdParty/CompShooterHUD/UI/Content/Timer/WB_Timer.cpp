class UWB_Timer_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Timer/WB_Timer.WB_Timer_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Timer/WB_Timer.WB_Timer_C:XtraTimeAnim_INST'",
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Timer/WB_Timer.WB_Timer_C:HighlightAnim_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Timer/WB_Timer.WB_Timer_C:ExecuteUbergraph_WB_Timer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Color"), FGuid(0x1CFC2A18, 0x441181E1, 0x2C536CB5, 0x857DE4CD) }, 
        { FName("ExtraSeconds"), FGuid(0xA605A180, 0x4239056F, 0xF7841191, 0x227F0B45) }, 
        { FName("HasExtraTime"), FGuid(0x5CCF7374, 0x422A5DBB, 0x9D44E591, 0xBE3B94D5) }, 
        { FName("Overall_Seconds"), FGuid(0x791A1832, 0x4DFF975F, 0x9E305D81, 0xF90672A0) }, 
        { FName("Overall_Minutes"), FGuid(0x2BA3DE96, 0x49F83207, 0x5F3B01A9, 0x3AA00798) }, 
        { FName("Seconds"), FGuid(0xB57377B2, 0x4A064B87, 0xCC381CA3, 0x7FD5FEE6) }, 
        { FName("Minutes"), FGuid(0xB5978B1D, 0x4CA20C95, 0x0F04AD9B, 0x904D7B58) }, 
        { FName("TimerHandle"), FGuid(0xFF2DCCEC, 0x4CF613AF, 0x051699B5, 0x7305928E) }, 
        { FName("ETimerMode"), FGuid(0x7DF621E3, 0x4803389D, 0x1989D9AA, 0x3EA42EC8) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FTimerHandle TimerHandle = {
        "Handle": 0
    };
    struct FLinearColor Color = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_Timer_ProgressBar_C* WB_Timer_ProgressBar;
    class UTextBlock* Text_Seconds;
    class UTextBlock* Text_Points;
    class UTextBlock* Text_Minutes;
    class UTextBlock* Text_ExtraTime;
    class UTextBlock* Text_ExtraPlus;
    class UOverlay* OV_Content;
    class UImage* Image_1;
    class UImage* Image_0;
    class UBorder* b_Timer;
    class UBorder* b_HighlightColor;
    class UBorder* b_ExtraTime;
    class UWidgetAnimation* XtraTimeAnim;
    class UWidgetAnimation* HighlightAnim;
    E_TimerMode ETimerMode;
    int Minutes;
    int Seconds;
    int Overall_Minutes;
    int Overall_Seconds;
    bool HasExtraTime;
    int ExtraSeconds;

};