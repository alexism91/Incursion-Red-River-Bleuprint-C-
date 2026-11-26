class ABP_LootContainer_General_01_C : public ABP_LootContainer_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Gameplay/LootContainers/BP_LootContainer_General_01.BP_LootContainer_General_01_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Gameplay/LootContainers/BP_LootContainer_General_01.BP_LootContainer_General_01_C:InheritableComponentHandler'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UStaticMeshComponent* Cube2;
    class UStaticMeshComponent* Cube1;
    class UDecalComponent* Decal1;
};