class ABP_ProjectilePool_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/BP_ProjectilePool.BP_ProjectilePool_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/UltimateShooterKit/USK/Blueprints/BP_ProjectilePool.BP_ProjectilePool_C:ExecuteUbergraph_BP_ProjectilePool'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    int32 ProjectileCount = 3;
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true
    };
    class UBillboardComponent* Billboard;
    TArray<class ABP_MasterProjectile_C*> PooledBullets;

};