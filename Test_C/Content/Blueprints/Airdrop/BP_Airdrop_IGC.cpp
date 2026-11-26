class ABP_Airdrop_IGC_C : public ABP_Airdrop_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Airdrop/BP_Airdrop_IGC.BP_Airdrop_IGC_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/Airdrop/BP_Airdrop_IGC.BP_Airdrop_IGC_C:InheritableComponentHandler'";
    struct FIRRSpawnReinforcementSettings Reinforcement = {
        "AllegianceId": FName("IGC")
    };
    class UObject* Billboard = nullptr;
    class UIRRNavObstacleComponent* NavObstacle = "IRRNavObstacleComponent'Test_C/Content/Blueprints/Airdrop/BP_Airdrop_IGC.Default__BP_Airdrop_IGC_C:NavObstacle'";
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/Airdrop/BP_Airdrop_IGC.Default__BP_Airdrop_IGC_C:Root'";
};