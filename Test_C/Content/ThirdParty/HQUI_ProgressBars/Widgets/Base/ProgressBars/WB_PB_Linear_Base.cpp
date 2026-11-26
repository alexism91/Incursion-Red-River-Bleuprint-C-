class UWB_PB_Linear_Base_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/ProgressBars/WB_PB_Linear_Base.WB_PB_Linear_Base_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/HQUI_ProgressBars/Widgets/Base/ProgressBars/WB_PB_Linear_Base.WB_PB_Linear_Base_C:ExecuteUbergraph_WB_PB_Linear_Base'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("bIsChanging"), FGuid(0x12795AB5, 0x4196E096, 0xA103EE80, 0x9ED46FA3) }, 
        { FName("ProgressChangeColor"), FGuid(0xB3CB35AA, 0x43A641FE, 0x52A9A3A1, 0xE27C3BE9) }, 
        { FName("GradientColor"), FGuid(0xDDA3DEF2, 0x41242579, 0x43C91684, 0xFF7D3305) }, 
        { FName("FillColor"), FGuid(0x1607A109, 0x4BA35048, 0x5B535C8B, 0xB90156B0) }, 
        { FName("Size"), FGuid(0x31BBCE46, 0x4BA8029E, 0x27F5BE9B, 0xD7EB385F) }, 
        { FName("bIsDesignTime"), FGuid(0x4FA5E323, 0x4CF2F8D6, 0x68280A82, 0x8982B381) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FVector2D Size = FVector2D(0, 0);
    struct FLinearColor FillColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor GradientColor = FLinearColor(0, 0, 0, 0);
    struct FLinearColor ProgressChangeColor = FLinearColor(0, 0, 0, 0);
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    enum Visibility = ESlateVisibility::HitTestInvisible;
    class URetainerBox* RB_Gradient;
    class UOverlay* OV_DesignTimeGradient;
    class UWB_BaseProgressBar_C* GradientPB;
    class UImage* DesignTimeGradient;
    class UWB_BaseProgressBar_C* BasePB;
    bool bIsDesignTime;
    bool bIsChanging;

};