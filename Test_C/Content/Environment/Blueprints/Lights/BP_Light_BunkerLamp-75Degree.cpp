class ABP_Light_BunkerLamp-75Degree_C : public ABP_Base_Light_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_Light_BunkerLamp-75Degree.BP_Light_BunkerLamp-75Degree_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Lights/BP_Light_BunkerLamp-75Degree.BP_Light_BunkerLamp-75Degree_C:InheritableComponentHandler'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UStaticMeshComponent* StaticMesh;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* SM_BunkerPipes_1;
};