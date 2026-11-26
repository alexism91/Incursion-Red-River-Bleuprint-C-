class ABP_LobbyGameMode_C : public AKronosLobbyGameMode
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyGameMode.BP_LobbyGameMode_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyGameMode.BP_LobbyGameMode_C:ExecuteUbergraph_BP_LobbyGameMode'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 NumPlayersRequired = 1;
    int32 NumPlayersRequiredInEditor = 1;
    bool bCountdownOnlyIfEveryoneReady = true;
    class UBlueprintGeneratedClass* GameStateClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyGameState.BP_LobbyGameState_C'";
    class UBlueprintGeneratedClass* PlayerControllerClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyPlayerController.BP_LobbyPlayerController_C'";
    class UBlueprintGeneratedClass* PlayerStateClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyPlayerState.BP_LobbyPlayerState_C'";
    class UBlueprintGeneratedClass* HUDClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyHUD.BP_LobbyHUD_C'";
    class UBlueprintGeneratedClass* DefaultPawnClass = "BlueprintGeneratedClass'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyCharacter.BP_LobbyCharacter_C'";
    class USceneComponent* DefaultSceneRoot;

};