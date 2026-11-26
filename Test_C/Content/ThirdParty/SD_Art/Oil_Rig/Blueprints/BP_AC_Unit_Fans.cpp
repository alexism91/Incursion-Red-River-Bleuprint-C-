class ABP_AC_Unit_Fans_C : public AActor
{
public:
    TArray<class UStaticMeshComponent*> ComponentTemplates = {
        "StaticMeshComponent'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_AC_Unit_Fans.BP_AC_Unit_Fans_C:NODE_AddStaticMeshComponent-0'"
    };
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_AC_Unit_Fans.BP_AC_Unit_Fans_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Blueprints/BP_AC_Unit_Fans.BP_AC_Unit_Fans_C:ExecuteUbergraph_BP_AC_Unit_Fans'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    double Propeller_Speed = -600;
    class UStaticMesh* AC_Module_03 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Electrical_Structures_Panels/SM_Cooler_Module_03_.SM_Cooler_Module_03_'";
    class UStaticMesh* AC_Module_02 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Electrical_Structures_Panels/SM_Cooler_Module_02_.SM_Cooler_Module_02_'";
    class UStaticMesh* AC_Module_01 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Electrical_Structures_Panels/SM_Cooler_Module_1_.SM_Cooler_Module_1_'";
    class UStaticMesh* AC_Large_Module_03 = "StaticMesh'Test_C/Content/ThirdParty/SD_Art/Oil_Rig/Assets/Electrical_Structures_Panels/SM_ACunit_Big_Module_3_.SM_ACunit_Big_Module_3_'";
    struct FTransform Coller_Blade_1_Move = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(0, -203,6, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform Coller_Blade_2_Move = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(131, -180,5, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform Coller_Blade_3_Move = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(221,5, -22,364674, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform Coller_Blade_1_Big_Move = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(2, -4, 187,20634),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform Coller_Blade_Big_Move = {
        "Rotation": FQuat(0, -0, 0, 1),
        "Translation": FVector(-2,5, -4, 187,20634),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform Coller_Blade_2_Big_Move = {
        "Rotation": FQuat(-0,1984473, -0,6786889, -0,19844726, 0,6786888),
        "Translation": FVector(70, -70, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FTransform Coller_Blade_3_Big_Move = {
        "Rotation": FQuat(-0,6123723, -0,35355303, 0,35355332, 0,6123728),
        "Translation": FVector(90, -40, 0),
        "Scale3D": FVector(1, 1, 1)
    };
    struct FActorTickFunction PrimaryActorTick = {
        "bCanEverTick": true,
        "bStartWithTickEnabled": false
    };
    class UStaticMeshComponent* SM_Cooler_Module_Blade;
    class UStaticMeshComponent* SM_Cooler_Module_Blade3;
    class UStaticMeshComponent* SM_Cooler_Module_Blade2;
    class UStaticMeshComponent* SM_Cooler_Module_Blade1;
    class USceneComponent* DefaultSceneRoot;
    E_AC_Module AC_Module_Types;
    class UStaticMeshComponent* AC_Module;
    class AActor* Target;
    class AActor* Default_AC_Mesh;
    class UStaticMesh* Default_Mesh;

};