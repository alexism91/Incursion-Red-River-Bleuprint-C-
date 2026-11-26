class UWB_KillMessage_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/WB_KillMessage.WB_KillMessage_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Kill_Message/WB_KillMessage.WB_KillMessage_C:ExecuteUbergraph_WB_KillMessage'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_Message2_C* WB_Message2;
    class UOverlay* OV_Content;

};