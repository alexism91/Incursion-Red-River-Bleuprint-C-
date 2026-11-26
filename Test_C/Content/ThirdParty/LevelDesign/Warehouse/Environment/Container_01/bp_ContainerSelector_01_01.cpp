class Abp_ContainerSelector_01_01_C : public AActor
{
public:
    class USimpleConstructionScript* SimpleConstructionScript = "SimpleConstructionScript'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/bp_ContainerSelector_01_01.bp_ContainerSelector_01_01_C:SimpleConstructionScript_0'";
    class UFunction* UberGraphFunction = "Function'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/bp_ContainerSelector_01_01.bp_ContainerSelector_01_01_C:ExecuteUbergraph_bp_ContainerSelector_01_01'";
    struct FPointerToUberGraphFrame UberGraphFrame = {};
    bool Use Custom Data Primitive Color = true;
    struct FLinearColor Paint Color = FLinearColor(1, 1, 1, 1);
    struct FLinearColor Rust Color = FLinearColor(1, 1, 1, 1);
    TArray<class UStaticMesh*> BaseTemplate = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/sm_Container_Base_01_01.sm_Container_Base_01_01'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/sm_Container_Base_01_02.sm_Container_Base_01_02'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/sm_Container_Base_01_03.sm_Container_Base_01_03'"
    };
    TArray<class UStaticMesh*> BodyTemplate = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/sm_Container_Body_01_01.sm_Container_Body_01_01'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/sm_Container_Body_01_02.sm_Container_Body_01_02'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/sm_Container_Body_01_03.sm_Container_Body_01_03'"
    };
    TArray<class UStaticMesh*> TopTemplate = {
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/sm_Container_Top_01_01.sm_Container_Top_01_01'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/sm_Container_Top_01_02.sm_Container_Top_01_02'",
        "StaticMesh'Test_C/Content/ThirdParty/LevelDesign/Warehouse/Environment/Container_01/sm_Container_Top_01_03.sm_Container_Top_01_03'"
    };
    class UStaticMeshComponent* Top;
    class UStaticMeshComponent* Body;
    class UStaticMeshComponent* Base;
    class USceneComponent* DefaultSceneRoot;
    int BaseSelector;
    int BodySelector;
    int TopSelector;

};