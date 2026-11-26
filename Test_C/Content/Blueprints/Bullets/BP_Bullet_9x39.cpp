class ABP_Bullet_9x39_C : public ABP_MasterBullet_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Bullets/BP_Bullet_9x39.BP_Bullet_9x39_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/Bullets/BP_Bullet_9x39.BP_Bullet_9x39_C:InheritableComponentHandler'";
    class UCurveFloat* EffectiveRange = "CurveFloat'Test_C/Content/Blueprints/Bullets/EffectiveRangeCurves/FC_DamageCurve_9x19_SMG.FC_DamageCurve_9x19_SMG'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};