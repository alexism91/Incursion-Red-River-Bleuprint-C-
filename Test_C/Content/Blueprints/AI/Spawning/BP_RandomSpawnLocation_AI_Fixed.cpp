class ABP_RandomSpawnLocation_AI_Fixed_C : public ABP_RandomSpawnLocation_AI_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI_Fixed.BP_RandomSpawnLocation_AI_Fixed_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI_Fixed.BP_RandomSpawnLocation_AI_Fixed_C:InheritableComponentHandler'";
    class UMaterialInstanceConstant* Material = "MaterialInstanceConstant'Test_C/Plugins/UPS/Content/Materials/MI_ForcedSpawnPoint.MI_ForcedSpawnPoint'";
    enum E_AI_Behaviour Behaviour = E_AI_Behaviour::NewEnumerator2;
    struct FLinearColor Line Color = FLinearColor(1, 0, 0, 1);
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI_Fixed.Default__BP_RandomSpawnLocation_AI_Fixed_C:Root'";
    class APawn* CharacterRef_0;
};