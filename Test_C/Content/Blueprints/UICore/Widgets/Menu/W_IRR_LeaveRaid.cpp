class UW_IRR_LeaveRaid_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Menu/W_IRR_LeaveRaid.W_IRR_LeaveRaid_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnButtonClicked"), FGuid(0x4D655CD3, 0x4A5A9C5D, 0x74FA6AA2, 0x9639830E) }
    };
     OnButtonClicked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* IRRTextBlock_1;

};