class ABP_Bullet_12x70_Slug_C : public ABP_MasterBullet_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Bullets/12x70/BP_Bullet_12x70_Slug.BP_Bullet_12x70_Slug_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/Bullets/12x70/BP_Bullet_12x70_Slug.BP_Bullet_12x70_Slug_C:InheritableComponentHandler'";
    class UCurveFloat* EffectiveRange = "CurveFloat'Test_C/Content/Blueprints/Bullets/EffectiveRangeCurves/FC_DamageCurve_12x70_Slug.FC_DamageCurve_12x70_Slug'";
    struct FRandomStream RandomStream = {
        "Seed": 1777550834
    };
    int32 ShotCount = 1;
    float ShotSpread = 0.02;
    float ShotVelocitySpread = 0.02;
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};