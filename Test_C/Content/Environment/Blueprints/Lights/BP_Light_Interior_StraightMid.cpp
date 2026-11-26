class ABP_Light_Interior_StraightMid_C : public ABP_Base_Light_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Environment/Blueprints/Lights/BP_Light_Interior_StraightMid.BP_Light_Interior_StraightMid_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Environment/Blueprints/Lights/BP_Light_Interior_StraightMid.BP_Light_Interior_StraightMid_C:InheritableComponentHandler'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* SM_VN_Lights_Big_Straight;
};