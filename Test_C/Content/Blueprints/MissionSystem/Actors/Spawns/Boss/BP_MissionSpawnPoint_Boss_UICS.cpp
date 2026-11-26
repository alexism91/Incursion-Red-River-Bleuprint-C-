class ABP_MissionSpawnPoint_Boss_UICS_C : public ABP_MissionSpawnPoint_Boss_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Boss/BP_MissionSpawnPoint_Boss_UICS.BP_MissionSpawnPoint_Boss_UICS_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Boss/BP_MissionSpawnPoint_Boss_UICS.BP_MissionSpawnPoint_Boss_UICS_C:InheritableComponentHandler'";
    FName SpawnTag = FName("Monstera");
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/AI/Characters/Boss/BP_IRR_AI_BaseCharacter_Boss_Monstera.BP_IRR_AI_BaseCharacter_Boss_Monstera_C'"
    };
    TArray<class UBP_SpawnModifier_MissionCompleted_C*> SpawnModifiers = {
        "BP_SpawnModifier_MissionCompleted_C'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/Boss/BP_MissionSpawnPoint_Boss_UICS.Default__BP_MissionSpawnPoint_Boss_UICS_C:BP_SpawnModifier_MissionCompleted_C_0'"
    };
};