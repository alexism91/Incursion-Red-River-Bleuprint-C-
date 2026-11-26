class ABP_Security_Camera_01c_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/MilitaryFiringRange/FiringRange/Blueprints/BP_Security_Camera_01c.BP_Security_Camera_01c_C:SimpleConstructionScript_0'";
    struct FActorTickFunction PrimaryActorTick = {
        "bStartWithTickEnabled": false
    };
    class UStaticMeshComponent* SM_Security_Camera_01c;
    class UStaticMeshComponent* SM_Security_Camera_01b;
    class UStaticMeshComponent* SM_Security_Camera_01a;
    class USceneComponent* DefaultSceneRoot;
};