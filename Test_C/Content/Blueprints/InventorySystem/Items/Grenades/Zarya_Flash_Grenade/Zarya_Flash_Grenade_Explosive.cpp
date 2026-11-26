class AZarya_Flash_Grenade_Explosive_C : public ABP_MasterExplosive_Flash_Bang_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Zarya_Flash_Grenade_Explosive_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Zarya_Flash_Grenade_Explosive_C:InheritableComponentHandler'";
    float FlashRadiusMultiplier = 3;
    class USGE_Blinded_C* BlindedEffectTemplate = "SGE_Blinded_C'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Default__Zarya_Flash_Grenade_Explosive_C:SGE_Blinded_C_0'";
    struct FRuntimeFloatCurve LifetimeScaleCurve = {
        "EditorCurveData": {
            "Keys": {}
        }
    };
    class USphereComponent* EffectVolume = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Default__Zarya_Flash_Grenade_Explosive_C:EffectVolume'";
    class UIRRZoneEffectSourceComponent* ZoneEffectSource = "IRRZoneEffectSourceComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Default__Zarya_Flash_Grenade_Explosive_C:ZoneEffectSource'";
    bool bHideGrenadeMeshOnDetonate = false;
    class UAkAudioEvent* GrenadeExplosionEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/FlashGrenade/FlashGrenade_Explosion.FlashGrenade_Explosion'";
    class UAkAudioEvent* GrenadeBounceEvent = "AkAudioEvent'Test_C/Content/WwiseAudio/Events/Default_Work_Unit/SFX/Explosives/Explosives/Grenades/Grenades/FlashGrenade/FlashGrenade_Bounce.FlashGrenade_Bounce'";
    float GrenadeBounceImpactThreshold = 120;
    class USphereComponent* CollisionComp = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Default__Zarya_Flash_Grenade_Explosive_C:CollisionComp'";
    class UStaticMeshComponent* GrenadeMesh = "StaticMeshComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Default__Zarya_Flash_Grenade_Explosive_C:GrenadeMesh'";
    class UProjectileMovementComponent* ProjectileMovement = "ProjectileMovementComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Default__Zarya_Flash_Grenade_Explosive_C:ProjectileMovement'";
    class UAkComponent* GrenadeAkComponent = "AkComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Default__Zarya_Flash_Grenade_Explosive_C:GrenadeAkComponent'";
    class UIRRGrenadePredictionComponent* GrenadePredictionComponent = "IRRGrenadePredictionComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Default__Zarya_Flash_Grenade_Explosive_C:GrenadePredictionComponent'";
    class USphereComponent* RootComponent = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/Zarya_Flash_Grenade/Zarya_Flash_Grenade_Explosive.Default__Zarya_Flash_Grenade_Explosive_C:CollisionComp'";
};