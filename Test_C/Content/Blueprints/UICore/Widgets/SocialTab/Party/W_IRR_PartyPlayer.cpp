class UW_IRR_PartyPlayer_C : public UKronosPartyPlayerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/Party/W_IRR_PartyPlayer.W_IRR_PartyPlayer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/Party/W_IRR_PartyPlayer.W_IRR_PartyPlayer_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/Party/W_IRR_PartyPlayer.W_IRR_PartyPlayer_C:ExecuteUbergraph_W_IRR_PartyPlayer'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Button_Small_C* W_IRR_Button_Small;

};