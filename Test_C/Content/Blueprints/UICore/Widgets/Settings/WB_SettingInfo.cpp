class UWB_SettingInfo_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SettingInfo.WB_SettingInfo_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SettingInfo.WB_SettingInfo_C:ContentAnim_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/Settings/WB_SettingInfo.WB_SettingInfo_C:ExecuteUbergraph_WB_SettingInfo'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Setting Ref"), FGuid(0x81CFE7EE, 0x4A7620CE, 0xAF5B4B94, 0x2A2E88E8) }, 
        { FName("Info"), FGuid(0x4AAA06F1, 0x415A3984, 0x283D9F97, 0x38E1A010) }, 
        { FName("IsInfoBoxVisible"), FGuid(0x6D09DFF0, 0x45EF6A22, 0x73B25D93, 0x578406CD) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FIRRSettingDescriptor Info = {
        "OverrideTitle": FText(""),
        "DescriptionRichText": FText("Turns voice chat ON/OFF.<Strong>On</>: You can hear your teammates and can also talk to them by using a microphone.<Strong>OFF</>: You cannot hear or talk to your teammates."),
        "WarningRichText": FText("Virtual Shadow Maps can be very performance heavy, if you notice any performance problems, try to turn it off."),
        "Extension": nullptr,
        "bVisible": false
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_ErrorMessage_C* W_IRR_ErrorMessage;
    class UW_IRR_Background_C* W_IRR_Background;
    class UIRRTextBlock* HeadlineText;
    class UOverlay* ExtensionContainer;
    class URichTextBlock* DescriptionRichText;
    class UOverlay* Content;
    class UWidgetAnimation* ContentAnim;
    bool IsInfoBoxVisible;
    class UWB_SingleSettingBar_C* Setting Ref;

};