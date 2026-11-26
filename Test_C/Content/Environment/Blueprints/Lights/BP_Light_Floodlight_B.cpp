class ABP_Light_Floodlight_B_C : public ABP_Base_Light_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_Light_Floodlight_B.BP_Light_Floodlight_B_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Lights/BP_Light_Floodlight_B.BP_Light_Floodlight_B_C:InheritableComponentHandler'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class UStaticMeshComponent* SM_FloodLight_01_NoNanite;
    class UNiagaraComponent* N_LensFlare1;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* SM_FloodLight_5;
};