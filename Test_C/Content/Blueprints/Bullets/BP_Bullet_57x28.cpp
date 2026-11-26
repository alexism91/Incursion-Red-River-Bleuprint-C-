class ABP_Bullet_57x28_C : public ABP_MasterBullet_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Bullets/BP_Bullet_57x28.BP_Bullet_57x28_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/Bullets/BP_Bullet_57x28.BP_Bullet_57x28_C:InheritableComponentHandler'";
    class UCurveFloat* EffectiveRange = "CurveFloat'Test_C/Content/Blueprints/Bullets/EffectiveRangeCurves/FC_DamageCurve_57x28.FC_DamageCurve_57x28'";
    struct FRandomStream RandomStream = {
        "Seed": -745005333
    };
    int32 ShotCount = 5;
    float ShotSpread = 0.02;
    float ShotVelocitySpread = 0.02;
    TArray<WeakObject> Pooled = {
    
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};