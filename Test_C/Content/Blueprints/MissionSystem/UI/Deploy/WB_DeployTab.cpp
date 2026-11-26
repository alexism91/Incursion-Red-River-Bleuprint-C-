class UWB_DeployTab_C : public UIRRUserWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/MissionSystem/UI/Deploy/WB_DeployTab.WB_DeployTab_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<struct FDelegateRuntimeBinding> Bindings = {
        {
            "ObjectName": "WB_InfillLocationSwitcher",
            "PropertyName": FName("ToolTipWidget"),
            "FunctionName": FName("Get_WB_InfillLocationSwitcher_ToolTipWidget"),
            "SourcePath": {
                "Segments": {
                    {
                        "Name": FName("Get_WB_InfillLocationSwitcher_ToolTipWidget"),
                        "ArrayIndex": -1
                    }
                },
                "CachedFunction": nullptr
            },
            "Kind": EBindingKind::Function
        }
    };
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/MissionSystem/UI/Deploy/WB_DeployTab.WB_DeployTab_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/MissionSystem/UI/Deploy/WB_DeployTab.WB_DeployTab_C:ExecuteUbergraph_WB_DeployTab'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("InfillLocations"), FGuid(0xB9F6A2D6, 0x4FA26823, 0x182864A6, 0xEBB5B705) }, 
        { FName("OnHoverToolTip"), FGuid(0x139A61E0, 0x474154CD, 0x1DD80DAF, 0xF06EF638) }, 
        { FName("W IRR Map Selection"), FGuid(0x33F88778, 0x476104D1, 0x766E20BE, 0x81D92409) }, 
        { FName("MissionInfo"), FGuid(0x2923B981, 0x407D335A, 0xF66B7DAD, 0x8E0BF14B) }, 
        { FName("FriendlyFire"), FGuid(0xE79B2D1F, 0x42E7D6EA, 0x375FAD87, 0xA120F77B) }, 
        { FName("SelectedMapTag"), FGuid(0xC8529169, 0x44279481, 0x37BE2CAC, 0x2249B70C) }, 
        { FName("MapSelectors"), FGuid(0x0E584CD3, 0x4F9BD055, 0x126079BB, 0x0A8C5601) }, 
        { FName("PrivateSession"), FGuid(0xE05BE873, 0x4E5F7D64, 0x8A5C5EA8, 0x4417BBE8) }, 
        { FName("Button Name"), FGuid(0xEFE24DA8, 0x4FBAD10B, 0xAA20319B, 0x9233EC99) }, 
        { FName("Lobby Level"), FGuid(0xB4BEEC18, 0x4D34D343, 0x6E836CAD, 0xA72DF201) }, 
        { FName("CancelButton"), FGuid(0x17D69575, 0x29AC364F, 0xB2784CCE, 0x6BC459DA) }, 
        { FName("DeployButton"), FGuid(0x1D8C63D6, 0x57273B30, 0xAA98A5A0, 0x7044B249) }, 
        { FName("Description"), FGuid(0x75BD2324, 0xCCF73017, 0x8674DE9F, 0x5A375695) }, 
        { FName("FANG"), FGuid(0x3D4E1A51, 0x41BF8591, 0x9FBF479A, 0x9BF6C8C1) }, 
        { FName("IGC"), FGuid(0x51D876A1, 0x465FC547, 0x47DBF790, 0xD2D9BEF3) }, 
        { FName("MatchmakingStateContainer"), FGuid(0x4FBDC4B1, 0x3C563282, 0xBCF17B89, 0xC6722562) }, 
        { FName("MatchmakingStateText"), FGuid(0x66ADA4F3, 0xE8F73E33, 0xACD0C0C6, 0x9D65C6C8) }, 
        { FName("MatchmakingSwitcher"), FGuid(0xF2120CC3, 0x8F613A8C, 0xB6BEC409, 0xA89DE396) }, 
        { FName("MatchmakingTimerText"), FGuid(0xA049E8FE, 0xA3243E68, 0xB7F2D85F, 0xCC51F4D2) }, 
        { FName("Overlay"), FGuid(0xD04B19DC, 0xA1AE3DB4, 0x8AC931DE, 0xC0CAD696) }, 
        { FName("RaidOptions"), FGuid(0x19A51526, 0x111C3C7E, 0x991BB308, 0x042E706D) }, 
        { FName("UICS"), FGuid(0x2707C39C, 0x456A01CD, 0x1B4CE28F, 0xF00F61CC) }, 
        { FName("VLF"), FGuid(0x92BC994C, 0x4FE34D12, 0x8A17CAA7, 0x65AA1469) }, 
        { FName("W_IRR_Background"), FGuid(0x4CCD0387, 0xBFAA3294, 0xA759B7B9, 0xF7835A47) }, 
        { FName("W_IRR_Background_GridAndBlur"), FGuid(0x6ACD553D, 0xBCEC3E2D, 0xBFEEF883, 0x2BBC9DE2) }, 
        { FName("W_IRR_DeployMissionContainer"), FGuid(0xB8AF4E93, 0x45CED8F5, 0x57ACB5A6, 0x8A7C5D9C) }, 
        { FName("W_MapToolTip"), FGuid(0x4A91E4F7, 0xA3FE3B8D, 0xA03A8125, 0x08E937D8) }, 
        { FName("WB_FriendlyFire"), FGuid(0x9F2C09AB, 0xA8653437, 0xB405CA13, 0xA47FC5D7) }, 
        { FName("WB_InfillLocationSwitcher"), FGuid(0x732D02EA, 0x4B91776E, 0x4D079AA6, 0x64EC973C) }, 
        { FName("WB_LoadoutSwitcher"), FGuid(0xADACCC90, 0x6EE83C15, 0xA774C3C0, 0x8AA2357D) }, 
        { FName("WB_PrivateSessionSwitcher"), FGuid(0x3BD59EAC, 0x1E343B2A, 0x9EDDBB41, 0xC7D83917) }, 
        { FName("WB_TimeFrameSwitcher"), FGuid(0xB3D3B3C4, 0x7F8033D6, 0x85EB4DF7, 0xD78F556C) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    FString Lobby Level = "LVL_LobbyNEW";
    bool PrivateSession = true;
    struct FGameplayTag SelectedMapTag = {
        "TagName": FName("None")
    };
    bool FriendlyFire = true;
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_Setting_Switcher_C* WB_TimeFrameSwitcher;
    class UW_IRR_Setting_Switcher_C* WB_PrivateSessionSwitcher;
    class UW_IRR_Setting_Switcher_C* WB_LoadoutSwitcher;
    class UW_IRR_Setting_Selector_C* WB_InfillLocationSwitcher;
    class UW_IRR_Setting_Switcher_C* WB_FriendlyFire;
    class UW_MapToolTip_C* W_MapToolTip;
    class UW_IRR_DeployMissionContainer_C* W_IRR_DeployMissionContainer;
    class UW_IRR_Background_GridAndBlur_C* W_IRR_Background_GridAndBlur;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_IRR_Button_Small_C* VLF;
    class UW_IRR_Button_Small_C* UICS;
    class UVerticalBox* RaidOptions;
    class UOverlay* Overlay;
    class UIRRTextBlock* MatchmakingTimerText;
    class UWidgetSwitcher* MatchmakingSwitcher;
    class UIRRTextBlock* MatchmakingStateText;
    class UBorder* MatchmakingStateContainer;
    class UW_IRR_Button_Small_C* IGC;
    class UW_IRR_Button_Small_C* FANG;
    class UIRRTextBlock* Description;
    class UW_IRR_BaseButton_C* DeployButton;
    class UW_IRR_BaseButton_C* CancelButton;
    FName Button Name;
    TArray<class UW_IRR_MapSelection_Item_C*>* MapSelectors;
    class UW_GCPS_Mission_C* MissionInfo;
    class UW_IRR_MapSelection_C* W IRR Map Selection;
    class UW_OnHoverToolTip_C* OnHoverToolTip;
    TArray<FName> InfillLocations;

};