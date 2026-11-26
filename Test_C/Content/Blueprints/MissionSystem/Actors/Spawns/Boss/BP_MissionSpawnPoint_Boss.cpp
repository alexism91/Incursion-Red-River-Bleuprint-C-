class ABP_MissionSpawnPoint_Boss_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Boss/BP_MissionSpawnPoint_Boss.BP_MissionSpawnPoint_Boss_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Boss/BP_MissionSpawnPoint_Boss.BP_MissionSpawnPoint_Boss_C:InheritableComponentHandler'";
    bool DebugSpawnClass? = false;
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/Characters/Mannequins/Mannequin_UE4/Meshes/SM_Mannequin.SM_Mannequin'";
    class UMaterialInstanceConstant* Material = "MaterialInstanceConstant'Test_C/Plugins/UPS/Content/Materials/MI_ForcedSpawnPoint.MI_ForcedSpawnPoint'";
    FName SpawnTag = FName("Boss");
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UStaticMeshComponent* StaticMesh;

};