class ABP_RGD_Smoke_Grenade_Explosive_C : public ABP_MasterExplosive_AreaEffect_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.BP_RGD_Smoke_Grenade_Explosive_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.BP_RGD_Smoke_Grenade_Explosive_C:InheritableComponentHandler'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.BP_RGD_Smoke_Grenade_Explosive_C:ExecuteUbergraph_BP_RGD_Smoke_Grenade_Explosive'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UNiagaraSystem* GrenadeExplosionNiagaraSystem = "NiagaraSystem'Test_C/Content/ThirdParty/LevelDesign/UrbanDistrict/Effects/Smoke_01/ns_SmokeGrenade_New.ns_SmokeGrenade_New'";
    struct FLinearColor EffectColor = FLinearColor(0,237223, 0,286458, 0,237223, 0,9);
    struct FRuntimeFloatCurve LifetimeScaleCurve = {
        "EditorCurveData": {
            "Keys": {
                FRichCurveKey(RCIM_Cubic, RCTM_Auto, RCTWM_WeightedNone, 0, 0, 0, 0, 0, 0),
                FRichCurveKey(RCIM_Cubic, RCTM_User, RCTWM_WeightedNone, 0,4, 1, 4,597702, 0, 4,597703, 0)
            }
        }
    };
    enum AIAvoidance = EIRRAreaEffectAIAvoidance::SmokeScreen;
    class UAkAudioEvent* AreaEffectAkStartEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/SmokeGrenade/SmokeGrenade_Explosion.SmokeGrenade_Explosion'";
    class UAkAudioEvent* AreaEffectEndEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/SmokeGrenade/SmokeGrenade_Smoke_Stop.SmokeGrenade_Smoke_Stop'";
    class UAkRtpc* AreaEffectLifetimeRtpc = "AkRtpc'Test_C/Content/WwiseAudio/Game_Parameters/Default_Work_Unit/Weapons/smoke_grenade_time.smoke_grenade_time'";
    class USphereComponent* EffectVolume = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.Default__BP_RGD_Smoke_Grenade_Explosive_C:EffectVolume'";
    class UIRRZoneEffectSourceComponent* ZoneEffectSource = "IRRZoneEffectSourceComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.Default__BP_RGD_Smoke_Grenade_Explosive_C:ZoneEffectSource'";
    class UObject* GrenadeExplosionEvent = nullptr;
    class UAkAudioEvent* GrenadeBounceEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/SmokeGrenade/SmokeGrenade_Bounce.SmokeGrenade_Bounce'";
    class USphereComponent* CollisionComp = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.Default__BP_RGD_Smoke_Grenade_Explosive_C:CollisionComp'";
    class UStaticMeshComponent* GrenadeMesh = "StaticMeshComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.Default__BP_RGD_Smoke_Grenade_Explosive_C:GrenadeMesh'";
    class UProjectileMovementComponent* ProjectileMovement = "ProjectileMovementComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.Default__BP_RGD_Smoke_Grenade_Explosive_C:ProjectileMovement'";
    class UAkComponent* GrenadeAkComponent = "AkComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.Default__BP_RGD_Smoke_Grenade_Explosive_C:GrenadeAkComponent'";
    class UIRRGrenadePredictionComponent* GrenadePredictionComponent = "IRRGrenadePredictionComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.Default__BP_RGD_Smoke_Grenade_Explosive_C:GrenadePredictionComponent'";
    class USphereComponent* RootComponent = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/RGD_Smoke_Grenade/BP_RGD_Smoke_Grenade_Explosive.Default__BP_RGD_Smoke_Grenade_Explosive_C:CollisionComp'";
    class UNiagaraComponent* Niagara;

};