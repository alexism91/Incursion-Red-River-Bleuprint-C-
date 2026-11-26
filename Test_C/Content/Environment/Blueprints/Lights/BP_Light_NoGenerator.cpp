class ABP_Light_NoGenerator_C : public ABP_Base_Light_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_Light_NoGenerator.BP_Light_NoGenerator_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Lights/BP_Light_NoGenerator.BP_Light_NoGenerator_C:InheritableComponentHandler'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class URectLightComponent* RectLight;
    class UStaticMeshComponent* SM_LightGenerator_01a;
};