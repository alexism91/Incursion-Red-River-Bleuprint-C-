class UW_IRR_HideoutUpgrade_Condition_HideoutUnitLevel_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Condition_HideoutUnitLevel.W_IRR_HideoutUpgrade_Condition_HideoutUnitLevel_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnButtonClicked"), FGuid(0xCFEAE99F, 0x482C4603, 0x9C96328A, 0x4DBFB666) }, 
        { FName("HorizontalBox_1"), FGuid(0xB0C423C3, 0xD64E3CFD, 0x8AED4860, 0x41F2930D) }, 
        { FName("IRRTextBlock"), FGuid(0x7F8D4D64, 0xEB63379D, 0x8901FAFE, 0xFF2CD371) }
    };
     OnButtonClicked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* IRRTextBlock;

};