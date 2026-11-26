class UW_IRR_Setting_Selector_C : public UIRRBaseSettingSelectorWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/Settings/W_IRR_Setting_Selector.W_IRR_Setting_Selector_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("SelectorContainer"), FGuid(0xAD02F0CD, 0x4C8BE6D0, 0x701E19AC, 0xE0C98861) }
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UHorizontalBox* SelectorContainer;
};