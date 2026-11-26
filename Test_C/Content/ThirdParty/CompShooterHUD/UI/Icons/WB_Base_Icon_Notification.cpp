class UWB_Base_Icon_Notification_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Icons/WB_Base_Icon_Notification.WB_Base_Icon_Notification_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Image"), FGuid(0x68A3ED3E, 0x4CECCD45, 0x22A61299, 0x94CC03D7) }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UImage* Image;
};