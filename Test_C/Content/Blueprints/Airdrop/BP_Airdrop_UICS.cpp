class ABP_Airdrop_UICS_C : public ABP_Airdrop_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Airdrop/BP_Airdrop_UICS.BP_Airdrop_UICS_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/Airdrop/BP_Airdrop_UICS.BP_Airdrop_UICS_C:InheritableComponentHandler'";
    struct FIRRSpawnReinforcementSettings Reinforcement = {
        "AllegianceId": FName("UICS")
    };
    class UObject* Billboard = nullptr;
    class UIRRNavObstacleComponent* NavObstacle = "IRRNavObstacleComponent'Test_C/Content/Blueprints/Airdrop/BP_Airdrop_UICS.Default__BP_Airdrop_UICS_C:NavObstacle'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/Airdrop/BP_Airdrop_UICS.Default__BP_Airdrop_UICS_C:Root'";
};