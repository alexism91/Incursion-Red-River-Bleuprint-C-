class ABP_OperationSpawnDebug_C : public ABP_MissionSpawnPoint_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/MissionSystem/Actors/BP_OperationSpawnDebug.BP_OperationSpawnDebug_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/MissionSystem/Actors/BP_OperationSpawnDebug.BP_OperationSpawnDebug_C:InheritableComponentHandler'";
    bool bDebug = true;
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UIRRMissionSetup* SpawnOperation;

};