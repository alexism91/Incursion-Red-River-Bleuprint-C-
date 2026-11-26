class UWB_MedalContent_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Medals/WB_MedalContent.WB_MedalContent_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/Medals/WB_MedalContent.WB_MedalContent_C:ExecuteUbergraph_WB_MedalContent'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* Text_Value;
    class UTextBlock* Text_Medal;
    class UOverlay* OV_Medal;
    class UOverlay* OV_Content;

};