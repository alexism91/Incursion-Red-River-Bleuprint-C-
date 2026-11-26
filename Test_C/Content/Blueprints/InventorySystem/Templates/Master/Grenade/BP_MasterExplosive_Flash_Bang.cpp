class ABP_MasterExplosive_Flash_Bang_C : public AGrenadeActor_Flashbang
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.BP_MasterExplosive_Flash_Bang_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.BP_MasterExplosive_Flash_Bang_C:ExecuteUbergraph_BP_MasterExplosive_Flash_Bang'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    class UNiagaraSystem* GrenadeExplosionNiagaraSystem = "NiagaraSystem'Test_C/Content/Environment/Misc/PostProcessing/PP/Flashbang/N_Smoke_System.N_Smoke_System'";
    float VisibilityScore = 0.05;
    struct FLinearColor EffectColor = FLinearColor(0, 0, 0, 0);
    float FlashRadiusMultiplier = 2;
    class UCurveFloat* DistanceFalloffCurve = "CurveFloat'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/FC_Flashbag_DistanceCurve.FC_Flashbag_DistanceCurve'";
    class UCurveFloat* AngleFalloffCurve = "CurveFloat'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/FC_Flashbag_AngleCurve.FC_Flashbag_AngleCurve'";
    class USGE_Blinded_C* BlindedEffectTemplate = "SGE_Blinded_C'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.Default__BP_MasterExplosive_Flash_Bang_C:SGE_Blinded_C_0'";
    struct FRuntimeFloatCurve LifetimeScaleCurve = {
        "EditorCurveData": {
            "Keys": {
                FRichCurveKey(RCIM_Linear, RCTM_Auto, RCTWM_WeightedNone, -0, 0, 0, 0, 0, 0),
                FRichCurveKey(RCIM_Linear, RCTM_Auto, RCTWM_WeightedNone, 0,15, 1, 0, 0, 0, 0)
            }
        }
    };
    class USphereComponent* EffectVolume = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.Default__BP_MasterExplosive_Flash_Bang_C:EffectVolume'";
    class UIRRZoneEffectSourceComponent* ZoneEffectSource = "IRRZoneEffectSourceComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.Default__BP_MasterExplosive_Flash_Bang_C:ZoneEffectSource'";
    float SpinStrength = 0.5;
    class UAkAudioEvent* GrenadeExplosionEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/HandGrenade/HandGrenade_Explosion.HandGrenade_Explosion'";
    class UAkAudioEvent* GrenadeBounceEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/HandGrenade/HandGrenade_Bounce.HandGrenade_Bounce'";
    float GrenadeBounceImpactThreshold = 10;
    class UAkRtpc* GrenadeBounceImpactRtpc = "AkRtpc'Test_C/Content/WwiseAudio/Game_Parameters/Default_Work_Unit/Explosives/Grenade/Grenade_BounceVelocity.Grenade_BounceVelocity'";
    class USphereComponent* CollisionComp = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.Default__BP_MasterExplosive_Flash_Bang_C:CollisionComp'";
    class UStaticMeshComponent* GrenadeMesh = "StaticMeshComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.Default__BP_MasterExplosive_Flash_Bang_C:GrenadeMesh'";
    class UProjectileMovementComponent* ProjectileMovement = "ProjectileMovementComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.Default__BP_MasterExplosive_Flash_Bang_C:ProjectileMovement'";
    class UAkComponent* GrenadeAkComponent = "AkComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.Default__BP_MasterExplosive_Flash_Bang_C:GrenadeAkComponent'";
    class UIRRGrenadePredictionComponent* GrenadePredictionComponent = "IRRGrenadePredictionComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.Default__BP_MasterExplosive_Flash_Bang_C:GrenadePredictionComponent'";
    class USphereComponent* RootComponent = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Templates/Master/Grenade/BP_MasterExplosive_Flash_Bang.Default__BP_MasterExplosive_Flash_Bang_C:CollisionComp'";
    class USmoothSync* SmoothSync;

};