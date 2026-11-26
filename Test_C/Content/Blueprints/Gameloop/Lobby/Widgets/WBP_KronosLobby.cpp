class UWBP_KronosLobby_C : public UKronosLobbyWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/Gameloop/Lobby/Widgets/WBP_KronosLobby.WBP_KronosLobby_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    TArray<class UComponentDelegateBinding*> DynamicBindingObjects = {
        "ComponentDelegateBinding'Test_C/Content/Blueprints/Gameloop/Lobby/Widgets/WBP_KronosLobby.WBP_KronosLobby_C:ComponentDelegateBinding_0'"
    };
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/Lobby/Widgets/WBP_KronosLobby.WBP_KronosLobby_C:ExecuteUbergraph_WBP_KronosLobby'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("ArrivalTime"), FGuid(0x98932C21, 0x9B293068, 0x830FD46B, 0x48054D59) }, 
        { FName("Contract"), FGuid(0xCD75F73F, 0x802C3212, 0xB752C92A, 0xEAE1C4A7) }, 
        { FName("FriendlyFire"), FGuid(0x311DF68F, 0x36A33340, 0xB0DA8D0B, 0x07E51F3F) }, 
        { FName("InfillLocation"), FGuid(0xD76A7D96, 0x41D0E5F4, 0x576E50BB, 0x891FCA13) }, 
        { FName("Invite"), FGuid(0x0B918A8E, 0x733A3520, 0x992472BB, 0x34122FB8) }, 
        { FName("JoinabilityText"), FGuid(0x8A3D7FF0, 0x6DD43FF7, 0xAB20135A, 0xBCA93C6A) }, 
        { FName("Leave"), FGuid(0xC175DB7D, 0x25843CF3, 0xA63DF858, 0x8964CD6B) }, 
        { FName("LobbyStateText"), FGuid(0xC24A3461, 0x45323DFD, 0x9B8E8AF7, 0xEA1151C3) }, 
        { FName("MapName"), FGuid(0xC2EE41A2, 0x162C31BC, 0x8E5452AF, 0x4A274967) }, 
        { FName("MaxPlayersText"), FGuid(0x97FD3AC8, 0x8D5E3F48, 0xA6F5437B, 0xB57A2D0F) }, 
        { FName("Ready"), FGuid(0x404B2590, 0x6FE335E6, 0x9BC112DE, 0x05A1ABD8) }, 
        { FName("W_IRR_Background"), FGuid(0xCA8A74A7, 0x608D3208, 0xBA50014B, 0xF0986462) }, 
        { FName("W_IRR_Background_GridAndBlur"), FGuid(0xD62E8A52, 0xD54732A2, 0x9C26EF7F, 0x9A576EB4) }, 
        { FName("WaitingBox"), FGuid(0x3D128E9C, 0x40D83728, 0x9F44B4E2, 0x1EF3B491) }, 
        { FName("WBP_Chatbox"), FGuid(0x86CD0028, 0xBE363C01, 0x9D6C4778, 0xAD063869) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bIsFocusable = true;
    bool bHasScriptImplementedPaint = false;
    class UWBP_Chatbox_C* WBP_Chatbox;
    class UVerticalBox* WaitingBox;
    class UW_IRR_Background_GridAndBlur_C* W_IRR_Background_GridAndBlur;
    class UW_IRR_Background_C* W_IRR_Background;
    class UW_IRR_BaseButton_C* Ready;
    class UIRRTextBlock* MaxPlayersText;
    class UIRRTextBlock* MapName;
    class UIRRTextBlock* LobbyStateText;
    class UW_IRR_Menu_Button_Medium_C* Leave;
    class UIRRTextBlock* JoinabilityText;
    class UW_IRR_Menu_Button_Medium_C* Invite;
    class UIRRTextBlock* InfillLocation;
    class UIRRTextBlock* FriendlyFire;
    class UIRRTextBlock* Contract;
    class UIRRTextBlock* ArrivalTime;

};