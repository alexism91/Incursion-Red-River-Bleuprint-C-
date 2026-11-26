class ABP_RandomSpawnLocation_AI_Mission_C : public ABP_RandomSpawnLocation_AI_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI_Mission.BP_RandomSpawnLocation_AI_Mission_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI_Mission.BP_RandomSpawnLocation_AI_Mission_C:InheritableComponentHandler'";
    class UMaterialInstanceConstant* Material = "MaterialInstanceConstant'Test_C/Plugins/UPS/Content/Materials/MI_ActionPointPreviewMesh.MI_ActionPointPreviewMesh'";
    bool MissionSpawn? = true;
    class USceneComponent* RootComponent = "SceneComponent'Test_C/Content/Blueprints/AI/Spawning/BP_RandomSpawnLocation_AI_Mission.Default__BP_RandomSpawnLocation_AI_Mission_C:Root'";
    bool SpawnedOnce?;

};