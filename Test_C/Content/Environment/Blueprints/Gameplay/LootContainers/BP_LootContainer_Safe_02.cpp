class ABP_LootContainer_Safe_02_C : public ABP_LootContainer_C
{
public:
    int32 NumReplicatedProperties = 1;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Gameplay/LootContainers/BP_LootContainer_Safe_02.BP_LootContainer_Safe_02_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Gameplay/LootContainers/BP_LootContainer_Safe_02.BP_LootContainer_Safe_02_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Blueprints/Gameplay/LootContainers/BP_LootContainer_Safe_02.BP_LootContainer_Safe_02_C:ExecuteUbergraph_BP_LootContainer_Safe_02'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag SafeTag = {
        "TagName": FName("None")
    };
    float SpawnChance = 1;
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;

};