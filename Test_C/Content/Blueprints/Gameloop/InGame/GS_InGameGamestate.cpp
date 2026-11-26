class AGS_InGameGamestate_C : public AKronosGameState
{
public:
    int32 NumReplicatedProperties = 4;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/InGame/GS_InGameGamestate.GS_InGameGamestate_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/Gameloop/InGame/GS_InGameGamestate.GS_InGameGamestate_C:ExecuteUbergraph_GS_InGameGamestate'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
     OnMatchStart = ;
    enum GameStateType = EKronosGameStateType::InGame;
    class UBP_RadioManager_C* BP_RadioManager;
    class UBP_IRRWorldManager_C* BP_IRRWorldManager;
    class UBP_IRRExtractionManager_C* BP_IRRExtractionManager;
    class UBP_IRRMinimapManager_C* BP_IRRMinimapManager;
    class UBP_IRRMissionManager_C* BP_IRRMissionManager;
    class UBP_SpectatorComponent_C* BP_SpectatorComponent;
    class UBP_ItemSnapComponent_C* BP_ItemSnapComponent;
    class USceneComponent* DefaultSceneRoot;
    bool AllPlayersReady;
    bool CoverBuild;
    bool ReadyToStartMatch;
    bool All Level Loaded;

};