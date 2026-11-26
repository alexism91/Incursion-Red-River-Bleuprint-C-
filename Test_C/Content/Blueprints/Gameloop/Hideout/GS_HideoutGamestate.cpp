class AGS_HideoutGamestate_C : public AKronosGameState
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Gameloop/Hideout/GS_HideoutGamestate.GS_HideoutGamestate_C:SimpleConstructionScript_0'";
    enum GameStateType = EKronosGameStateType::Hideout;
    class UBP_IRRWorldManager_C* BP_IRRWorldManager;
    class UBP_IRRMissionManager_C* BP_IRRMissionManager;
    class UBP_ItemSnapComponent_C* BP_ItemSnapComponent;
    class USceneComponent* DefaultSceneRoot;
};