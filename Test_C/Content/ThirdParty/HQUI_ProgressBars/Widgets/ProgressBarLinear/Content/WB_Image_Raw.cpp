class UWB_Image_Raw_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Image_Raw.WB_Image_Raw_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Image_Raw.WB_Image_Raw_C:ExecuteUbergraph_WB_Image_Raw'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    bool bIsVolatile = true;
    class UImage* Naked_Image;
    class UBackgroundBlur* Blur;

};