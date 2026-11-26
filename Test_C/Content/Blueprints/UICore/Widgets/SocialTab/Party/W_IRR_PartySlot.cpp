class UW_IRR_PartySlot_C : public UKronosPartyPlayerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/Party/W_IRR_PartySlot.W_IRR_PartySlot_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/Party/W_IRR_PartySlot.W_IRR_PartySlot_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/Party/W_IRR_PartySlot.W_IRR_PartySlot_C:ExecuteUbergraph_W_IRR_PartySlot'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Button_Small_C* W_IRR_Button_Small;

};