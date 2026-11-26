class ABP_Bullet_9x19_Pistol_C : public ABP_MasterBullet_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Bullets/BP_Bullet_9x19_Pistol.BP_Bullet_9x19_Pistol_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/Bullets/BP_Bullet_9x19_Pistol.BP_Bullet_9x19_Pistol_C:InheritableComponentHandler'";
    class UCurveFloat* EffectiveRange = "CurveFloat'Test_C/Content/Blueprints/Bullets/EffectiveRangeCurves/FC_DamageCurve_9x19_Pistol.FC_DamageCurve_9x19_Pistol'";
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};