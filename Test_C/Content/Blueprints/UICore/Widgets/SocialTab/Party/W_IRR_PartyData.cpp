class UW_IRR_PartyData_C : public UKronosPartyWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/Party/W_IRR_PartyData.W_IRR_PartyData_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "Leave",
            "PropertyName": FName("bIsEnabled"),
            "FunctionName": FName("Get_Leave_bIsEnabled"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_Leave_bIsEnabled"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/Party/W_IRR_PartyData.W_IRR_PartyData_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/UICore/Widgets/SocialTab/Party/W_IRR_PartyData.W_IRR_PartyData_C:ExecuteUbergraph_W_IRR_PartyData'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Border"), FGuid(0x505A02C9, 0x403CB638, 0x4E41CAB1, 0x9300B520) }, 
        { FName("EditorSwitcher"), FGuid(0x5405C0ED, 0x669D38F2, 0xAE5C1141, 0x0560A781) }, 
        { FName("IRRTextBlock_364"), FGuid(0x025BA0CF, 0xEBA93D58, 0xBBEF19E2, 0x1938E031) }, 
        { FName("Leave"), FGuid(0xDDFEF874, 0x7DCF3D5A, 0xB88F0291, 0x32FEB338) }, 
        { FName("OnlineSubsystemSwitcher"), FGuid(0xA01323C0, 0x4CCE37A7, 0x9595CA42, 0xEA2088BD) }, 
        { FName("W_VendorCurrency"), FGuid(0xCB49B693, 0x22F43169, 0xA8AAEA46, 0x4F78BF97) }, 
        { FName("WB_Base_Icon"), FGuid(0x35EFA2B7, 0x47C98EC3, 0x4E08CAA7, 0xA517F8FF) }, 
        { FName("WBP_KronosExamplePartyPlayer"), FGuid(0xFB6CBEE9, 0x986332A8, 0xBDA5AF7F, 0x63BF78C5) }, 
        { FName("WBP_KronosExamplePartySlot"), FGuid(0x2342E4C5, 0x9B303987, 0xBDFA6149, 0xD7229B89) }, 
        { FName("WBP_KronosExamplePartySlot_1"), FGuid(0x8108751B, 0x23263270, 0x8D779C53, 0xAE9A4E92) }, 
        { FName("WBP_KronosExamplePartySlot_2"), FGuid(0xC0468E0F, 0x7C6839CC, 0xA95F0DF8, 0x4A70EC1F) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_PartySlot_C* WBP_KronosExamplePartySlot_2;
    class UW_IRR_PartySlot_C* WBP_KronosExamplePartySlot_1;
    class UW_IRR_PartySlot_C* WBP_KronosExamplePartySlot;
    class UW_IRR_PartyPlayer_C* WBP_KronosExamplePartyPlayer;
    class UWB_Base_Icon_C* WB_Base_Icon;
    class UW_IRR_Currency_C* W_VendorCurrency;
    class UW_IRR_PlayerLevel_C* W_IRR_PlayerLevel;
    class UWidgetSwitcher* OnlineSubsystemSwitcher;
    class UW_IRR_Button_Small_C* Leave;
    class UIRRTextBlock* IRRTextBlock_364;
    class UWidgetSwitcher* EditorSwitcher;
    class UBorder* Border;

};