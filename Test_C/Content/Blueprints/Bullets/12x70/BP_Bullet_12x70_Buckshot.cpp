class ABP_Bullet_12x70_Buckshot_C : public ABP_MasterBullet_C
{
public:
    bool bHasCookedComponentInstancingData = true;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/Bullets/12x70/BP_Bullet_12x70_Buckshot.BP_Bullet_12x70_Buckshot_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/Bullets/12x70/BP_Bullet_12x70_Buckshot.BP_Bullet_12x70_Buckshot_C:InheritableComponentHandler'";
    class UCurveFloat* EffectiveRange = "CurveFloat'Test_C/Content/Blueprints/Bullets/EffectiveRangeCurves/FC_DamageCurve_12x70_Buckshot.FC_DamageCurve_12x70_Buckshot'";
    struct FRandomStream RandomStream = {
        "Seed": -2123631270
    };
    bool Shotgun = true;
    int32 ShotCount = 6;
    float ShotSpread = 0.02;
    float ShotVelocitySpread = 0.02;
    TArray<WeakObject> Pooled = {
        ,
        ,
        ,
    
    };
    enum RemoteRole = ENetRole::ROLE_SimulatedProxy;
};