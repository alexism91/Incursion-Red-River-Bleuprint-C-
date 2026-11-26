class ABP_LootContainer_Safe_01_C : public ABP_LootContainer_C
{
public:
    int32 NumReplicatedProperties = 1;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Gameplay/LootContainers/BP_LootContainer_Safe_01.BP_LootContainer_Safe_01_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Gameplay/LootContainers/BP_LootContainer_Safe_01.BP_LootContainer_Safe_01_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Environment/Blueprints/Gameplay/LootContainers/BP_LootContainer_Safe_01.BP_LootContainer_Safe_01_C:ExecuteUbergraph_BP_LootContainer_Safe_01'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    struct FGameplayTag SafeTag = {
        "TagName": FName("None")
    };
    float SpawnChance = 1;
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;

};