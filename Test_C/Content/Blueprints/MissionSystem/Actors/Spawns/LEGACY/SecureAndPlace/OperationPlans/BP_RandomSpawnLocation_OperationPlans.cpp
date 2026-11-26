class ABP_RandomSpawnLocation_OperationPlans_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/SecureAndPlace/OperationPlans/BP_RandomSpawnLocation_OperationPlans.BP_RandomSpawnLocation_OperationPlans_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/SecureAndPlace/OperationPlans/BP_RandomSpawnLocation_OperationPlans.BP_RandomSpawnLocation_OperationPlans_C:InheritableComponentHandler'";
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/BrutalistLevelKit/Models/Props/Items/SM_File_Pocket2.SM_File_Pocket2'";
    FName SpawnTag = FName("Operation Plan");
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/MissionSystem/Actors/MissionPickUps/BP_MissionPickUp_OperationPlanA.BP_MissionPickUp_OperationPlanA_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/MissionSystem/Actors/MissionPickUps/BP_MissionPickUp_OperationPlanB.BP_MissionPickUp_OperationPlanB_C'",
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/MissionSystem/Actors/MissionPickUps/BP_MissionPickUp_OperationPlanC.BP_MissionPickUp_OperationPlanC_C'"
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    TArray<FName> Tags = {
        FName("Keycard")
    };
};