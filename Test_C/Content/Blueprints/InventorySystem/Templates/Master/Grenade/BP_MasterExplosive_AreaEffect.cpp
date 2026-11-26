class ABP_MasterExplosive_AreaEffect_C : public AGrenadeActor_AreaEffect
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_AreaEffect.BP_MasterExplosive_AreaEffect_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_AreaEffect.BP_MasterExplosive_AreaEffect_C:ExecuteUbergraph_BP_MasterExplosive_AreaEffect'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UNiagaraSystem* GrenadeExplosionNiagaraSystem = "NiagaraSystem'Test_C/Content/Particles/Grenade/Dirt/NS_GrenadeExplosion_Dirt.NS_GrenadeExplosion_Dirt'";
    float VisibilityScore = 0.05;
    struct FLinearColor EffectColor = FLinearColor(0, 0, 0, 0);
    struct FRuntimeFloatCurve LifetimeScaleCurve = {
        "EditorCurveData": {
            "Keys": {
                FRichCurveKey(RCIM_Cubic, RCTM_Auto, RCTWM_WeightedNone, -0, 0, 0, 0, 0, 0),
                FRichCurveKey(RCIM_Cubic, RCTM_User, RCTWM_WeightedNone, 0,4, 1, 4,5977015, 0, 4,5977025, 0)
            }
        }
    };
    class USphereComponent* EffectVolume = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_AreaEffect.Default__BP_MasterExplosive_AreaEffect_C:EffectVolume'";
    class UIRRZoneEffectSourceComponent* ZoneEffectSource = "IRRZoneEffectSourceComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_AreaEffect.Default__BP_MasterExplosive_AreaEffect_C:ZoneEffectSource'";
    bool bHideGrenadeMeshOnDetonate = false;
    float SpinStrength = 0.25;
    class UAkAudioEvent* GrenadeExplosionEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/HandGrenade/HandGrenade_Explosion.HandGrenade_Explosion'";
    class UAkAudioEvent* GrenadeBounceEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/HandGrenade/HandGrenade_Bounce.HandGrenade_Bounce'";
    float GrenadeBounceImpactThreshold = 10;
    class UAkRtpc* GrenadeBounceImpactRtpc = "AkRtpc'Test_C/Content/WwiseAudio/Game_Parameters/Default_Work_Unit/Explosives/Grenade/Grenade_BounceVelocity.Grenade_BounceVelocity'";
    class USphereComponent* CollisionComp = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_AreaEffect.Default__BP_MasterExplosive_AreaEffect_C:CollisionComp'";
    class UStaticMeshComponent* GrenadeMesh = "StaticMeshComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_AreaEffect.Default__BP_MasterExplosive_AreaEffect_C:GrenadeMesh'";
    class UProjectileMovementComponent* ProjectileMovement = "ProjectileMovementComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_AreaEffect.Default__BP_MasterExplosive_AreaEffect_C:ProjectileMovement'";
    class UAkComponent* GrenadeAkComponent = "AkComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_AreaEffect.Default__BP_MasterExplosive_AreaEffect_C:GrenadeAkComponent'";
    class UIRRGrenadePredictionComponent* GrenadePredictionComponent = "IRRGrenadePredictionComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_AreaEffect.Default__BP_MasterExplosive_AreaEffect_C:GrenadePredictionComponent'";
    class USphereComponent* RootComponent = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_AreaEffect.Default__BP_MasterExplosive_AreaEffect_C:CollisionComp'";
    class USmoothSync* SmoothSync;

};