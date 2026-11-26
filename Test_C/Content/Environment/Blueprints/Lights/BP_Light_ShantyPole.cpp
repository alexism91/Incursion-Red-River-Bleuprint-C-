class ABP_Light_ShantyPole_C : public ABP_Base_Light_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_Light_ShantyPole.BP_Light_ShantyPole_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Lights/BP_Light_ShantyPole.BP_Light_ShantyPole_C:InheritableComponentHandler'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* SM_ShantyLightPole_E977BA2A;
};