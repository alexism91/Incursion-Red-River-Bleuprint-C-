class ABP_LobbyGameState_C : public AKronosLobbyGameState
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/Lobby/Blueprints/BP_LobbyGameState.BP_LobbyGameState_C:SimpleConstructionScript_0'";
    bool bRelocatePlayers = false;
    class UBP_IRRMissionManager_C* BP_IRRMissionManager;
    class UBP_IRRWorldManager_C* BP_IRRWorldManager;
    class USceneComponent* DefaultSceneRoot;
};