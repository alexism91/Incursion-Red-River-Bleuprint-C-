class UWB_Base_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/WB_Base.WB_Base_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/WB_Base.WB_Base_C:ExecuteUbergraph_WB_Base'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;

};