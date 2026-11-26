class ABP_Bullet_x300_C : public ABP_MasterBullet_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Bullets/BP_Bullet_x300.BP_Bullet_x300_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/Bullets/BP_Bullet_x300.BP_Bullet_x300_C:InheritableComponentHandler'";
    class UCurveFloat* EffectiveRange = "CurveFloat'Test_C/Content/Blueprints/Bullets/EffectiveRangeCurves/FC_DamageCurve_762x51.FC_DamageCurve_762x51'";
    TArray<WeakObject> Pooled = {
    
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};