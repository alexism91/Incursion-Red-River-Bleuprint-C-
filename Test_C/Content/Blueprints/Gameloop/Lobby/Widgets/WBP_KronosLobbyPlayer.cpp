class UWBP_KronosLobbyPlayer_C : public UKronosLobbyPlayerWidget
{
public:
    class UWidgetTree* WidgetTree = "WidgetTree'Test_C/Content/Blueprints/Gameloop/Lobby/Widgets/WBP_KronosLobbyPlayer.WBP_KronosLobbyPlayer_C:WidgetTree'";
    bool bClassRequiresNativeTick = true;
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/Lobby/Widgets/WBP_KronosLobbyPlayer.WBP_KronosLobbyPlayer_C:ExecuteUbergraph_WBP_KronosLobbyPlayer'";
    TMap<FName, struct FGuid> CookedPropertyGuids = {
        { FName("Character"), FGuid(0xC0B5FEDD, 0x49E90928, 0x84AA4FB8, 0xE952E9CA) }, 
        { FName("AudioBox"), FGuid(0xA427555F, 0x4DDDEB34, 0xF6C11287, 0x50065CD7) }, 
        { FName("PlayerNameText"), FGuid(0xC912B081, 0x4195B656, 0xEBDCEA87, 0xA1460660) }, 
        { FName("PlayerReadyText"), FGuid(0x7D311F2E, 0x324034B4, 0x95595129, 0xC66CDE3A) }, 
        { FName("W_IRR_BaseIcon"), FGuid(0x0F63D503, 0x40187235, 0x7121A7AA, 0xCC710594) }
    };
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool bHasScriptImplementedTick = false;
    bool bHasScriptImplementedPaint = false;
    class UW_IRR_BaseIcon_C* W_IRR_BaseIcon;
    class UTextBlock* PlayerReadyText;
    class UTextBlock* PlayerNameText;
    class UHorizontalBox* AudioBox;
    class ACharacter* Character;

};