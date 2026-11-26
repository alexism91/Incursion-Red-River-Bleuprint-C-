class UWB_IntPoints_Base_C : public UUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/IntermediatePoints/WB_IntPoints_Base.WB_IntPoints_Base_C:WidgetTree'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/CompShooterHUD/UI/Content/IntermediatePoints/WB_IntPoints_Base.WB_IntPoints_Base_C:ExecuteUbergraph_WB_IntPoints_Base'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("PointInfo"), FGuid(0x84B31033, 0x4F506CB1, 0xF51840B2, 0xEE6FFD59) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FS_IntPoints PointInfo = {
        "PointType_13_15BFAC5F40A17707B3336898FDABF7B1": E_PointTypes::NewEnumerator0,
        "ActionText_12_509323A54855E54E0B6E5ABD530375A1": FText(""),
        "Points_5_BCA4D18341281194657316856DDF47D5": 0,
        "Color_11_61EC69D044E6310DE4707AAA3D1ABF72": FLinearColor(0, 0, 0, 0)
    };
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UVerticalBox* VB_Summaries;
    class UVerticalBox* VB_Entries;
    class UOverlay* OV_SumXP;
    class UOverlay* OV_SumPoints;
    class UOverlay* OV_E4;
    class UOverlay* OV_E3;
    class UOverlay* OV_E2;
    class UOverlay* OV_E1;

};