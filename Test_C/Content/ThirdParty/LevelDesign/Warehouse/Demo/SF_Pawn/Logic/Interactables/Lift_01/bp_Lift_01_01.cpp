class Abp_Lift_01_01_C : public AActor
{
public:
    TArray<class UTimelineTemplate*> Timelines = {
        "TimelineTemplate'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Demo/SF_Pawn/Logic/Interactables/Lift_01/bp_Lift_01_01.bp_Lift_01_01_C:LiftMovement_Timeline_Template'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Demo/SF_Pawn/Logic/Interactables/Lift_01/bp_Lift_01_01.bp_Lift_01_01_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Demo/SF_Pawn/Logic/Interactables/Lift_01/bp_Lift_01_01.bp_Lift_01_01_C:ExecuteUbergraph_bp_Lift_01_01'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double AnimationDuration = 5;
    double TopFloorHeight = 250;
    bool OnBottomFloor = true;
    double TopMechanismZOffset = 305;
    double CounterweightZOffset = -50;
    double WheelAngleDeltaPerRide = 720;
    class UAudioComponent* S_Switch_01_01;
    class UAudioComponent* S_SqueakyHinge_01_01;
    class UStaticMeshComponent* sm_RopeTile_01_04;
    class UStaticMeshComponent* sm_RopeTile_01_05;
    class UStaticMeshComponent* sm_RopeTile_01_03;
    class UStaticMeshComponent* sm_RopeTile_01_02;
    class UStaticMeshComponent* sm_CounterweightWheel;
    class UStaticMeshComponent* sm_Counterweight;
    class UStaticMeshComponent* sm_Lift_TopMechanism;
    class UBoxComponent* FloorLevelTrigger;
    class UStaticMeshComponent* s_LiftCabin;
    class USceneComponent* DefaultSceneRoot;
    class UTimelineComponent* LiftMovement_Timeline;
private:
    float LiftMovement_Timeline_CompletionPercentage_3CE2AF56403C1391D71A94B131920DC0;
    float LiftMovement_Timeline_Zmovement_3CE2AF56403C1391D71A94B131920DC0;
    byte LiftMovement_Timeline__Direction_3CE2AF56403C1391D71A94B131920DC0;

};