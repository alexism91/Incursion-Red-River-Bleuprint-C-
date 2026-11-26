class UW_IRR_HideoutUpgrade_Overview_Action_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Action.W_IRR_HideoutUpgrade_Overview_Action_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Hideout/W_IRR_HideoutUpgrade_Overview_Action.W_IRR_HideoutUpgrade_Overview_Action_C:ExecuteUbergraph_W_IRR_HideoutUpgrade_Overview_Action'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Action"), FGuid(0x520F6B94, 0x4CE283FE, 0xEC1FBCA5, 0xE5CFDDBF) }, 
        { FName("Image_253"), FGuid(0x5CC1622E, 0x4476E783, 0xC7E3A9A0, 0x2D6D4091) }, 
        { FName("SequenceHeadline"), FGuid(0x8D5F5393, 0x460BCCB4, 0xDF13AEA3, 0x905AB0EB) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UIRRTextBlock* SequenceHeadline;
    class UImage* Image_253;
    class UIRRHideoutAction* Action;

};