class UWB_PB_Linear_Target_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/ProgressBars/WB_PB_Linear_Target.WB_PB_Linear_Target_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/ProgressBars/WB_PB_Linear_Target.WB_PB_Linear_Target_C:ExecuteUbergraph_WB_PB_Linear_Target'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UWB_PB_Raw_C* WB_PB_Raw;
    class UProgressBar* PB_Base;

};