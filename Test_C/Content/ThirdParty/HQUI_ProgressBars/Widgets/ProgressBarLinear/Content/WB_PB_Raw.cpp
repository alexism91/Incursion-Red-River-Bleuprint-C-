class UWB_PB_Raw_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_PB_Raw.WB_PB_Raw_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_PB_Raw.WB_PB_Raw_C:ExecuteUbergraph_WB_PB_Raw'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    bool bIsVolatile = true;
    class UWB_BaseProgressBar_C* WB_BaseProgressBar;

};