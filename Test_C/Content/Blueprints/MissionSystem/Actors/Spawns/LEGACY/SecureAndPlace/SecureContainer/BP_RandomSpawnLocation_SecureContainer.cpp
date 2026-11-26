class ABP_RandomSpawnLocation_SecureContainer_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/SecureAndPlace/SecureContainer/BP_RandomSpawnLocation_SecureContainer.BP_RandomSpawnLocation_SecureContainer_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/Spawns/LEGACY/SecureAndPlace/SecureContainer/BP_RandomSpawnLocation_SecureContainer.BP_RandomSpawnLocation_SecureContainer_C:InheritableComponentHandler'";
    class UStaticMesh* DebugMesh = "StaticMesh'Test_C/Content/Environment/Assets/Props/MilitaryCrates/SM_Old_Military_Trunk__High.SM_Old_Military_Trunk__High'";
    FName SpawnTag = FName("Secure Container");
    TArray<class UBlueprintGeneratedClass*> SpawnClasses = {
        "BlueprintGeneratedClass'Test_C/Content/Blueprints/InventorySystem/ExampleActors/BP_MissionSecureContainer.BP_MissionSecureContainer_C'"
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};