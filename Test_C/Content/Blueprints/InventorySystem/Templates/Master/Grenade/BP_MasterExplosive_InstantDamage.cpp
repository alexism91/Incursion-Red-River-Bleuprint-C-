class ABP_MasterExplosive_InstantDamage_C : public AGrenadeActor_Explosive
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_InstantDamage.BP_MasterExplosive_InstantDamage_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_InstantDamage.BP_MasterExplosive_InstantDamage_C:ExecuteUbergraph_BP_MasterExplosive_InstantDamage'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UNiagaraSystem* GrenadeExplosionNiagaraSystem = "NiagaraSystem'Test_C/Content/Particles/Grenade/Dirt/NS_GrenadeExplosion_Dirt.NS_GrenadeExplosion_Dirt'";
    float ExplosionDamage = 20;
    class UBlueprintGeneratedClass* ExplosionDamageType = "BlueprintGeneratedClass'Test_C/Content/Blueprints/DamageTypes/BP_BlastDamage.BP_BlastDamage_C'";
    float ShrapnelDamage = 40;
    class UBlueprintGeneratedClass* ShrapnelDamageType = "BlueprintGeneratedClass'Test_C/Content/Blueprints/DamageTypes/BP_BulletDamage.BP_BulletDamage_C'";
    class UCurveFloat* DamageFalloffCurve = "CurveFloat'Test_C/Content/Blueprints/DamageTypes/FC_GrenadeDamageFalloff.FC_GrenadeDamageFalloff'";
    class USphereComponent* ExplosionSphere = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_InstantDamage.Default__BP_MasterExplosive_InstantDamage_C:ExplosionSphere'";
    class URadialForceComponent* RadialForce = "RadialForceComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_InstantDamage.Default__BP_MasterExplosive_InstantDamage_C:RadialForce'";
    float SpinStrength = 0.5;
    bool bDrawDebug = true;
    class UAkAudioEvent* GrenadeExplosionEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/HandGrenade/HandGrenade_Explosion.HandGrenade_Explosion'";
    class UAkAudioEvent* GrenadeBounceEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/HandGrenade/HandGrenade_Bounce.HandGrenade_Bounce'";
    float GrenadeBounceImpactThreshold = 10;
    class UAkRtpc* GrenadeBounceImpactRtpc = "AkRtpc'Test_C/Content/WwiseAudio/Game_Parameters/Default_Work_Unit/Explosives/Grenade/Grenade_BounceVelocity.Grenade_BounceVelocity'";
    class USphereComponent* CollisionComp = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_InstantDamage.Default__BP_MasterExplosive_InstantDamage_C:CollisionComp'";
    class UStaticMeshComponent* GrenadeMesh = "StaticMeshComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_InstantDamage.Default__BP_MasterExplosive_InstantDamage_C:GrenadeMesh'";
    class UProjectileMovementComponent* ProjectileMovement = "ProjectileMovementComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_InstantDamage.Default__BP_MasterExplosive_InstantDamage_C:ProjectileMovement'";
    class UAkComponent* GrenadeAkComponent = "AkComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_InstantDamage.Default__BP_MasterExplosive_InstantDamage_C:GrenadeAkComponent'";
    class UIRRGrenadePredictionComponent* GrenadePredictionComponent = "IRRGrenadePredictionComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_InstantDamage.Default__BP_MasterExplosive_InstantDamage_C:GrenadePredictionComponent'";
    class USphereComponent* RootComponent = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_InstantDamage.Default__BP_MasterExplosive_InstantDamage_C:CollisionComp'";
    class USmoothSync* SmoothSync;

};