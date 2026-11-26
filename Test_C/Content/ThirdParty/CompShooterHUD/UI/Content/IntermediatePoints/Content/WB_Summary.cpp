class UWB_Summary_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/IntermediatePoints/Content/WB_Summary.WB_Summary_C:WidgetTree'";
    TArray<class UWidgetAnimation*> Animations = {
        "WidgetAnimation'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/IntermediatePoints/Content/WB_Summary.WB_Summary_C:FadeIn_INST'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/IntermediatePoints/Content/WB_Summary.WB_Summary_C:ExecuteUbergraph_WB_Summary'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("CurrentF_Value"), FGuid(0xF3CAFAD9, 0x4AF3AF87, 0x36EB62AB, 0xF68A4871) }, 
        { FName("Value"), FGuid(0xEB89BCB6, 0x4C7E7427, 0x18343DA6, 0xE361BFF9) }, 
        { FName("PointType"), FGuid(0xBFDFC8A3, 0x4D603D74, 0x04265C82, 0xBC7B7CC6) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedPaint = false;
    class UTextBlock* ValueText;
    class UTextBlock* SummaryText;
    class USizeBox* SB_Value;
    class UWidgetAnimation* FadeIn;
    E_PointTypes PointType;
    int Value;
    double CurrentF_Value;

};