class UW_IRR_HideoutUpgrade_Condition_Reputation_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Condition_Reputation.W_IRR_HideoutUpgrade_Condition_Reputation_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("OnButtonClicked"), FGuid(0x7CBB4010, 0x42452642, 0x96A0C899, 0xE711C438) }, 
        { FName("IRRTextBlock"), FGuid(0x7F8D4D64, 0xEB63379D, 0x8901FAFE, 0xFF2CD371) }
    };
     OnButtonClicked = ;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* IRRTextBlock;

};