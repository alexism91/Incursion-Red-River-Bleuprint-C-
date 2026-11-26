class ABP_Light_Flourescent_Wide_C : public ABP_Base_Light_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_Light_Flourescent_Wide.BP_Light_Flourescent_Wide_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Lights/BP_Light_Flourescent_Wide.BP_Light_Flourescent_Wide_C:InheritableComponentHandler'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class URectLightComponent* RectLight;
    class UStaticMeshComponent* StaticMesh;
};