class ABP_MW_Controller_C : public AActor
{
public:
    int32 NumReplicatedProperties = 1;
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/MWCommon/Blueprints/BP_MW_Controller.BP_MW_Controller_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/MWCommon/Blueprints/BP_MW_Controller.BP_MW_Controller_C:ExecuteUbergraph_BP_MW_Controller'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double WindIntensity = 1;
    double WindSpeed = 2;
    struct FVector PlayerLocation = FVector(0, 0, 0);
    struct FVector PlayerVelocity = FVector(0, 0, 0);
    struct FVector PlayerForwardVector = FVector(0, 0, 0);
    FName PlayerFoliageCollisonIndex = FName("1");
    double PlayerFoliageCollisionRadius = 64;
    double WindGustVariation = 0.85;
    double WindGustContrast = 1.5;
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true
    };
    class UBillboardComponent* MW Controller;
    class UArrowComponent* WindDirection;
    int PlayerPawnIndex;
    double ObjectSpeed;
    float WaterlineHeight;

};