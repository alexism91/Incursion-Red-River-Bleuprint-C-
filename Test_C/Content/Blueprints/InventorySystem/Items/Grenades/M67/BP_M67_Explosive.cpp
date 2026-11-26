class ABP_M67_Explosive_C : public ABP_MasterExplosive_InstantDamage_C
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/M67/BP_M67_Explosive.BP_M67_Explosive_C:SimpleConstructionScript_0'";
    class UInheritableComponentHandler* InheritableComponentHandler = "InheritableComponentHandler'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/M67/BP_M67_Explosive.BP_M67_Explosive_C:InheritableComponentHandler'";
    float ExplosionDamage = 100;
    float ShrapnelDamage = 200;
    class USphereComponent* ExplosionSphere = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/M67/BP_M67_Explosive.Default__BP_M67_Explosive_C:ExplosionSphere'";
    class URadialForceComponent* RadialForce = "RadialForceComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/M67/BP_M67_Explosive.Default__BP_M67_Explosive_C:RadialForce'";
    class USphereComponent* CollisionComp = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/M67/BP_M67_Explosive.Default__BP_M67_Explosive_C:CollisionComp'";
    class UStaticMeshComponent* GrenadeMesh = "StaticMeshComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/M67/BP_M67_Explosive.Default__BP_M67_Explosive_C:GrenadeMesh'";
    class UProjectileMovementComponent* ProjectileMovement = "ProjectileMovementComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/M67/BP_M67_Explosive.Default__BP_M67_Explosive_C:ProjectileMovement'";
    class UAkComponent* GrenadeAkComponent = "AkComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/M67/BP_M67_Explosive.Default__BP_M67_Explosive_C:GrenadeAkComponent'";
    class UIRRGrenadePredictionComponent* GrenadePredictionComponent = "IRRGrenadePredictionComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/M67/BP_M67_Explosive.Default__BP_M67_Explosive_C:GrenadePredictionComponent'";
    class USphereComponent* RootComponent = "SphereComponent'Test_C/Content/Blueprints/InventorySystem/Items/Grenades/M67/BP_M67_Explosive.Default__BP_M67_Explosive_C:CollisionComp'";
};