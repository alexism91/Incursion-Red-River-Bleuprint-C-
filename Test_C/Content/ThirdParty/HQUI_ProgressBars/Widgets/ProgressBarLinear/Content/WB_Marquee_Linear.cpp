class UWB_Marquee_Linear_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Marquee_Linear.WB_Marquee_Linear_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/ProgressBarLinear/Content/WB_Marquee_Linear.WB_Marquee_Linear_C:ExecuteUbergraph_WB_Marquee_Linear'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Size"), FGuid(0x20A1C52F, 0x47DFABC5, 0xB02B6386, 0x2C52359A) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D Size = FVector2D(0, 0);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class USizeBox* SB_Marquee;
    class UImage* Marquee;

};