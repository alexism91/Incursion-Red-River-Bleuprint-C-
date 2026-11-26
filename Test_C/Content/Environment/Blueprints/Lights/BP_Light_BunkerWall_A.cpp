class ABP_Light_BunkerWall_A_C : public ABP_Base_Light_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_Light_BunkerWall_A.BP_Light_BunkerWall_A_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Lights/BP_Light_BunkerWall_A.BP_Light_BunkerWall_A_C:InheritableComponentHandler'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* SM_BunkerPipes_1;
};