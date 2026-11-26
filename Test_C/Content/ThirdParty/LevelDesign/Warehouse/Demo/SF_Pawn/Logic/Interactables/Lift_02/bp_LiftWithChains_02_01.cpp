class Abp_LiftWithChains_02_01_C : public AActor
{
public:
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Demo/SF_Pawn/Logic/Interactables/Lift_02/bp_LiftWithChains_02_01.bp_LiftWithChains_02_01_C:LiftMovement_Timeline_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Demo/SF_Pawn/Logic/Interactables/Lift_02/bp_LiftWithChains_02_01.bp_LiftWithChains_02_01_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Demo/SF_Pawn/Logic/Interactables/Lift_02/bp_LiftWithChains_02_01.bp_LiftWithChains_02_01_C:ExecuteUbergraph_bp_LiftWithChains_02_01'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double AnimationDuration = 5;
    double TopFloorHeight = 250;
    bool OnBottomFloor = true;
    double TopMechanismZOffset = 305;
    double CounterweightZOffset = -50;
    double WheelAngleDeltaPerRide = 720;
    class UStaticMesh* StaticMesh = "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Effects/Chain_01/sm_Chain_01_01_Link.sm_Chain_01_01_Link'";
    double Scale = 1.5;
    double MeshLength = 11;
    double MeshOffset = 4;
    double RotationAmount = 180;
    double RotationSegmentLength = 200;
    double AnimPosition = 1;
    class UHierarchicalInstancedStaticMeshComponent* CounterweightChainHISM_02;
    class USplineComponent* CounterweightSpline_02;
    class UHierarchicalInstancedStaticMeshComponent* CounterweightChainHISM_01;
    class USplineComponent* CounterweightSpline_01;
    class UHierarchicalInstancedStaticMeshComponent* LiftChainHISM_02;
    class USplineComponent* LiftSpline_02;
    class UHierarchicalInstancedStaticMeshComponent* LiftChainHISM_01;
    class USplineComponent* LiftSpline_01;
    class UAudioComponent* S_Switch_01_01;
    class UAudioComponent* S_SqueakyHinge_01_01;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* sm_CounterweightWheel;
    class UStaticMeshComponent* sm_Counterweight;
    class UStaticMeshComponent* sm_Lift_TopMechanism;
    class UBoxComponent* FloorLevelTrigger;
    class UStaticMeshComponent* s_LiftCabin;
    class USceneComponent* DefaultSceneRoot;
    class UTimelineComponent* LiftMovement_Timeline;
    double SectionLength;
    double SectionOffset;
    TArray<struct FTransform> Transforms;
    TArray<double> InstanceOffsetLift;
    TArray<double> InstanceOffsetCounterweight;
private:
    float LiftMovement_Timeline_CompletionPercentage_89F182954D18B7CF412E13B746471B03;
    float LiftMovement_Timeline_Zmovement_89F182954D18B7CF412E13B746471B03;
    byte LiftMovement_Timeline__Direction_89F182954D18B7CF412E13B746471B03;

};