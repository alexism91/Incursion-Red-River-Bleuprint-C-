class UW_IRR_Notification_Standard_C : public UIRRNotificationWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Misc/Notifications/W_IRR_Notification_Standard.W_IRR_Notification_Standard_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Misc/Notifications/W_IRR_Notification_Standard.W_IRR_Notification_Standard_C:FadeIn_INST'",
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Misc/Notifications/W_IRR_Notification_Standard.W_IRR_Notification_Standard_C:FadeOut_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Misc/Notifications/W_IRR_Notification_Standard.W_IRR_Notification_Standard_C:ExecuteUbergraph_W_IRR_Notification_Standard'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnButtonClicked"), FGuid(0x2D18474D, 0x41105121, 0x2C6F61B3, 0x9D8734B9) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnButtonClicked = ;
    FText NotificationText = FText("Connecting To Party");
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class UWidgetSwitcher* WidgetSwitcher_0;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UW_IRR_Background_GridAndBlur_C* W_IRR_Background_GridAndBlur;
    class USpacer* Spacer_114;
    class UIRRTextBlock* IRRTextBlock_1;
    class UImage* Image_70;
    class UBP_IRRScaledSizedBox_C* BP_IRRScaledSizedBox_C_0;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;

};